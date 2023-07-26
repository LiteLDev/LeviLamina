#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemActorFlag {

public:
    // prevent constructor by default
    ItemActorFlag& operator=(ItemActorFlag const&) = delete;
    ItemActorFlag(ItemActorFlag const&)            = delete;
    ItemActorFlag()                                = delete;
};
