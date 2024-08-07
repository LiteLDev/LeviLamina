#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDroppedItemEvent {
public:
    // prevent constructor by default
    ActorDroppedItemEvent& operator=(ActorDroppedItemEvent const&);
    ActorDroppedItemEvent(ActorDroppedItemEvent const&);
    ActorDroppedItemEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ActorDroppedItemEvent();

    // NOLINTEND
};
