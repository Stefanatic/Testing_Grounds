// Fill out your copyright notice in the Description page of Project Settings.

#include "TestingGrounds.h"
#include "ChooseNextWaypoint.h"
#include "BehaviorTree/BlackboardComponent.h"
//UE_LOG(LogTemp, Warning, TEXT("Ai in C++"));


EBTNodeResult::Type UChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	auto BlackboardComp = OwnerComp.GetBlackboardComponent();

	auto Index = BlackboardComp->GetValueAsInt(IndexKey.SelectedKeyName);
	UE_LOG(LogTemp, Warning, TEXT("Waypoint index %i"), Index);
	return EBTNodeResult::Succeeded;
 }

