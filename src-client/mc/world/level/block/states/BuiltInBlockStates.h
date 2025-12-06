#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/VerticalHalfEnum.h"
#include "mc/world/level/block/states/BuiltInBlockStateVariant.h"

namespace BuiltInBlockStates {
// static variables
// NOLINTBEGIN
MCAPI ::BuiltInBlockStateVariant<uchar> const& BlockFace();

MCAPI ::BuiltInBlockStateVariant<::Direction::Type> const& CardinalDirection();

MCAPI ::BuiltInBlockStateVariant<bool> const& ConnectionEast();

MCAPI ::BuiltInBlockStateVariant<bool> const& ConnectionNorth();

MCAPI ::BuiltInBlockStateVariant<bool> const& ConnectionSouth();

MCAPI ::BuiltInBlockStateVariant<bool> const& ConnectionWest();

MCAPI ::BuiltInBlockStateVariant<uchar> const& FacingDirection();

MCAPI ::BuiltInBlockStateVariant<::VerticalHalfEnum> const& VerticalHalf();
// NOLINTEND

} // namespace BuiltInBlockStates
