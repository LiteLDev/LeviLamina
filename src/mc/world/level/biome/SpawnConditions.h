#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class MobSpawnRules;
// clang-format on

class SpawnConditions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>        isOnSurface;
    ::ll::TypedStorage<1, 1, bool>        isInWater;
    ::ll::TypedStorage<1, 1, bool>        isInBubble;
    ::ll::TypedStorage<1, 1, bool>        isInLava;
    ::ll::TypedStorage<1, 1, bool>        isUnderground;
    ::ll::TypedStorage<8, 8, uint64>      delayEndWorldAge;
    ::ll::TypedStorage<4, 4, int>         rawBrightness;
    ::ll::TypedStorage<4, 12, ::BlockPos> pos;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SpawnConditions
    createSpawnConditionsWithSpawnRules(::SpawnConditions const& spawnConditions, ::MobSpawnRules const& spawnRules);
    // NOLINTEND
};
