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
    MCAPI ::std::string toString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Vec3 directionFromRotation(::Vec2 const& rot);

    MCAPI static ::Vec3 directionFromRotation(float rotX, float rotY);

#ifdef LL_PLAT_C
    MCAPI static ::std::optional<::Vec3> getIntersection(
        ::Vec3 const& lineOrigin,
        ::Vec3 const& lineDirectionUnit,
        ::Vec3 const& pointOnPlane,
        ::Vec3 const& planeNormal,
        bool          allowBehind
    );
#endif
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
};
