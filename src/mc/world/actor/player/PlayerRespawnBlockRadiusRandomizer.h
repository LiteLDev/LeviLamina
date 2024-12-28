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
    ::ll::UntypedStorage<4, 4> mUnk21e14b;
    ::ll::UntypedStorage<4, 4> mUnke5afbb;
    ::ll::UntypedStorage<4, 4> mUnkaee767;
    ::ll::UntypedStorage<4, 4> mUnkb9223f;
    ::ll::UntypedStorage<4, 4> mUnk8ee1d1;
    ::ll::UntypedStorage<4, 4> mUnk8aa320;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerRespawnBlockRadiusRandomizer& operator=(PlayerRespawnBlockRadiusRandomizer const&);
    PlayerRespawnBlockRadiusRandomizer(PlayerRespawnBlockRadiusRandomizer const&);
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
