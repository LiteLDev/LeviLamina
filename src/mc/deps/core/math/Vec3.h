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
    MCAPI_C explicit Vec3(::glm::vec3 const& glm);

    MCAPI explicit Vec3(float s);

    MCAPI Vec3(float x_, float y_, float z_);

    MCAPI bool isNan() const;

    MCAPI bool isNear(::Vec3 const& rhs, float e) const;

    MCFOLD_C float length() const;

    MCFOLD ::Vec3 normalized() const;

    MCAPI ::Vec3 operator*(float k) const;

    MCFOLD_C ::Vec3 operator+(::glm::vec3 const& rhs) const;

    MCAPI_C ::Vec3 operator+(::Vec3 const&) const;

    MCAPI_C ::Vec3 operator+(float f) const;

    MCAPI_C ::Vec3& operator+=(::Vec3 const& rhs);

    MCAPI ::Vec3 operator-() const;

    MCAPI_C ::Vec3 operator-(float f) const;

    MCAPI_C ::Vec3 operator-(::Vec3 const& rhs) const;

    MCAPI_C ::Vec3& operator-=(::Vec3 const& rhs);

    MCFOLD bool operator==(::Vec3 const& rhs) const;

    MCAPI_C ::Vec3 round() const;

    MCAPI ::std::string toString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::Vec3 clamp(::Vec3 const& v, ::Vec3 const& clipMin, ::Vec3 const& clipMax);

    MCAPI static ::Vec3 directionFromRotation(::Vec2 const& rot);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Vec3 const& HALF();

    MCAPI static ::Vec3 const& MAX();

    MCAPI static ::Vec3 const& MIN();

    MCAPI_C static ::Vec3 const& NEG_UNIT_X();

    MCAPI static ::Vec3 const& NEG_UNIT_Y();

    MCAPI_C static ::Vec3 const& NEG_UNIT_Z();

    MCAPI static ::Vec3 const& ONE();

    MCAPI static ::Vec3 const& UNIT_X();

    MCAPI static ::Vec3 const& UNIT_Y();

    MCAPI static ::Vec3 const& UNIT_Z();

    MCAPI static ::Vec3 const& ZERO();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD_C void* $ctor(::glm::vec3 const& glm);

    MCAPI void* $ctor(float s);

    MCFOLD void* $ctor(float x_, float y_, float z_);
    // NOLINTEND
};
