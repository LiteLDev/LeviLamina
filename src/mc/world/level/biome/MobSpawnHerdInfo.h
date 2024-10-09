#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobSpawnHerdInfo {
public:
    // prevent constructor by default
    MobSpawnHerdInfo(MobSpawnHerdInfo const&);
    MobSpawnHerdInfo();

public:
    // NOLINTBEGIN
    MCAPI MobSpawnHerdInfo(
        uint               min,
        uint               max,
        std::string const& initialEvent,
        uint               initialEventCount,
        std::string const& herdEvent,
        uint               herdEventSkipCount
    );

    MCAPI struct MobSpawnHerdInfo& operator=(struct MobSpawnHerdInfo const&);

    MCAPI ~MobSpawnHerdInfo();

    // NOLINTEND
};
