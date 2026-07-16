#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_80 {

struct BezierChainNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mLeftValue;
    ::ll::TypedStorage<4, 4, float> mRightValue;
    ::ll::TypedStorage<4, 4, float> mLeftSlope;
    ::ll::TypedStorage<4, 4, float> mRightSlope;
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
