#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Vec2 : public ll::math::floatN2<Vec2> {
public:
    using floatN2::floatN2;

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Vec2 const& ONE();

    MCAPI static ::Vec2 const& ZERO();
    // NOLINTEND
};
