#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AutoJumpingFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AUTOJUMPINGFLAG
public:
    AutoJumpingFlag& operator=(AutoJumpingFlag const&) = delete;
    AutoJumpingFlag(AutoJumpingFlag const&)            = delete;
    AutoJumpingFlag()                                  = delete;
#endif

public:
};
