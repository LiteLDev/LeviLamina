#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorInsideBlockEvent {
public:
    // prevent constructor by default
    ActorInsideBlockEvent& operator=(ActorInsideBlockEvent const&);
    ActorInsideBlockEvent();

public:
    // NOLINTBEGIN
    MCAPI ActorInsideBlockEvent(struct ActorInsideBlockEvent const&);

    MCAPI ~ActorInsideBlockEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ActorInsideBlockEvent const&);

    MCAPI void dtor$();

    // NOLINTEND
};
