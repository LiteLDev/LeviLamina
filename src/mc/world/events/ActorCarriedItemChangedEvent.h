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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ActorCarriedItemChangedEvent const&);

    MCAPI void dtor$();

    // NOLINTEND
};
