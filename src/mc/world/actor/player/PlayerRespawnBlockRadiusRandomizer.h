#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
class XoroshiroRandom;
// clang-format on

class PlayerRespawnBlockRadiusRandomizer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mSpawnRadius;
    ::ll::TypedStorage<4, 4, uint> mPossibleOrigins;
    ::ll::TypedStorage<4, 4, uint> mLargestPrime;
    ::ll::TypedStorage<4, 4, uint> mStartOrigin;
    ::ll::TypedStorage<4, 4, uint> mCurrentOrigin;
    ::ll::TypedStorage<4, 4, uint> mIterationCount;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerRespawnBlockRadiusRandomizer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerRespawnBlockRadiusRandomizer(uint spawnRadius, ::XoroshiroRandom& random);

    MCAPI bool getNextPosition(::Vec3& outOffset, bool confineToCircle);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint spawnRadius, ::XoroshiroRandom& random);
    // NOLINTEND
};
