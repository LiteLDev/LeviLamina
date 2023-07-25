#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorAddedFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORADDEDFLAG
public:
    ActorAddedFlag& operator=(ActorAddedFlag const&) = delete;
    ActorAddedFlag(ActorAddedFlag const&)            = delete;
    ActorAddedFlag()                                 = delete;
#endif

public:
};
