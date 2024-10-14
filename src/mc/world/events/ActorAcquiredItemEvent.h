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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
