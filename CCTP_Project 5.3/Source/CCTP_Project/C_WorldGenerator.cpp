// Fill out your copyright notice in the Description page of Project Settings.


#include "C_WorldGenerator.h"

// Sets default values
AC_WorldGenerator::AC_WorldGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
    TerrainMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("TerrainMesh"));
	TerrainMesh->SetupAttachment(GetRootComponent());
	
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

}

