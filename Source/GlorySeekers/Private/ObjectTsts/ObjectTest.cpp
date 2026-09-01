// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectTsts/ObjectTest.h"

// Sets default values
AObjectTest::AObjectTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AObjectTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObjectTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

