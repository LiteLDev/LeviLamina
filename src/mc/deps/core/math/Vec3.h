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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    Vec3();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI Vec3();

    MCAPI explicit Vec3(::glm::vec3 const& glm);
#endif

    MCAPI explicit Vec3(float s);

    MCAPI Vec3(float x_, float y_, float z_);

    MCAPI bool isNan() const;

    MCAPI float lengthSquared() const;

    MCAPI ::Vec3 normalized() const;

    MCAPI ::Vec3 operator*(float k) const;

#ifdef LL_PLAT_C
    MCAPI ::Vec3 operator+(float f) const;
#endif

    MCAPI ::Vec3 operator+(::Vec3 const& rhs) const;

#ifdef LL_PLAT_C
    MCAPI ::Vec3& operator+=(::Vec3 const& rhs);
#endif

    MCAPI ::Vec3 operator-() const;

#ifdef LL_PLAT_C
    MCAPI ::Vec3 operator-(float f) const;
#endif

    MCAPI ::Vec3 operator-(::Vec3 const& rhs) const;

#ifdef LL_PLAT_C
    MCAPI ::Vec3& operator-=(::Vec3 const& rhs);

    MCAPI bool operator==(::Vec3 const& rhs) const;

    MCAPI ::Vec3 round() const;
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::Vec3 clamp(::Vec3 const& v, ::Vec3 const& clipMin, ::Vec3 const& clipMax);
#endif

    MCAPI static ::Vec3 directionFromRotation(::Vec2 const& rot);
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

    MCAPI static ::Vec3 const& UNIT_X();

    MCAPI static ::Vec3 const& UNIT_Y();

    MCAPI static ::Vec3 const& UNIT_Z();

    MCAPI static ::Vec3 const& ZERO();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void* $ctor();

    MCFOLD void* $ctor(::glm::vec3 const& glm);
#endif

    MCAPI void* $ctor(float s);

    MCFOLD void* $ctor(float x_, float y_, float z_);
    // NOLINTEND
};
