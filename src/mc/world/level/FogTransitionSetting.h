#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogTransitionSetting {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOGTRANSITIONSETTING
public:
    FogTransitionSetting& operator=(FogTransitionSetting const&) = delete;
    FogTransitionSetting(FogTransitionSetting const&)            = delete;
    FogTransitionSetting()                                       = delete;
#endif

public:
    /**
     * @symbol ?ZERO_SETTING\@FogTransitionSetting\@\@2U1\@B
     */
    MCAPI static struct FogTransitionSetting const ZERO_SETTING;
};
