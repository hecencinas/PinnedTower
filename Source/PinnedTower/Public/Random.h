// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

static class PINNEDTOWER_API Random
{
public:
    static float NextFloat(float high, float low)
    {
        if (!Seeded)
        {
            srand(time(NULL));
            Seeded = true;
        }
        return (rand() % int(high - low)) + low;
    }
    static bool Seeded;
};

bool Random::Seeded = false;
