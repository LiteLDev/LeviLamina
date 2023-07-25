#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HoneyBlockFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HONEYBLOCKFLAG
public:
    HoneyBlockFlag& operator=(HoneyBlockFlag const&) = delete;
    HoneyBlockFlag(HoneyBlockFlag const&)            = delete;
    HoneyBlockFlag()                                 = delete;
#endif

public:
};
