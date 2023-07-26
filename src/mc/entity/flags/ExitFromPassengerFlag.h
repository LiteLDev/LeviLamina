#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExitFromPassengerFlag {

public:
    // prevent constructor by default
    ExitFromPassengerFlag& operator=(ExitFromPassengerFlag const&) = delete;
    ExitFromPassengerFlag(ExitFromPassengerFlag const&)            = delete;
    ExitFromPassengerFlag()                                        = delete;
};
