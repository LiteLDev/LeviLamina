#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/block/states/CommonDirection.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class VanillaBlockStateTransformUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::CommonDirection _mirrorFrontBack(::CommonDirection direction);

    MCNAPI static ::CommonDirection _mirrorLeftRight(::CommonDirection direction);

    MCNAPI static ::CommonDirection _rotate(::CommonDirection direction, ::Rotation rotation);

    MCNAPI static ::Block const* transformBlock(::Block const& block, ::CommonDirection targetDirection);

    MCNAPI static ::Block const* transformBlock(::Block const& block, ::Rotation rotation, ::Mirror mirror);

    MCNAPI static ::Block const* transformCardinalDirection(::Block const& block, ::Rotation rotation, ::Mirror mirror);

    MCNAPI static ::Block const*
    transformMultiFaceDirectionBits(::Block const& block, ::Rotation rotation, ::Mirror mirror);
    // NOLINTEND
};
