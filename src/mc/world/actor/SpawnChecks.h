#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ILevel;
// clang-format on

class SpawnChecks {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool canSpawnNaturally(::ILevel const& level);

    MCNAPI static bool canSpawnWithWorldGeneration(::ILevel const& level);
    // NOLINTEND
};
