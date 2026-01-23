#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RandomSwimUtility {

struct SwimHeightBounds {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4343af;
    ::ll::UntypedStorage<4, 4> mUnk22ea30;
    ::ll::UntypedStorage<4, 4> mUnk49d160;
    ::ll::UntypedStorage<4, 4> mUnk3283bc;
    // NOLINTEND

public:
    // prevent constructor by default
    SwimHeightBounds& operator=(SwimHeightBounds const&);
    SwimHeightBounds(SwimHeightBounds const&);
    SwimHeightBounds();
};

} // namespace RandomSwimUtility
