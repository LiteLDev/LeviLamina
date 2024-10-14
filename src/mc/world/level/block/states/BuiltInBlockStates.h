#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/VerticalHalfEnum.h"
#include "mc/world/level/block/states/BuiltInBlockStateVariant.h"

namespace BuiltInBlockStates {
// thunks
// NOLINTBEGIN
MCAPI class BuiltInBlockStateVariant<uchar> const& BlockFace();

MCAPI class BuiltInBlockStateVariant<::Direction::Type> const& CardinalDirection();

MCAPI class BuiltInBlockStateVariant<uchar> const& FacingDirection();

MCAPI class BuiltInBlockStateVariant<::VerticalHalfEnum> const& VerticalHalf();
// NOLINTEND

}; // namespace BuiltInBlockStates
