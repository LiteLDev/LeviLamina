#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SquidFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SQUIDFLAG
public:
    SquidFlag& operator=(SquidFlag const&) = delete;
    SquidFlag(SquidFlag const&)            = delete;
    SquidFlag()                            = delete;
#endif

public:
};
