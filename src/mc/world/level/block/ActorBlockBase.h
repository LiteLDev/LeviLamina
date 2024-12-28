#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class ActorBlockBase {
public:
    // prevent constructor by default
    ActorBlockBase& operator=(ActorBlockBase const&);
    ActorBlockBase(ActorBlockBase const&);
    ActorBlockBase();
};
