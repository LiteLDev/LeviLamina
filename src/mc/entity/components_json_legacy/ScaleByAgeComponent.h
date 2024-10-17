#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScaleByAgeComponent {
public:
    // prevent constructor by default
    ScaleByAgeComponent& operator=(ScaleByAgeComponent const&);
    ScaleByAgeComponent(ScaleByAgeComponent const&);

public:
    // NOLINTBEGIN
    MCAPI ScaleByAgeComponent();

    MCAPI void _initializeScale(class EntityContext& entity);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
