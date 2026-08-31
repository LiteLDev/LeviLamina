#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ResourceOffset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mOffset;
    ::ll::TypedStorage<1, 1, bool> mIsDynamic;
    // NOLINTEND
};
