// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakeActor.h"
#include "SnakeElementBase.h"

// Sets default values
ASnakeActor::ASnakeActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ElementSize = 100.f;
	LastMoveDirection = EMovementDirection::UP;
	MovementSpeed = 1.f;

}

// Called when the game starts or when spawned
void ASnakeActor::BeginPlay()
{
	Super::BeginPlay();
	//SetActorTickInterval(MovementSpeed);
	AddSnakeElement(4);
}

// Called every frame
void ASnakeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Move();
}

void ASnakeActor::AddSnakeElement(int ElementsNum)
{
	for (int i = 0; i < ElementsNum; ++i)
	{
		FVector NewLocation(SnakeElements.Num() * ElementSize, 0, 0);
		FTransform NewTransform (NewLocation);
		ASnakeElementBase* NewSnakeElem = GetWorld()->SpawnActor<ASnakeElementBase>(SnakeElementClass, NewTransform);
		//NewSnakeElem->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
		SnakeElements.Add(NewSnakeElem);
	}
	
}

void ASnakeActor::Move()
{
	FVector MovementVector(ForceInitToZero);

	MovementSpeed = ElementSize;
	
	switch (LastMoveDirection)
	{
	case EMovementDirection::UP:
		MovementVector.X += MovementSpeed;
		break;
	case EMovementDirection::DOWN:
		MovementVector.X -= MovementSpeed;
		break;
	case EMovementDirection::LEFT:
		MovementVector.Y += MovementSpeed;
		break;
	case EMovementDirection::RIGHT:
		MovementVector.Y -= MovementSpeed;
		break; 
	}

	//AddActorWorldOffset(MovementVector);

	for (int i = SnakeElements.Num() - 1; i > 0; i--)
	{
		auto CurrentElement = SnakeElements[i];
		auto PrevElement = SnakeElements[i - 1];
		FVector PrevLocation = PrevElement->GetActorLocation();
		CurrentElement->SetActorLocation(PrevLocation);
	}

	SnakeElements[0]->AddActorWorldOffset(MovementVector);
}

