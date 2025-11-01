#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

struct MaxDistanceFromCenter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mHorizontal;
    ::ll::TypedStorage<4, 4, int> mVertical;
    // NOLINTEND
};

} // namespace br::worldgen
