#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BehaviorComponent {
public:
    // prevent constructor by default
    BehaviorComponent& operator=(BehaviorComponent const&);
    BehaviorComponent(BehaviorComponent const&);

public:
    // NOLINTBEGIN
    MCAPI BehaviorComponent();

    MCAPI BehaviorComponent(class BehaviorComponent&&);

    MCAPI class BehaviorComponent& operator=(class BehaviorComponent&&);

    MCAPI ~BehaviorComponent();

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
