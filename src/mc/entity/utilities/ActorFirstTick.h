#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorFirstTick {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORFIRSTTICK
public:
    ActorFirstTick& operator=(ActorFirstTick const&) = delete;
    ActorFirstTick(ActorFirstTick const&)            = delete;
    ActorFirstTick()                                 = delete;
#endif

public:
};
