#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WasAutoJumpingFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WASAUTOJUMPINGFLAG
public:
    WasAutoJumpingFlag& operator=(WasAutoJumpingFlag const&) = delete;
    WasAutoJumpingFlag(WasAutoJumpingFlag const&)            = delete;
    WasAutoJumpingFlag()                                     = delete;
#endif

public:
};
