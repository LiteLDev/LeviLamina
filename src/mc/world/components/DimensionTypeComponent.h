#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DimensionTypeComponent {

public:
    // prevent constructor by default
    DimensionTypeComponent& operator=(DimensionTypeComponent const&) = delete;
    DimensionTypeComponent(DimensionTypeComponent const&)            = delete;
    DimensionTypeComponent()                                         = delete;
};
