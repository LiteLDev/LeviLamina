#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorGriefingBlockEvent {
public:
    // prevent constructor by default
    ActorGriefingBlockEvent& operator=(ActorGriefingBlockEvent const&);
    ActorGriefingBlockEvent();

public:
    // NOLINTBEGIN
    MCAPI ActorGriefingBlockEvent(struct ActorGriefingBlockEvent const&);

    MCAPI ~ActorGriefingBlockEvent();

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
