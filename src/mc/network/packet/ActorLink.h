#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorLink {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORLINK
public:
    ActorLink& operator=(ActorLink const&) = delete;
    ActorLink(ActorLink const&)            = delete;
    ActorLink()                            = delete;
#endif

public:
};
