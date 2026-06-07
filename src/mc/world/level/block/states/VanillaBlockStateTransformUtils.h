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
    MCAPI static ::CommonDirection _mirror(::CommonDirection direction, ::Mirror mirror);

    MCAPI static ::CommonDirection _mirrorDoor(::CommonDirection direction, ::Mirror mirror);

    MCAPI static ::CommonDirection _rotate(::CommonDirection direction, ::Rotation rotation);

    MCAPI static bool hasTransformableWallStates(::Block const& block);

    MCAPI static ::Block const* transformBlock(::Block const& block, ::CommonDirection targetDirection);

    MCAPI static ::Block const* transformBlock(::Block const& block, ::Facing::Name targetDirection);

    MCAPI static ::Block const* transformBlock(::Block const& block, ::Rotation rotation, ::Mirror mirror);

    MCAPI static ::Block const* transformCardinalDirection(::Block const& block, ::Rotation rotation, ::Mirror mirror);

    MCAPI static ::Block const* transformConnectionStates(::Block const& block, ::Rotation rotation, ::Mirror mirror);

    MCAPI static ::Block const* transformCoralDirection(::Block const& block, ::Rotation rotation, ::Mirror mirror);

    MCAPI static ::Block const* transformCorner(::Block const& block, ::Mirror mirror);

    MCAPI static ::Block const* transformDirection(::Block const& block, ::Rotation rotation, ::Mirror mirror);

    MCAPI static ::Block const* transformDoorDirection(::Block const& block, ::Rotation rotation, ::Mirror mirror);

    MCAPI static ::Direction::Type
    transformDoorDirection(::Direction::Type value, ::Rotation rotation, ::Mirror mirror);

    MCAPI static ::Block const* transformFrontAndTop(::Block const& block, ::Rotation rotation, ::Mirror mirror);

    MCAPI static ::Block const* transformHingeBit(::Block const& block, ::Rotation mirror, ::Mirror);

    MCAPI static ::Block const*
    transformLegacyFacingDirection(::Block const& block, ::Rotation rotation, ::Mirror mirror);

    MCAPI static ::Block const* transformLeverDirection(::Block const& block, ::Rotation rotation, ::Mirror mirror);

    MCAPI static ::Block const*
    transformMultiFaceDirectionBits(::Block const& block, ::Rotation rotation, ::Mirror mirror);

    MCAPI static ::Block const* transformPillarAxis(::Block const& block, ::Rotation rotation, ::Mirror mirror);

    MCAPI static ::Block const* transformPortalAxis(::Block const& block, ::Rotation rotation, ::Mirror mirror);

    MCAPI static ::Block const* transformRailDirection(::Block const& block, ::Rotation rotation, ::Mirror mirror);

    MCAPI static ::Block const* transformStandingRotation(::Block const& block, ::Rotation rotation, ::Mirror mirror);

    MCAPI static ::Block const*
    transformTorchFacingDirection(::Block const& block, ::Rotation rotation, ::Mirror mirror);

    MCAPI static ::Block const* transformTrapDoorDirection(::Block const& block, ::Rotation rotation, ::Mirror mirror);

    MCAPI static ::Block const* transformVineDirectionBits(::Block const& block, ::Rotation rotation, ::Mirror mirror);

    MCAPI static ::Block const*
    transformWallConnectionTypes(::Block const& block, ::Rotation rotation, ::Mirror mirror);

    MCAPI static ::Block const* transformWeirdoDirection(::Block const& block, ::Rotation rotation, ::Mirror mirror);
    // NOLINTEND
};
