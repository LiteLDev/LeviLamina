#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/Projection.h"

namespace br::worldgen {

struct JigsawJunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mSourceX;
    ::ll::TypedStorage<4, 4, int> mSourceGroundY;
    ::ll::TypedStorage<4, 4, int> mSourceZ;
    ::ll::TypedStorage<4, 4, int> mDeltaY;
    ::ll::TypedStorage<1, 1, ::Projection> mDestProjection;
    // NOLINTEND

};

}
