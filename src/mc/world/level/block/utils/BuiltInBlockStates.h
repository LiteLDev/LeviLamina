#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"

// auto generated forward declare list
// clang-format off
template<typename T0> class BuiltInBlockStateVariant;
// clang-format on

namespace BuiltInBlockStates {
/**
 * @symbol ?BlockFace\@BuiltInBlockStates\@\@3V?$BuiltInBlockStateVariant\@E\@\@B
 */
MCAPI extern class BuiltInBlockStateVariant<unsigned char> const BlockFace;
/**
 * @symbol ?CardinalDirection\@BuiltInBlockStates\@\@3V?$BuiltInBlockStateVariant\@W4Type\@Direction\@\@\@\@B
 */
MCAPI extern class BuiltInBlockStateVariant<enum class Direction::Type> const CardinalDirection;
/**
 * @symbol ?FacingDirection\@BuiltInBlockStates\@\@3V?$BuiltInBlockStateVariant\@E\@\@B
 */
MCAPI extern class BuiltInBlockStateVariant<unsigned char> const FacingDirection;
/**
 * @symbol ?VerticalHalf\@BuiltInBlockStates\@\@3V?$BuiltInBlockStateVariant\@W4VerticalHalfEnum\@\@\@\@B
 */
MCAPI extern class BuiltInBlockStateVariant<enum class VerticalHalfEnum> const VerticalHalf;
/**
 * @symbol ?getNumStates\@BuiltInBlockStates\@\@YA_KXZ
 */
MCAPI unsigned __int64 getNumStates();
/**
 * @symbol ?registerBlockStates\@BuiltInBlockStates\@\@YAXXZ
 */
MCAPI void registerBlockStates();
/**
 * @symbol ?unregisterBlockStates\@BuiltInBlockStates\@\@YAXXZ
 */
MCAPI void unregisterBlockStates();

}; // namespace BuiltInBlockStates
