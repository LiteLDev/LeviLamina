#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Vec2 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> x;
    ::ll::TypedStorage<4, 4, float> y;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ::Vec2 operator*(float s) const;

    MCAPI_C ::Vec2 operator+(::Vec2 const& rhs) const;

    MCAPI_S ::Vec2 operator-(::Vec2 const& rhs) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI_C static ::Vec2 const& LOWEST();

    MCAPI static ::Vec2 const& MAX();

    MCAPI static ::Vec2 const& MIN();

    MCAPI static ::Vec2 const& ONE();

    MCAPI static ::Vec2 const& UNIT_Y();

    MCAPI static ::Vec2 const& ZERO();
    // NOLINTEND
};
