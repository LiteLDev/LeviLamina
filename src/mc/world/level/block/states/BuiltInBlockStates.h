#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/VerticalHalfEnum.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/states/BuiltInBlockStateVariant.h"

namespace BuiltInBlockStates {
// NOLINTBEGIN
// symbol: ?BlockFace@BuiltInBlockStates@@3V?$BuiltInBlockStateVariant@E@@B
MCAPI extern class BuiltInBlockStateVariant<uchar> const BlockFace;

// symbol: ?CardinalDirection@BuiltInBlockStates@@3V?$BuiltInBlockStateVariant@W4Type@Direction@@@@B
MCAPI extern class BuiltInBlockStateVariant<::Direction::Type> const CardinalDirection;

// symbol: ?FacingDirection@BuiltInBlockStates@@3V?$BuiltInBlockStateVariant@E@@B
MCAPI extern class BuiltInBlockStateVariant<uchar> const FacingDirection;

// symbol: ?VerticalHalf@BuiltInBlockStates@@3V?$BuiltInBlockStateVariant@W4VerticalHalfEnum@@@@B
MCAPI extern class BuiltInBlockStateVariant<::VerticalHalfEnum> const VerticalHalf;
// NOLINTEND

}; // namespace BuiltInBlockStates
