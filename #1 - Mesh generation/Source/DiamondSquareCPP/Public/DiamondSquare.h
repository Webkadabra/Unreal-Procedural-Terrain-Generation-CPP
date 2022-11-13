// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DiamondSquare.generated.h"

class UProceduralMeshComponent;
class UMaterialInterface;

UCLASS()
class DIAMONDSQUARECPP_API ADiamondSquare : public AActor
{
	GENERATED_BODY()
	
public:	
	ADiamondSquare();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Meta = (MakeEditWidget = true))
	TArray<FVector> Vertices;

	UPROPERTY(EditAnywhere)
	TArray<int> Triangles;

	UPROPERTY(EditAnywhere)
	TArray<FVector2D> UV0;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* Material;

public:	
	virtual void Tick(float DeltaTime) override;

private:
	UProceduralMeshComponent* ProceduralMesh;
};
