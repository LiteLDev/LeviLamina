#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogDistanceSetting {
public:
    // prevent constructor by default
    FogDistanceSetting& operator=(FogDistanceSetting const&);
    FogDistanceSetting(FogDistanceSetting const&);
    FogDistanceSetting();

public:
    // NOLINTBEGIN
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static struct FogDistanceSetting const& ZERO_SETTING();

    // NOLINTEND
};
