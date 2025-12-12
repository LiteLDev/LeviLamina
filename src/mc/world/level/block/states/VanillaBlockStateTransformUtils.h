#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/facing/Name.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/CoralDirection.h"
#include "mc/world/level/block/FrontAndTop.h"
#include "mc/world/level/block/LeverDirection.h"
#include "mc/world/level/block/PillarAxis.h"
#include "mc/world/level/block/PortalAxis.h"
#include "mc/world/level/block/RailDirection.h"
#include "mc/world/level/block/TorchFacing.h"
#include "mc/world/level/block/WeirdoDirection.h"
#include "mc/world/level/block/states/CommonDirection.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class VanillaBlockStateTransformUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::CommonDirection _mirrorFrontBack(::CommonDirection direction);

    MCAPI static ::CommonDirection _mirrorLeftRight(::CommonDirection direction);

    MCAPI static ::CommonDirection _rotate(::CommonDirection direction, ::Rotation rotation);

    MCAPI static bool hasTransformableWallStates(::Block const& block);

    MCAPI static ::Block const* transformBlock(::Block const& block, ::CommonDirection targetDirection);

    MCAPI static ::Block const* transformBlock(::Block const& block, ::Rotation rotation, ::Mirror mirror);

    MCAPI static ::Block const* transformCardinalDirection(::Block const& block, ::Rotation rotation, ::Mirror mirror);

    MCAPI static ::Block const*
    transformWallConnectionTypes(::Block const& block, ::Rotation rotation, ::Mirror mirror);
    // NOLINTEND
};
