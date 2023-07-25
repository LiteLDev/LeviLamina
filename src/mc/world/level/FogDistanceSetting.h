#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogDistanceSetting {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOGDISTANCESETTING
public:
    FogDistanceSetting& operator=(FogDistanceSetting const&) = delete;
    FogDistanceSetting(FogDistanceSetting const&)            = delete;
    FogDistanceSetting()                                     = delete;
#endif

public:
    /**
     * @symbol ?ZERO_SETTING\@FogDistanceSetting\@\@2U1\@B
     */
    MCAPI static struct FogDistanceSetting const ZERO_SETTING;
};
