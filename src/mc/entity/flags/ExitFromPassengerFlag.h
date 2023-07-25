#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExitFromPassengerFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXITFROMPASSENGERFLAG
public:
    ExitFromPassengerFlag& operator=(ExitFromPassengerFlag const&) = delete;
    ExitFromPassengerFlag(ExitFromPassengerFlag const&)            = delete;
    ExitFromPassengerFlag()                                        = delete;
#endif

public:
};
