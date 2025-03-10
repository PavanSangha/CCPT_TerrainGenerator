// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
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

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
