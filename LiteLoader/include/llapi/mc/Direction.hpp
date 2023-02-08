/**
 * @file  Direction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Direction.
 *
 */
class Direction {

#define AFTER_EXTRA
// Add Member There
public:
enum class Type;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTION
public:
    class Direction& operator=(class Direction const &) = delete;
    Direction(class Direction const &) = delete;
    Direction() = delete;
#endif

public:
    /**
     * @hash   1302472791
     * @symbol  ?DIRECTION_CLOCKWISE\@Direction\@\@2QBW4Type\@1\@B
     */
    MCAPI static enum class Direction::Type const DIRECTION_CLOCKWISE[];
    /**
     * @hash   620451093
     * @symbol  ?DIRECTION_COUNTER_CLOCKWISE\@Direction\@\@2QBW4Type\@1\@B
     */
    MCAPI static enum class Direction::Type const DIRECTION_COUNTER_CLOCKWISE[];
    /**
     * @hash   -1191565437
     * @symbol  ?DIRECTION_FACING\@Direction\@\@2QBEB
     */
    MCAPI static unsigned char const DIRECTION_FACING[];
    /**
     * @hash   -47047421
     * @symbol  ?DIRECTION_OPPOSITE\@Direction\@\@2QBW4Type\@1\@B
     */
    MCAPI static enum class Direction::Type const DIRECTION_OPPOSITE[];
    /**
     * @hash   -1525028447
     * @symbol  ?FACING_DIRECTION\@Direction\@\@2QBW4Type\@1\@B
     */
    MCAPI static enum class Direction::Type const FACING_DIRECTION[];
    /**
     * @hash   269695742
     * @symbol  ?STEP_X\@Direction\@\@2QBHB
     */
    MCAPI static int const STEP_X[];
    /**
     * @hash   355774738
     * @symbol  ?STEP_Z\@Direction\@\@2QBHB
     */
    MCAPI static int const STEP_Z[];
    /**
     * @hash   -1161106336
     * @symbol  ?convertFacingDirectionToDirection\@Direction\@\@SA?AW4Type\@1\@E\@Z
     */
    MCAPI static enum class Direction::Type convertFacingDirectionToDirection(unsigned char);
    /**
     * @hash   1421656820
     * @symbol  ?getDirection\@Direction\@\@SA?AW4Type\@1\@MM\@Z
     */
    MCAPI static enum class Direction::Type getDirection(float, float);

};