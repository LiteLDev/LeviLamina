#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemActorFlag {
public:
    // prevent constructor by default
    ItemActorFlag& operator=(ItemActorFlag const&);
    ItemActorFlag(ItemActorFlag const&);
    ItemActorFlag();
};
