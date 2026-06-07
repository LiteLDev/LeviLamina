#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockShapeComponentData.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BlockPos;
// clang-format on

struct BlockCollisionBoxComponent : public ::BlockShapeComponentData {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool addComponentCollisionShapes(
        ::BlockCollisionBoxComponent const& component,
        ::BlockPos const&                   pos,
        ::BlockPos const&                   randomOffsetPos,
        ::AABB const*                       intersectTestBox,
        ::std::vector<::AABB>&              inoutBoxes
    );
    // NOLINTEND
};
