#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InWaterFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INWATERFLAG
public:
    InWaterFlag& operator=(InWaterFlag const&) = delete;
    InWaterFlag(InWaterFlag const&)            = delete;
    InWaterFlag()                              = delete;
#endif

public:
};
