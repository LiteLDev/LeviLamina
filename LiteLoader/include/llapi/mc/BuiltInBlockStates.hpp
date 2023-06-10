/**
 * @file  BuiltInBlockStates.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Direction.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace BuiltInBlockStates {

#define AFTER_EXTRA

#undef AFTER_EXTRA
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

};