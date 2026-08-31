#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BakedAttachableData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::bitset<1>> mBits;
    ::ll::TypedStorage<4, 4, uint>             mParentSetupExpressionOffset;
    // NOLINTEND
};
