#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorCarriedItemChangedEvent {
public:
    // prevent constructor by default
    ActorCarriedItemChangedEvent& operator=(ActorCarriedItemChangedEvent const&);
    ActorCarriedItemChangedEvent();

public:
    // NOLINTBEGIN
    MCAPI ActorCarriedItemChangedEvent(struct ActorCarriedItemChangedEvent const&);

    MCAPI ~ActorCarriedItemChangedEvent();

    // NOLINTEND
};
