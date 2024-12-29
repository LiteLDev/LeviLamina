#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec2;
// clang-format on

class Vec3 : public ll::math::floatN3<Vec3> {
public:
    using floatN3::floatN3;

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Vec3 abs() const;

    MCAPI ::Vec3 ceil() const;

    MCAPI float distanceToLineSquared(::Vec3 const& p0, ::Vec3 const& p1) const;

    MCAPI ::Vec3 floor(float offset) const;

    MCAPI bool isNan() const;

    MCAPI bool isNear(::Vec3 const& rhs, float e) const;

    MCAPI float maxComponent() const;

    MCAPI ::std::string toJsonString() const;

    MCAPI ::Vec3 xz() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Vec3 clamp(::Vec3 const& v, ::Vec3 const& clipMin, ::Vec3 const& clipMax);

    MCAPI static ::Vec3 directionFromRotation(::Vec2 const& rot);

    MCAPI static ::Vec3 directionFromRotation(float rotX, float rotY);

    MCAPI static ::Vec3 fromXZ(::Vec2 const& xz, float y);

    MCAPI static ::Vec2 rotationFromDirection(::Vec3 const& dir);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Vec3 const& HALF();

    MCAPI static ::Vec3 const& MAX();

    MCAPI static ::Vec3 const& MIN();

    MCAPI static ::Vec3 const& NEG_UNIT_X();

    MCAPI static ::Vec3 const& NEG_UNIT_Y();

    MCAPI static ::Vec3 const& NEG_UNIT_Z();

    MCAPI static ::Vec3 const& ONE();

    MCAPI static ::Vec3 const& TWO();

    MCAPI static ::Vec3 const& UNIT_X();

    MCAPI static ::Vec3 const& UNIT_Y();

    MCAPI static ::Vec3 const& UNIT_Z();

    MCAPI static ::Vec3 const& ZERO();
    // NOLINTEND
};
