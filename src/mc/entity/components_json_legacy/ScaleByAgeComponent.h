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
    ::ll::UntypedStorage<4, 4> mUnka501a3;
    ::ll::UntypedStorage<4, 4> mUnk1ddd60;
    // NOLINTEND

public:
    // prevent constructor by default
    ScaleByAgeComponent& operator=(ScaleByAgeComponent const&);
    ScaleByAgeComponent(ScaleByAgeComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScaleByAgeComponent();

    MCAPI void _initializeScale(::EntityContext& entity);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
