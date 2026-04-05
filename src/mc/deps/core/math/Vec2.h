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
#ifdef LL_PLAT_C
    MCAPI ::Vec2 operator*(float s) const;

    MCAPI ::Vec2 operator+(::Vec2 const& rhs) const;
#endif

#ifdef LL_PLAT_S
    MCAPI ::Vec2 operator-(::Vec2 const& rhs) const;
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Vec2 const& ONE();

    MCAPI static ::Vec2 const& ZERO();
    // NOLINTEND
};
