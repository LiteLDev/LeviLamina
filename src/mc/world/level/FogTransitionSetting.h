#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogTransitionSetting {

public:
    // prevent constructor by default
    FogTransitionSetting& operator=(FogTransitionSetting const&) = delete;
    FogTransitionSetting(FogTransitionSetting const&)            = delete;
    FogTransitionSetting()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?ZERO_SETTING\@FogTransitionSetting\@\@2U1\@B
     */
    MCAPI static struct FogTransitionSetting const ZERO_SETTING;
    // NOLINTEND
};
