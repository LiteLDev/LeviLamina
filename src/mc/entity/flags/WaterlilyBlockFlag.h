#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WaterlilyBlockFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERLILYBLOCKFLAG
public:
    WaterlilyBlockFlag& operator=(WaterlilyBlockFlag const&) = delete;
    WaterlilyBlockFlag(WaterlilyBlockFlag const&)            = delete;
    WaterlilyBlockFlag()                                     = delete;
#endif

public:
};
