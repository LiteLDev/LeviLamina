#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInteractEvent {
public:
    // prevent constructor by default
    PlayerInteractEvent& operator=(PlayerInteractEvent const&);
    PlayerInteractEvent();

public:
    // NOLINTBEGIN
    MCAPI PlayerInteractEvent(struct PlayerInteractEvent const&);

    MCAPI ~PlayerInteractEvent();

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
