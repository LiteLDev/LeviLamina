#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PressurePlatePushEvent {
public:
    // prevent constructor by default
    PressurePlatePushEvent& operator=(PressurePlatePushEvent const&);
    PressurePlatePushEvent();

public:
    // NOLINTBEGIN
    MCAPI PressurePlatePushEvent(struct PressurePlatePushEvent const&);

    MCAPI ~PressurePlatePushEvent();

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
