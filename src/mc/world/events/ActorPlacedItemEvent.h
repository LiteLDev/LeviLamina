#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorPlacedItemEvent {

public:
    // prevent constructor by default
    ActorPlacedItemEvent& operator=(ActorPlacedItemEvent const&) = delete;
    ActorPlacedItemEvent(ActorPlacedItemEvent const&)            = delete;
    ActorPlacedItemEvent()                                       = delete;
};
