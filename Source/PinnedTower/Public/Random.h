// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

static class PINNEDTOWER_API Random
{
public:
    static float NextInt(int low, int high)
    {
        if (!Seeded)
        {
            srand(time(NULL));
            Seeded = true;
        }
        if (high - low == 0) return 0;
        return (rand() % (high - low)) + low;
    }
    static bool Seeded;
};

bool Random::Seeded = false;
