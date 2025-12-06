#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BiomeFilterGroup.h"
#include "mc/world/level/biome/MobSpawnRules.h"

struct ActorSpawnConditionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                 mSpawnWeight;
    ::ll::TypedStorage<8, 64, ::BiomeFilterGroup> mBiomeFilter;
    ::ll::TypedStorage<8, 392, ::MobSpawnRules>   mSpawnCondition;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorSpawnConditionData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
