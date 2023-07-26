#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PermanentSkipMobTravelFlag {

public:
    // prevent constructor by default
    PermanentSkipMobTravelFlag& operator=(PermanentSkipMobTravelFlag const&) = delete;
    PermanentSkipMobTravelFlag(PermanentSkipMobTravelFlag const&)            = delete;
    PermanentSkipMobTravelFlag()                                             = delete;
};
