#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FishingHookFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FISHINGHOOKFLAG
public:
    FishingHookFlag& operator=(FishingHookFlag const&) = delete;
    FishingHookFlag(FishingHookFlag const&)            = delete;
    FishingHookFlag()                                  = delete;
#endif

public:
};
