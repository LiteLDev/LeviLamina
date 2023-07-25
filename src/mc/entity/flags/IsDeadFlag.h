#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IsDeadFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISDEADFLAG
public:
    IsDeadFlag& operator=(IsDeadFlag const&) = delete;
    IsDeadFlag(IsDeadFlag const&)            = delete;
    IsDeadFlag()                             = delete;
#endif

public:
};
