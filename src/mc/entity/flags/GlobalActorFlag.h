#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GlobalActorFlag {
public:
    // prevent constructor by default
    GlobalActorFlag& operator=(GlobalActorFlag const&);
    GlobalActorFlag(GlobalActorFlag const&);
    GlobalActorFlag();
};
