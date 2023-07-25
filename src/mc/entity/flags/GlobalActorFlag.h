#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GlobalActorFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLOBALACTORFLAG
public:
    GlobalActorFlag& operator=(GlobalActorFlag const&) = delete;
    GlobalActorFlag(GlobalActorFlag const&)            = delete;
    GlobalActorFlag()                                  = delete;
#endif

public:
};
