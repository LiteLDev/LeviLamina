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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
