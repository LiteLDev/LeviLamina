#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorTickedFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORTICKEDFLAG
public:
    ActorTickedFlag& operator=(ActorTickedFlag const&) = delete;
    ActorTickedFlag(ActorTickedFlag const&)            = delete;
    ActorTickedFlag()                                  = delete;
#endif

public:
};
