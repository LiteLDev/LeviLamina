#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WasOnGroundFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WASONGROUNDFLAG
public:
    WasOnGroundFlag& operator=(WasOnGroundFlag const&) = delete;
    WasOnGroundFlag(WasOnGroundFlag const&)            = delete;
    WasOnGroundFlag()                                  = delete;
#endif

public:
};
