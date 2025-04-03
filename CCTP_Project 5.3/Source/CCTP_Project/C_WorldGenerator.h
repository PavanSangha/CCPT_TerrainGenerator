// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "C_WorldGenerator.generated.h"

UCLASS()
class CCTP_PROJECT_API AC_WorldGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AC_WorldGenerator();
	

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int XVertexCount = 50;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int YvertexCount = 50;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float CellSize = 1000;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int NumSectionX = 2;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int NumSectionY = 2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int MeshSectionIndex = 0;



	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UProceduralMeshComponent* TerrainMesh;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInterface* TerrainMaterial = nullptr;


	UPROPERTY(BlueprintReadWrite)
	bool GeneratorBusy = false;

	UPROPERTY(BlueprintReadOnly)
	bool TileDataReady = false;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float TileReplacedByDistance;


	UPROPERTY(BlueprintReadWrite)
	TMap<FIntPoint, int> ListedTiles;


	int SectionIndexX = 0;
	int SectionIndexY = 0;

	TArray<int32>Triangles;

	//Mesh data
	TArray<FVector> SSVertices;
	TArray<FVector> SSNormals;
	TArray<FVector2D> SSUVs;
	TArray<int32> SSTriangles;
	TArray<FProcMeshTangent>SSTangents;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void GenerateMap(const int InSectionIndexX, const int InSectionIndexY);

	UFUNCTION(BlueprintCallable)
	void GenerateTerrainAsync(const int InSectionIndexX, const int InSectionIndexY);

	UFUNCTION(BlueprintCallable)
	int DrawTile();

	UFUNCTION(BlueprintCallable)
	FVector GetPlayerLocation();

	UFUNCTION(BlueprintCallable)
	FVector2D GetTileLocation(FIntPoint TileCoordinate);

	UFUNCTION(BlueprintCallable)
	FIntPoint GetClosestListedTile();

	UFUNCTION(BlueprintCallable)
	int GetFurthestUpdatedTile();

	float GetHeight(const FVector2D Location);
	float PerlinNoiseWide(const FVector2D Location, const float Scale, const float Amplitude, const FVector2D Offset );





};


class FAsyncWorldMapGenerator : public FNonAbandonableTask {

public:

	FAsyncWorldMapGenerator(AC_WorldGenerator* InworldGenerator) : WorldGenerator(InworldGenerator) {

	}

	FORCEINLINE TStatId GetStatId()const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FAsyncWorldMapGenerator, STATGROUP_ThreadPoolAsyncTasks);
	}

	void DoWork();

private:

	AC_WorldGenerator* WorldGenerator;

};
