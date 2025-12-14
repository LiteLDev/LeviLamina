#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/random/XoroshiroRandom.h"
#include "mc/world/actor/player/PlayerRespawnBlockRadiusRandomizer.h"
#include "mc/world/level/GeneratorType.h"

class PlayerRespawnRandomizer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::XoroshiroRandom>                    mRandom;
    ::ll::TypedStorage<4, 4, uint>                                  mSpawnRadius;
    ::ll::TypedStorage<4, 4, uint>                                  mSquaredRadius;
    ::ll::TypedStorage<4, 24, ::PlayerRespawnBlockRadiusRandomizer> mSecondaryRandomizer;
    ::ll::TypedStorage<4, 24, ::PlayerRespawnBlockRadiusRandomizer> mPrimaryRandomizer;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mSpawnCenter;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mPrimaryOffset;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mPrimaryScale;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerRespawnRandomizer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerRespawnRandomizer(uint spawnRadius, ::GeneratorType const& worldType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint spawnRadius, ::GeneratorType const& worldType);
    // NOLINTEND
};
