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
    MCNAPI ::Vec2 normalized() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Vec2 const& MAX();

    MCNAPI static ::Vec2 const& MIN();

    MCNAPI static ::Vec2 const& ONE();

    MCNAPI static ::Vec2 const& UNIT_Y();

    MCNAPI static ::Vec2 const& ZERO();
    // NOLINTEND
};
