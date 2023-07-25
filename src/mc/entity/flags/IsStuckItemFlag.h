#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IsStuckItemFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISSTUCKITEMFLAG
public:
    IsStuckItemFlag& operator=(IsStuckItemFlag const&) = delete;
    IsStuckItemFlag(IsStuckItemFlag const&)            = delete;
    IsStuckItemFlag()                                  = delete;
#endif

public:
};
