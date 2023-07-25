#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CactusBlockFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CACTUSBLOCKFLAG
public:
    CactusBlockFlag& operator=(CactusBlockFlag const&) = delete;
    CactusBlockFlag(CactusBlockFlag const&)            = delete;
    CactusBlockFlag()                                  = delete;
#endif

public:
};
