#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SkipNormalTick {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKIPNORMALTICK
public:
    SkipNormalTick& operator=(SkipNormalTick const&) = delete;
    SkipNormalTick(SkipNormalTick const&)            = delete;
    SkipNormalTick()                                 = delete;
#endif

public:
};
