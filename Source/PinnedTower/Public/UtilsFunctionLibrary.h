// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilsFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class PINNEDTOWER_API UUtilsFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


public:
	UFUNCTION(BlueprintCallable, Category="Random")
	static TSubclassOf<AActor> RandomActorWithWeight(TMap<TSubclassOf<AActor>, float> possibleActors);


};
