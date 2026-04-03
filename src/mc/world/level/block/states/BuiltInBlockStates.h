#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_10/block/MultiBlockPart.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/CornerShape.h"
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

MCAPI ::BuiltInBlockStateVariant<::CornerShape> const& Corner();

MCAPI ::BuiltInBlockStateVariant<uchar> const& FacingDirection();

MCAPI ::BuiltInBlockStateVariant<::SharedTypes::v1_26_10::MultiBlockPart> const& MultiBlock();

MCAPI ::BuiltInBlockStateVariant<::VerticalHalfEnum> const& VerticalHalf();
// NOLINTEND

} // namespace BuiltInBlockStates
