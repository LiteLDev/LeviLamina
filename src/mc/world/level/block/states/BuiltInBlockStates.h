#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/MultiBlockPart.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/CornerShape.h"
#include "mc/world/level/block/VerticalHalfEnum.h"
#include "mc/world/level/block/states/BuiltInBlockStateVariant.h"

namespace BuiltInBlockStates {
// functions
// NOLINTBEGIN
MCNAPI void registerBlockStates();

MCNAPI void unregisterBlockStates();
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::BuiltInBlockStateVariant<uchar> const& BlockFace();

MCNAPI ::BuiltInBlockStateVariant<::Direction::Type> const& CardinalDirection();

MCNAPI ::BuiltInBlockStateVariant<bool> const& ConnectionDown();

MCNAPI ::BuiltInBlockStateVariant<bool> const& ConnectionEast();

MCNAPI ::BuiltInBlockStateVariant<bool> const& ConnectionNorth();

MCNAPI ::BuiltInBlockStateVariant<bool> const& ConnectionSouth();

MCNAPI ::BuiltInBlockStateVariant<bool> const& ConnectionUp();

MCNAPI ::BuiltInBlockStateVariant<bool> const& ConnectionWest();

MCNAPI ::BuiltInBlockStateVariant<::CornerShape> const& Corner();

MCNAPI ::BuiltInBlockStateVariant<uchar> const& FacingDirection();

MCNAPI ::BuiltInBlockStateVariant<::SharedTypes::v1_26_20::MultiBlockPart> const& MultiBlock();

MCNAPI ::BuiltInBlockStateVariant<::VerticalHalfEnum> const& VerticalHalf();
// NOLINTEND

} // namespace BuiltInBlockStates
