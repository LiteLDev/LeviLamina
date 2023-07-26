#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SkipMobTravelFlag {

public:
    // prevent constructor by default
    SkipMobTravelFlag& operator=(SkipMobTravelFlag const&) = delete;
    SkipMobTravelFlag(SkipMobTravelFlag const&)            = delete;
    SkipMobTravelFlag()                                    = delete;
};
