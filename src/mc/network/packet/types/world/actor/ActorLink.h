#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorLink {
public:
    // prevent constructor by default
    ActorLink& operator=(ActorLink const&);
    ActorLink(ActorLink const&);
    ActorLink();
};
