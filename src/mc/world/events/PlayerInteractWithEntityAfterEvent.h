#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInteractWithEntityAfterEvent {
public:
    // prevent constructor by default
    PlayerInteractWithEntityAfterEvent& operator=(PlayerInteractWithEntityAfterEvent const&);
    PlayerInteractWithEntityAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI PlayerInteractWithEntityAfterEvent(struct PlayerInteractWithEntityAfterEvent const&);

    MCAPI ~PlayerInteractWithEntityAfterEvent();

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
