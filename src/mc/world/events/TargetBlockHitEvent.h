#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TargetBlockHitEvent {
public:
    // prevent constructor by default
    TargetBlockHitEvent& operator=(TargetBlockHitEvent const&);
    TargetBlockHitEvent();

public:
    // NOLINTBEGIN
    MCAPI TargetBlockHitEvent(struct TargetBlockHitEvent const&);

    MCAPI ~TargetBlockHitEvent();

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
