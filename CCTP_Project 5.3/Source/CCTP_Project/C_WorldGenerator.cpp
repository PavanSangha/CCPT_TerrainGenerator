// Fill out your copyright notice in the Description page of Project Settings.


#include "C_WorldGenerator.h"
#include "KismetProceduralMeshLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
// Sets default values
AC_WorldGenerator::AC_WorldGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
    TerrainMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("TerrainMesh"));
	TerrainMesh->bUseAsyncCooking = true;
	TileReplacedByDistance = CellSize * (NumSectionX + NumSectionY) / 2 * (XVertexCount + YvertexCount);

	
}

// Called when the game starts or when spawned
void AC_WorldGenerator::BeginPlay()
{
	
	Super::BeginPlay();


}

// Called every frame
void AC_WorldGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AC_WorldGenerator::GenerateMap(const int InSectionIndexX, const int InSectionIndexY)
{
	FVector Offet = FVector(InSectionIndexX * (XVertexCount - 1), InSectionIndexY * (YvertexCount - 1), 0.f) * CellSize;

	TArray<FVector>Vertices;
	FVector Vertex;
	TArray<FVector2D> UVs;
	FVector2D UV;
	TArray<FVector> Normals;
	TArray<FProcMeshTangent> Tangents;

	//Vertices & UVs
	for (int32 iVertY = -1; iVertY <= YvertexCount; iVertY++)
	{
		for (int32 iVertX = -1; iVertX <= XVertexCount; iVertX++)
		{
			//vertex calcultion
			Vertex.X = iVertX * CellSize + Offet.X;
			Vertex.Y = iVertY * CellSize + Offet.Y;
			Vertex.Z = GetHeight(FVector2D(Vertex.X, Vertex.Y));
			Vertices.Add(Vertex);
			//UVs
			UV.X = (iVertX + (InSectionIndexX * (XVertexCount - 1))) * CellSize / 100;
			UV.Y = (iVertY + (InSectionIndexY * (YvertexCount - 1))) * CellSize / 100;
			UVs.Add(UV);
		}

	}

	//Triangles
	if (Triangles.Num() == 0)
	{


		for (int32 iTriangleY = 0; iTriangleY <= YvertexCount; iTriangleY++)
		{

			for (int32 iTriangleX = 0; iTriangleX <= XVertexCount; iTriangleX++)
			{
				Triangles.Add(iTriangleX + iTriangleY * (XVertexCount + 2));
				Triangles.Add(iTriangleX + (iTriangleY + 1) * (XVertexCount + 2));
				Triangles.Add(iTriangleX + iTriangleY * (XVertexCount + 2) + 1);

				Triangles.Add(iTriangleX + (iTriangleY + 1) * (XVertexCount + 2));
				Triangles.Add(iTriangleX + (iTriangleY + 1) * (XVertexCount + 2) + 1);
				Triangles.Add(iTriangleX + iTriangleY * (XVertexCount + 2) + 1);


			}

		}
	}


	int VertexIndex = 0;


	UKismetProceduralMeshLibrary::CalculateTangentsForMesh(Vertices, Triangles, UVs, Normals, Tangents);

	//subsection vertices and UVs
	for (int32 iVertY = -1; iVertY <= YvertexCount; iVertY++)
	{
		for (int32 iVertX = -1; iVertX <= XVertexCount; iVertX++)
		{
			if (-1 < iVertY && iVertY < YvertexCount && -1 < iVertX && iVertX < XVertexCount)
			{
				SSVertices.Add(Vertices[VertexIndex]);
				SSUVs.Add(UVs[VertexIndex]);
				SSNormals.Add(Normals[VertexIndex]);
				SSTangents.Add(Tangents[VertexIndex]);

			}
			VertexIndex++;
		}
	}
	//Subsection Triangles
	if (SSTriangles.Num()== 0)
	{

		for (int32 iTriangleY = 0; iTriangleY <= YvertexCount - 2; iTriangleY++)
		{

			for (int32 iTriangleX = 0; iTriangleX <= XVertexCount - 2; iTriangleX++)
			{
				SSTriangles.Add(iTriangleX + iTriangleY * XVertexCount);
				SSTriangles.Add(iTriangleX + iTriangleY * XVertexCount + XVertexCount);
				SSTriangles.Add(iTriangleX + iTriangleY * XVertexCount + 1);

				SSTriangles.Add(iTriangleX + iTriangleY * XVertexCount + XVertexCount);
				SSTriangles.Add(iTriangleX + iTriangleY * XVertexCount + XVertexCount + 1);
				SSTriangles.Add(iTriangleX + iTriangleY * XVertexCount + 1);




			}
		}
	}
	TileDataReady = true;
}


// Change Perlin Noise Height of generated terrain 
float AC_WorldGenerator::GetHeight(FVector2D Location)
{
	return PerlinNoiseWide(Location,.00001f,20000,FVector2D(.1f)) + 
		PerlinNoiseWide(Location, .0001f,3500, FVector2D(.2f)) + 
		PerlinNoiseWide(Location, .001f, 750, FVector2D(.3f))+
		PerlinNoiseWide(Location, .01f, 100, FVector2D(.4f));
}

