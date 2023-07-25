#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorRemovedFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORREMOVEDFLAG
public:
    ActorRemovedFlag& operator=(ActorRemovedFlag const&) = delete;
    ActorRemovedFlag(ActorRemovedFlag const&)            = delete;
    ActorRemovedFlag()                                   = delete;
#endif

public:
};
