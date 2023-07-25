#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PermanentSkipNormalTick {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERMANENTSKIPNORMALTICK
public:
    PermanentSkipNormalTick& operator=(PermanentSkipNormalTick const&) = delete;
    PermanentSkipNormalTick(PermanentSkipNormalTick const&)            = delete;
    PermanentSkipNormalTick()                                          = delete;
#endif

public:
};
