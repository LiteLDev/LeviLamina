#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/v2/terrain_adjustment/Type.h"

namespace br::worldgen {

struct Rigid {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::BoundingBox> mBox;
    ::ll::TypedStorage<1, 1, ::br::worldgen::TerrainAdjustment::Type> mAdjustment;
    ::ll::TypedStorage<4, 4, int> mGroundDelta;
    // NOLINTEND

};

}
