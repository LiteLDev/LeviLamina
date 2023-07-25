#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BatFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BATFLAG
public:
    BatFlag& operator=(BatFlag const&) = delete;
    BatFlag(BatFlag const&)            = delete;
    BatFlag()                          = delete;
#endif

public:
};
