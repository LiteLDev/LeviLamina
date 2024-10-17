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
    MCAPI void* ctor$(class BehaviorComponent&&);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
