#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorUseItemEvent {
public:
    // prevent constructor by default
    ActorUseItemEvent& operator=(ActorUseItemEvent const&);
    ActorUseItemEvent(ActorUseItemEvent const&);
    ActorUseItemEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ActorUseItemEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
