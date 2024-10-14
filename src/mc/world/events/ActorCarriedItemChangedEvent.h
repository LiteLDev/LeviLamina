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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
