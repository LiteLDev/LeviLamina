#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInteractWithEntityBeforeEvent {
public:
    // prevent constructor by default
    PlayerInteractWithEntityBeforeEvent& operator=(PlayerInteractWithEntityBeforeEvent const&);
    PlayerInteractWithEntityBeforeEvent();

public:
    // NOLINTBEGIN
    MCAPI PlayerInteractWithEntityBeforeEvent(struct PlayerInteractWithEntityBeforeEvent const&);

    MCAPI ~PlayerInteractWithEntityBeforeEvent();

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
