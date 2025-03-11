// Fill out your copyright notice in the Description page of Project Settings.


#include "C_WorldGenerator.h"
#include "KismetProceduralMeshLibrary.h"
// Sets default values
AC_WorldGenerator::AC_WorldGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
    TerrainMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("TerrainMesh"));
	//TerrainMesh->SetupAttachment(GetRootComponent());
	
}

// Called when the game starts or when spawned
void AC_WorldGenerator::BeginPlay()
{
	
	Super::BeginPlay();

	//TerrainMesh->CreateMeshSection(TArray<FVector>(), TArray<FVector2D>(), TArray<FColor>(), TArray<FProcMeshTangent>(), true);


}

// Called every frame
void AC_WorldGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AC_WorldGenerator::GenerateMap(const int SectionIndexX, const int SectionIndexY)
{
	FVector Offet = FVector(SectionIndexX * (XVertexCount - 1), SectionIndexY * (YvertexCount - 1), 0.f) * CellSize;

	TArray<FVector>Vertices;
	FVector Vertex;
	TArray<FVector2D> UVs;
	FVector2D UV;
	TArray<int32>Triangles;
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
			Vertex.Z = 0.f;
			Vertices.Add(Vertex);
			//UVs
			UV.X = (iVertX + (SectionIndexX * (XVertexCount - 1))) * CellSize / 100;
			UV.Y = (iVertY + (SectionIndexY * (YvertexCount - 1))) * CellSize / 100;
			UVs.Add(UV);
		}

	}

	//Triangles
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
	//calculate subsection mesh to stop seams

	TArray<FVector>SSVertices;
	TArray<FVector2D> SSUVs;
	TArray<int32>SSTriangles;
	TArray<FVector> SSNormals;
	TArray<FProcMeshTangent> SSTangents;

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

	//create mesh section

	TerrainMesh->CreateMeshSection(MeshSectionIndex, SSVertices, SSTriangles, SSNormals, SSUVs, TArray<FColor>(), SSTangents, true);
	if (TerrainMaterial)
	{
		TerrainMesh->SetMaterial(MeshSectionIndex, TerrainMaterial);
	}
	MeshSectionIndex++;
}

float AC_WorldGenerator::GetHeight(FVector2D Location)
{
	return 0.0f;
}

