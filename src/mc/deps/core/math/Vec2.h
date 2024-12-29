#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Vec2 : public ll::math::floatN2<Vec2> {
public:
    using floatN2::floatN2;

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string toJsonString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Vec2 rotate(::Vec2 const& v, float angleinRadians);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Vec2 const& LOWEST();

    MCAPI static ::Vec2 const& MAX();

    MCAPI static ::Vec2 const& MIN();

    MCAPI static ::Vec2 const& NEG_UNIT_X();

    MCAPI static ::Vec2 const& NEG_UNIT_Y();

    MCAPI static ::Vec2 const& ONE();

    MCAPI static ::Vec2 const& UNIT_X();

    MCAPI static ::Vec2 const& UNIT_Y();

    MCAPI static ::Vec2 const& ZERO();
    // NOLINTEND
};
