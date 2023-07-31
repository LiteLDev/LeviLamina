#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Direction {
public:
    // Direction inner types define
    enum class Type {};

public:
    // prevent constructor by default
    Direction& operator=(Direction const&) = delete;
    Direction(Direction const&)            = delete;
    Direction()                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?convertFacingDirectionToDirection\@Direction\@\@SA?AW4Type\@1\@E\@Z
     */
    MCAPI static enum class Direction::Type convertFacingDirectionToDirection(unsigned char);
    /**
     * @symbol ?getDirection\@Direction\@\@SA?AW4Type\@1\@MM\@Z
     */
    MCAPI static enum class Direction::Type getDirection(float, float);
    /**
     * @symbol ?DIRECTION_CLOCKWISE\@Direction\@\@2QBW4Type\@1\@B
     */
    MCAPI static enum class Direction::Type const DIRECTION_CLOCKWISE[];
    /**
     * @symbol ?DIRECTION_COUNTER_CLOCKWISE\@Direction\@\@2QBW4Type\@1\@B
     */
    MCAPI static enum class Direction::Type const DIRECTION_COUNTER_CLOCKWISE[];
    /**
     * @symbol ?DIRECTION_FACING\@Direction\@\@2QBEB
     */
    MCAPI static unsigned char const DIRECTION_FACING[];
    /**
     * @symbol ?DIRECTION_OPPOSITE\@Direction\@\@2QBW4Type\@1\@B
     */
    MCAPI static enum class Direction::Type const DIRECTION_OPPOSITE[];
    /**
     * @symbol ?FACING_DIRECTION\@Direction\@\@2QBW4Type\@1\@B
     */
    MCAPI static enum class Direction::Type const FACING_DIRECTION[];
    /**
     * @symbol
     * ?FROM_STRING_MAP\@Direction\@\@2V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Type\@Direction\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Type\@Direction\@\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI static std::unordered_map<std::string, enum class Direction::Type> const FROM_STRING_MAP;
    /**
     * @symbol ?STEP_X\@Direction\@\@2QBHB
     */
    MCAPI static int const STEP_X[];
    /**
     * @symbol ?STEP_Z\@Direction\@\@2QBHB
     */
    MCAPI static int const STEP_Z[];
    /**
     * @symbol
     * ?TO_STRING_MAP\@Direction\@\@2V?$unordered_map\@IV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@I\@2\@U?$equal_to\@I\@2\@V?$allocator\@U?$pair\@$$CBIV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI static std::unordered_map<unsigned int, std::string> const TO_STRING_MAP;
    // NOLINTEND
};
