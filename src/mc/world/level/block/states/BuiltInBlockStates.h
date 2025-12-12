#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/VerticalHalfEnum.h"
#include "mc/world/level/block/states/BuiltInBlockStateVariant.h"

namespace BuiltInBlockStates {
// static variables
// NOLINTBEGIN
MCNAPI ::BuiltInBlockStateVariant<uchar> const& BlockFace();

MCNAPI ::BuiltInBlockStateVariant<::Direction::Type> const& CardinalDirection();

MCNAPI ::BuiltInBlockStateVariant<bool> const& ConnectionEast();

MCNAPI ::BuiltInBlockStateVariant<bool> const& ConnectionNorth();

MCNAPI ::BuiltInBlockStateVariant<bool> const& ConnectionSouth();

MCNAPI ::BuiltInBlockStateVariant<bool> const& ConnectionWest();

MCNAPI ::BuiltInBlockStateVariant<uchar> const& FacingDirection();

MCNAPI ::BuiltInBlockStateVariant<::VerticalHalfEnum> const& VerticalHalf();
// NOLINTEND

} // namespace BuiltInBlockStates
