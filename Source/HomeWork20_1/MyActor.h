// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UENUM(BlueprintType)
enum class EExample : uint8
{
	E_RED	UMETA(DisplayName = "RED"),
	E_GREEN UMETA(DisplayName = "GREEN"),
	E_BLUE	UMETA(DisplayName = "BLUE")
};

USTRUCT(BlueprintType)
struct FMyData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EExample EnumValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 IntValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StringValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* ActorPtr;

	FMyData()
	{
		EnumValue	= EExample::E_RED;
		IntValue	= 10;
		StringValue = TEXT("MyString");
		ActorPtr	= nullptr;
	}
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
	UPROPERTY(BlueprintReadWrite)
	FMyData ExampleStructValue;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
