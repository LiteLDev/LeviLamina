#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ParrotFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARROTFLAG
public:
    ParrotFlag& operator=(ParrotFlag const&) = delete;
    ParrotFlag(ParrotFlag const&)            = delete;
    ParrotFlag()                             = delete;
#endif

public:
};
