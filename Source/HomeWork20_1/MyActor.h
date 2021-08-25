// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UENUM(BlueprintType)
enum class EExample : uint8
{
	E_RED UMETA(DisplayName = "RED"),
	E_GREEN UMETA(DisplayName = "GREEN"),
	E_BLUE UMETA(DisplayName = "BLUE")
};

UCLASS()
class HOMEWORK20_1_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();
	
	UPROPERTY(BlueprintReadOnly)
	EExample ExampleEnumValue;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
