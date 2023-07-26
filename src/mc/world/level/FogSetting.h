#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogSetting {

public:
    // prevent constructor by default
    FogSetting& operator=(FogSetting const&) = delete;
    FogSetting(FogSetting const&)            = delete;
    FogSetting()                             = delete;

public:
    /**
     * @symbol ?ZERO_SETTING\@FogSetting\@\@2U1\@B
     */
    MCAPI static struct FogSetting const ZERO_SETTING; // NOLINT
};
