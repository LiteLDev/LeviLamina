#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorAcquiredItemEvent {
public:
    // prevent constructor by default
    ActorAcquiredItemEvent& operator=(ActorAcquiredItemEvent const&);
    ActorAcquiredItemEvent();

public:
    // NOLINTBEGIN
    MCAPI ActorAcquiredItemEvent(struct ActorAcquiredItemEvent const&);

    MCAPI ~ActorAcquiredItemEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ActorAcquiredItemEvent const&);

    MCAPI void dtor$();

    // NOLINTEND
};
