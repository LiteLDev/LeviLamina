#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemActorFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMACTORFLAG
public:
    ItemActorFlag& operator=(ItemActorFlag const&) = delete;
    ItemActorFlag(ItemActorFlag const&)            = delete;
    ItemActorFlag()                                = delete;
#endif

public:
};
