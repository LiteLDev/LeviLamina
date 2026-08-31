#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_60::DimensionDefinition {

struct Bounds {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mHeightMinimum;
    ::ll::TypedStorage<4, 4, int> mHeightMaximum;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::DimensionDefinition
