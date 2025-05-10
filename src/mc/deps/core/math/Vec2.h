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
    MCAPI ::Vec2 normalized() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Vec2 const& MAX();

    MCAPI static ::Vec2 const& MIN();

    MCAPI static ::Vec2 const& ONE();

    MCAPI static ::Vec2 const& UNIT_Y();

    MCAPI static ::Vec2 const& ZERO();
    // NOLINTEND
};
