#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class ScaleByAgeComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mStartScale;
    ::ll::TypedStorage<4, 4, float> mEndScale;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _initializeScale(::EntityContext& entity);
    // NOLINTEND
};
