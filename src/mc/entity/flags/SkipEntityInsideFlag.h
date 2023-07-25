#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SkipEntityInsideFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKIPENTITYINSIDEFLAG
public:
    SkipEntityInsideFlag& operator=(SkipEntityInsideFlag const&) = delete;
    SkipEntityInsideFlag(SkipEntityInsideFlag const&)            = delete;
    SkipEntityInsideFlag()                                       = delete;
#endif

public:
};
