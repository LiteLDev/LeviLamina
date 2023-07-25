#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FishFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FISHFLAG
public:
    FishFlag& operator=(FishFlag const&) = delete;
    FishFlag(FishFlag const&)            = delete;
    FishFlag()                           = delete;
#endif

public:
};
