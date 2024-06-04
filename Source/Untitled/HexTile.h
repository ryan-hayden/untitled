// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HexTile.generated.h"

UENUM()
enum class EHexTileType : uint8
{
	INVALID,
	GRASS,
	WATER,
	MAX UMETA(Hidden)
};

UCLASS()
class UNTITLED_API AHexTile : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, )
	
public:	
	// Sets default values for this actor's properties
	AHexTile();



};
