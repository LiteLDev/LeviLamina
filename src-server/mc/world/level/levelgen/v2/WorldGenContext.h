#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

class WorldGenContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mMinHeight;
    ::ll::TypedStorage<4, 4, int> mMaxHeight;
    ::ll::TypedStorage<4, 4, int> mSeaLevel;
    // NOLINTEND

};

}
