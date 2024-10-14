#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInteractWithBlockAfterEvent {
public:
    // prevent constructor by default
    PlayerInteractWithBlockAfterEvent& operator=(PlayerInteractWithBlockAfterEvent const&);
    PlayerInteractWithBlockAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI PlayerInteractWithBlockAfterEvent(struct PlayerInteractWithBlockAfterEvent const&);

    MCAPI ~PlayerInteractWithBlockAfterEvent();

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
