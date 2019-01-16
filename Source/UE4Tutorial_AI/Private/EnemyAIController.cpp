// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyAIController.h"

AEnemyAIController::AEnemyAIController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Assign to Team 1
	SetGenericTeamId(FGenericTeamId(TeamID));
}

// Called when the game starts or when spawned
void AEnemyAIController::BeginPlay()
{
	Super::BeginPlay();
	SetGenericTeamId(FGenericTeamId(TeamID));
}
