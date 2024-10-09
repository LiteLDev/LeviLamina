#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

class Direction {
public:
    // Direction inner types define
    enum class Type {};

public:
    // prevent constructor by default
    Direction& operator=(Direction const&);
    Direction(Direction const&);
    Direction();

public:
    // NOLINTBEGIN
    MCAPI static ::Direction::Type convertFacingDirectionToDirection(uchar facingDirection);

    MCAPI static ::Direction::Type getDirection(float xd, float zd);

    MCAPI static ::Direction::Type mirrorDirection(::Mirror mirror, ::Direction::Type direction);

    MCAPI static ::Direction::Type rotateDirection(::Direction::Type direction, ::Rotation rotation);

    MCAPI static ::Direction::Type const DIRECTION_CLOCKWISE[];

    MCAPI static ::Direction::Type const DIRECTION_COUNTER_CLOCKWISE[];

    MCAPI static std::array<uchar, 4> const DIRECTION_FACING;

    MCAPI static ::Direction::Type const DIRECTION_OPPOSITE[];

    MCAPI static ::Direction::Type const FACING_DIRECTION[];

    MCAPI static std::unordered_map<std::string, ::Direction::Type> const FROM_STRING_MAP;

    MCAPI static int const STEP_X[];

    MCAPI static int const STEP_Z[];

    MCAPI static std::array<std::string, 4> const TO_STRING_ARRAY;

    MCAPI static std::unordered_map<uint, std::string> const TO_STRING_MAP;

    // NOLINTEND
};
