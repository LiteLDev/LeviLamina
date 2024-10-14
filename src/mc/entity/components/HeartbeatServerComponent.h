#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HeartbeatServerComponent {
public:
    // prevent constructor by default
    HeartbeatServerComponent& operator=(HeartbeatServerComponent const&);
    HeartbeatServerComponent(HeartbeatServerComponent const&);
    HeartbeatServerComponent();

public:
    // NOLINTBEGIN
    MCAPI HeartbeatServerComponent(class HeartbeatServerComponent&&);

    MCAPI ~HeartbeatServerComponent();

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
