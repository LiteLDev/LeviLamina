#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorIsBeingDestroyedFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORISBEINGDESTROYEDFLAG
public:
    ActorIsBeingDestroyedFlag& operator=(ActorIsBeingDestroyedFlag const&) = delete;
    ActorIsBeingDestroyedFlag(ActorIsBeingDestroyedFlag const&)            = delete;
    ActorIsBeingDestroyedFlag()                                            = delete;
#endif

public:
};
