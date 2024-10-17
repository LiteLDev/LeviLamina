#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogTransitionSetting {
public:
    // prevent constructor by default
    FogTransitionSetting& operator=(FogTransitionSetting const&);
    FogTransitionSetting(FogTransitionSetting const&);
    FogTransitionSetting();

public:
    // NOLINTBEGIN
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static struct FogTransitionSetting const& ZERO_SETTING();

    // NOLINTEND
};
