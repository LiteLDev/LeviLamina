#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInteractWithBlockBeforeEvent {
public:
    // prevent constructor by default
    PlayerInteractWithBlockBeforeEvent& operator=(PlayerInteractWithBlockBeforeEvent const&);
    PlayerInteractWithBlockBeforeEvent();

public:
    // NOLINTBEGIN
    MCAPI PlayerInteractWithBlockBeforeEvent(struct PlayerInteractWithBlockBeforeEvent const&);

    MCAPI ~PlayerInteractWithBlockBeforeEvent();

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
