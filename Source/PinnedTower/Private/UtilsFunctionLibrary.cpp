// Fill out your copyright notice in the Description page of Project Settings.


#include "UtilsFunctionLibrary.h"
#include "Random.h"

TSubclassOf<AActor> UUtilsFunctionLibrary::RandomActorWithWeight(TMap<TSubclassOf<AActor>, float> possibleActors)
{
	possibleActors.ValueSort([](float v1, float v2) { return v1 > v2; });

	float totalWeight = 0;
	for (const TPair<TSubclassOf<AActor>, float>& actorWeight : possibleActors) { totalWeight += actorWeight.Value; }
	
	float randomWeight = Random::NextFloat(totalWeight, 0);

	float curWeight = randomWeight;
	for (const TPair<TSubclassOf<AActor>, float>& actorWeight : possibleActors)
	{
		if (curWeight < actorWeight.Value) return actorWeight.Key;
		curWeight -= actorWeight.Value;
	}


	return possibleActors.begin().Key();
}

