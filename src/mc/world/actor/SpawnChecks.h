#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class ILevel;
class IRandom;
class ServerLevel;
// clang-format on

class SpawnChecks {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool canSpawnNaturally(::ILevel const& level);

    MCAPI static bool canSpawnPigZombieFromPortal(::Dimension const& dimension, ::IRandom& random);

    MCNAPI static bool canSpawnSkeletonTrap(::ILevel const& level, ::IRandom& random);

    MCNAPI static bool canSpawnWanderingTrader(::ServerLevel const& level);
    // NOLINTEND
};
