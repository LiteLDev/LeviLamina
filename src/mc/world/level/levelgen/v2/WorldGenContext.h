#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

class WorldGenContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short> mMinHeight;
    ::ll::TypedStorage<2, 2, short> mMaxHeight;
    ::ll::TypedStorage<2, 2, short> mSeaLevel;
    // NOLINTEND
};

} // namespace br::worldgen