float AC_WorldGenerator::PerlinNoiseWide(const FVector2D Location, const float Scale, const float Amplitude, const FVector2D Offset)
{
	return FMath::PerlinNoise2D(Location*Scale+ FVector2D(.1f, .1f)+Offset)*Amplitude ;
}

void AC_WorldGenerator::GenerateTerrainAsync(const int InSectionIndexX, const int InSectionIndexY)
{

	GeneratorBusy = true;
	SectionIndexX = InSectionIndexX;
	SectionIndexY = InSectionIndexY;
	ListedTiles.Add(FIntPoint(InSectionIndexX, InSectionIndexY), MeshSectionIndex);

	AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [&]()
		{
			auto WorldGenerateTask = new FAsyncTask <FAsyncWorldMapGenerator>(this);
			WorldGenerateTask->StartBackgroundTask();
			WorldGenerateTask->EnsureCompletion();
			delete WorldGenerateTask;

		}
	);


}

int AC_WorldGenerator::DrawTile()
{
	int DrawnMeshSection;
	TileDataReady = false;
	int FurthestTileIndex = GetFurthestUpdatedTile();
	if (FurthestTileIndex>-1)
	{
		TArray<int>ValueArray;
		TArray<FIntPoint>KeyArray;
		ListedTiles.GenerateKeyArray(KeyArray);
		ListedTiles.GenerateValueArray(ValueArray);
		int ReplacedMeshSection = ValueArray[FurthestTileIndex];
		FIntPoint ReplacedTile = KeyArray[FurthestTileIndex];
		DrawnMeshSection = ReplacedMeshSection;

		
		TerrainMesh->ClearMeshSection(ReplacedMeshSection);
		TerrainMesh->CreateMeshSection(ReplacedMeshSection, SSVertices, SSTriangles, SSNormals, SSUVs, TArray<FColor>(), SSTangents, true);

		ListedTiles.Add(FIntPoint(SectionIndexX, SectionIndexY), ReplacedMeshSection);
		ListedTiles.Remove(ReplacedTile);


	}
	else
	{


		//create mesh section

		TerrainMesh->CreateMeshSection(MeshSectionIndex, SSVertices, SSTriangles, SSNormals, SSUVs, TArray<FColor>(), SSTangents, true);
		if (TerrainMaterial)
		{
			TerrainMesh->SetMaterial(MeshSectionIndex, TerrainMaterial);
		}
		DrawnMeshSection = MeshSectionIndex;

		MeshSectionIndex++;
	}
	

	SSVertices.Empty();
	SSNormals.Empty();
	SSNormals.Empty();
	SSUVs.Empty();
	SSTangents.Empty();

	return DrawnMeshSection;
}

FVector AC_WorldGenerator::GetPlayerLocation()
{
	ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	if (PlayerCharacter) {


		return PlayerCharacter->GetActorLocation();
	}
	return FVector(0,0,0);
}

FVector2D AC_WorldGenerator::GetTileLocation(FIntPoint TileCoordinate)
{
	return FVector2D(TileCoordinate*FIntPoint(XVertexCount -1, YvertexCount -1)*CellSize)+ FVector2D(XVertexCount -1, YvertexCount -1) * CellSize/2;
}

FIntPoint AC_WorldGenerator::GetClosestListedTile()
{

	float ClosestDistance = TNumericLimits<float>::Max();
	FIntPoint ClosestTile{};


	for(const auto& Entry: ListedTiles)
	{
		const FIntPoint& Key = Entry.Key;
		int Value = Entry.Value;

		if (Value == -1) {
			FVector2D TileLocation = GetTileLocation(Key);

			FVector PlayerLocation = GetPlayerLocation();
			float Distance = FVector2D::Distance(TileLocation, FVector2D(PlayerLocation));


			if (Distance < ClosestDistance) {
				ClosestDistance = Distance;

				ClosestTile = Key;
			}
		}
	}
	return ClosestTile;
}

int AC_WorldGenerator::GetFurthestUpdatedTile()
{


	float FurthestDistance = -1;
	int FurthestTileIndex = -1;
	int CurrentIndex = 0;

	for (const auto& Entry : ListedTiles)
	{
		const FIntPoint& Key = Entry.Key;
		int Value = Entry.Value;

		if (Value != -1) {
			FVector2D TileLocation = GetTileLocation(Key);

			FVector PlayerLocation = GetPlayerLocation();
			float Distance = FVector2D::Distance(TileLocation, FVector2D(PlayerLocation));


			if (Distance > FurthestDistance&& Distance > TileReplacedByDistance) {
				FurthestDistance = Distance;

				FurthestTileIndex = CurrentIndex;
			}
		}
		CurrentIndex++;
	}
	return FurthestTileIndex;
}


void FAsyncWorldMapGenerator::DoWork()
{
	WorldGenerator->GenerateMap(WorldGenerator->SectionIndexX, WorldGenerator->SectionIndexY);
}

