#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_50::DimensionDefinition {

struct DimensionHeight {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short> mMinY;
    ::ll::TypedStorage<2, 2, short> mHeightRange;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50::DimensionDefinition
