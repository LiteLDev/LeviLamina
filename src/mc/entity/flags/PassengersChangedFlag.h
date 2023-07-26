#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PassengersChangedFlag {

public:
    // prevent constructor by default
    PassengersChangedFlag& operator=(PassengersChangedFlag const&) = delete;
    PassengersChangedFlag(PassengersChangedFlag const&)            = delete;
    PassengersChangedFlag()                                        = delete;
};
