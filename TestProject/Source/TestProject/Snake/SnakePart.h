// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SnakePart.generated.h"

UCLASS()
class TESTPROJECT_API ASnakePart : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASnakePart();



	

	FVector GetPos() const
	{
		return Pos;
	}
	void SetPos(const FVector& _Pos)
	{
		Pos = _Pos;
	}
	void AddPos(const FVector& _Pos)
	{
		Pos += _Pos;
	}
	ASnakePart* Prev = nullptr;
	ASnakePart* Next = nullptr;

	FVector PrevPos;

	ASnakePart* LastNextPart();

	class ASnakeGameMode* GetSnakeGameMode();

protected:
	FVector Pos;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
