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
    // prevent constructor by default
    Vec3();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Vec3(float s);

    MCAPI Vec3(float x_, float y_, float z_);

    MCAPI bool isNan() const;

    MCAPI bool isNear(::Vec3 const& rhs, float e) const;

    MCFOLD ::Vec3 normalized() const;

    MCAPI ::Vec3 operator*(float k) const;

    MCAPI ::Vec3 operator-() const;

    MCFOLD bool operator==(::Vec3 const& rhs) const;

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
    MCAPI void* $ctor(float s);

    MCAPI void* $ctor(float x_, float y_, float z_);
    // NOLINTEND
};
