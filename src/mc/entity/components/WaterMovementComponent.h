#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct WaterMovementComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mDragFactor;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initFromDefinition(::Actor& owner);
    // NOLINTEND
};
