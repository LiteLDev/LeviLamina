#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Vec2 : public ll::math::floatN2<Vec2> {
public:
    using floatN2::floatN2;

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Vec2 const& ONE();

    MCNAPI static ::Vec2 const& ZERO();
    // NOLINTEND
};
