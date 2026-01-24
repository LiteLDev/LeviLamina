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
    MCAPI bool isNan() const;

    MCAPI bool isNear(::Vec3 const& rhs, float e) const;
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
