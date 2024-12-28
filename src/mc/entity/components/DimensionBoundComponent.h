#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DimensionBoundComponent {
public:
    // prevent constructor by default
    DimensionBoundComponent& operator=(DimensionBoundComponent const&);
    DimensionBoundComponent(DimensionBoundComponent const&);
    DimensionBoundComponent();
};
