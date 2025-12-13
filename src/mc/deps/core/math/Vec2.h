#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Vec2 : public ll::math::floatN2<Vec2> {
public:
    using floatN2::floatN2;

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
