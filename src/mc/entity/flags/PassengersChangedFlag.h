#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PassengersChangedFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PASSENGERSCHANGEDFLAG
public:
    PassengersChangedFlag& operator=(PassengersChangedFlag const&) = delete;
    PassengersChangedFlag(PassengersChangedFlag const&)            = delete;
    PassengersChangedFlag()                                        = delete;
#endif

public:
};
