#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_50 {

struct BoundingBox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mMinX;
    ::ll::TypedStorage<4, 4, int> mMinY;
    ::ll::TypedStorage<4, 4, int> mMinZ;
    ::ll::TypedStorage<4, 4, int> mMaxX;
    ::ll::TypedStorage<4, 4, int> mMaxY;
    ::ll::TypedStorage<4, 4, int> mMaxZ;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
