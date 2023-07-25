#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogSetting {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOGSETTING
public:
    FogSetting& operator=(FogSetting const&) = delete;
    FogSetting(FogSetting const&)            = delete;
    FogSetting()                             = delete;
#endif

public:
    /**
     * @symbol ?ZERO_SETTING\@FogSetting\@\@2U1\@B
     */
    MCAPI static struct FogSetting const ZERO_SETTING;
};
