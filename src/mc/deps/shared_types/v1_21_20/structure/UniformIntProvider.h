#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20 {

struct UniformIntProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mMinInclusive;
    ::ll::TypedStorage<4, 4, int> mMaxInclusive;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
