#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PassengersChangedFlag {
public:
    // prevent constructor by default
    PassengersChangedFlag& operator=(PassengersChangedFlag const&);
    PassengersChangedFlag(PassengersChangedFlag const&);
    PassengersChangedFlag();
};
