#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec2;
// clang-format on

class Vec3 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> x;
    ::ll::TypedStorage<4, 4, float> y;
    ::ll::TypedStorage<4, 4, float> z;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Vec3();

    MCAPI Vec3(float x_, float y_, float z_);

    MCAPI float distanceTo(::Vec3 const& p) const;

    MCAPI bool isNan() const;

    MCAPI bool isNear(::Vec3 const& rhs, float e) const;

    MCAPI float lengthSquared() const;

    MCAPI ::Vec3 normalized() const;

    MCAPI ::Vec3 operator*(float k) const;

    MCAPI ::Vec3 operator+(::Vec3 const& rhs) const;

    MCAPI ::Vec3 operator-() const;

    MCAPI ::Vec3 operator-(::Vec3 const& rhs) const;

    MCAPI ::std::string toJsonString() const;

    MCAPI ::std::string toString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Vec3 directionFromRotation(::Vec2 const& rot);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Vec3 const& HALF();

    MCAPI static ::Vec3 const& MAX();

    MCAPI static ::Vec3 const& MIN();

    MCAPI static ::Vec3 const& NEG_UNIT_Y();

    MCAPI static ::Vec3 const& ONE();

    MCAPI static ::Vec3 const& UNIT_X();

    MCAPI static ::Vec3 const& UNIT_Y();

    MCAPI static ::Vec3 const& UNIT_Z();

    MCAPI static ::Vec3 const& ZERO();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCAPI void* $ctor(float x_, float y_, float z_);
    // NOLINTEND
};
