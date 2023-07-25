#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FallingBlockFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FALLINGBLOCKFLAG
public:
    FallingBlockFlag& operator=(FallingBlockFlag const&) = delete;
    FallingBlockFlag(FallingBlockFlag const&)            = delete;
    FallingBlockFlag()                                   = delete;
#endif

public:
};
