#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorAddEffectEvent {
public:
    // prevent constructor by default
    ActorAddEffectEvent& operator=(ActorAddEffectEvent const&);
    ActorAddEffectEvent();

public:
    // NOLINTBEGIN
    MCAPI ActorAddEffectEvent(struct ActorAddEffectEvent const&);

    MCAPI ~ActorAddEffectEvent();

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
