#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorKilledEvent {
public:
    // prevent constructor by default
    ActorKilledEvent& operator=(ActorKilledEvent const&);
    ActorKilledEvent(ActorKilledEvent const&);
    ActorKilledEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ActorKilledEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
