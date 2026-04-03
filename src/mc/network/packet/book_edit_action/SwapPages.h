#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BookEditAction {

struct SwapPages {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mPageIndex;
    ::ll::TypedStorage<4, 4, int> mSwapWithIndex;
    // NOLINTEND
};

} // namespace BookEditAction
