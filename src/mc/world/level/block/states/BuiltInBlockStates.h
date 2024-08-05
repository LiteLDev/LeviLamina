#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/VerticalHalfEnum.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/states/BuiltInBlockStateVariant.h"

namespace BuiltInBlockStates {
// NOLINTBEGIN
MCAPI extern class BuiltInBlockStateVariant<uchar> const BlockFace;

MCAPI extern class BuiltInBlockStateVariant<::Direction::Type> const CardinalDirection;

MCAPI extern class BuiltInBlockStateVariant<uchar> const FacingDirection;

MCAPI extern class BuiltInBlockStateVariant<::VerticalHalfEnum> const VerticalHalf;
// NOLINTEND

}; // namespace BuiltInBlockStates
