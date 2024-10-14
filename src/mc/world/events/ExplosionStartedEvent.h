#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExplosionStartedEvent {
public:
    // prevent constructor by default
    ExplosionStartedEvent& operator=(ExplosionStartedEvent const&);
    ExplosionStartedEvent();

public:
    // NOLINTBEGIN
    MCAPI ExplosionStartedEvent(struct ExplosionStartedEvent const&);

    MCAPI ~ExplosionStartedEvent();

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
