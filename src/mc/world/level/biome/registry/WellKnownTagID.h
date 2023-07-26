#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WellKnownTagID {

public:
    // prevent constructor by default
    WellKnownTagID& operator=(WellKnownTagID const&) = delete;
    WellKnownTagID(WellKnownTagID const&)            = delete;
    WellKnownTagID()                                 = delete;
};
