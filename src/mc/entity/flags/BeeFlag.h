#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BeeFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEEFLAG
public:
    BeeFlag& operator=(BeeFlag const&) = delete;
    BeeFlag(BeeFlag const&)            = delete;
    BeeFlag()                          = delete;
#endif

public:
};
