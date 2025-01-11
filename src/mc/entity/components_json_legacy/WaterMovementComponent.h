#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class WaterMovementComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk292a6d;
    // NOLINTEND

public:
    // prevent constructor by default
    WaterMovementComponent& operator=(WaterMovementComponent const&);
    WaterMovementComponent(WaterMovementComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WaterMovementComponent();

    MCFOLD float getDragFactor() const;

    MCAPI void initFromDefinition(::Actor& owner);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
