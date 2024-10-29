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

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static auto DIRECTION_CLOCKWISE() -> ::Direction::Type const (&)[];

    MCAPI static auto DIRECTION_COUNTER_CLOCKWISE() -> ::Direction::Type const (&)[];

    MCAPI static std::array<uchar, 4> const& DIRECTION_FACING();

    MCAPI static auto DIRECTION_OPPOSITE() -> ::Direction::Type const (&)[];

    MCAPI static auto FACING_DIRECTION() -> ::Direction::Type const (&)[];

    MCAPI static std::unordered_map<std::string, ::Direction::Type> const& FROM_STRING_MAP();

    MCAPI static auto STEP_X() -> int const (&)[];

    MCAPI static auto STEP_Z() -> int const (&)[];

    MCAPI static std::array<std::string, 4> const& TO_STRING_ARRAY();

    MCAPI static std::unordered_map<uint, std::string> const& TO_STRING_MAP();

    // NOLINTEND
};
