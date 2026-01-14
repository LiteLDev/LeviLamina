#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20 {

struct DimensionPaddingRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mTop;
    ::ll::TypedStorage<4, 4, uint> mBottom;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
