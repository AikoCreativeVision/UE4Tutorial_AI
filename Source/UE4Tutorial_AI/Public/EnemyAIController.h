// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class UE4TUTORIAL_AI_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()


public :
	AEnemyAIController(const FObjectInitializer& ObjectInitializer);

	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	/** Assigned team for AIPerception
	 *	(0 : PlayerCharacter team, 255 : No team) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TeamID", meta = (UIMin = 0, ClampMin = 0, UIMax = 255, ClampMax = 255))
	uint8 TeamID = FGenericTeamId::NoTeam;
};
