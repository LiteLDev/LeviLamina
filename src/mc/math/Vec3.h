#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Vec3 {
public:
    // prevent constructor by default
    Vec3& operator=(Vec3 const&);
    Vec3(Vec3 const&);
    Vec3();

public:
    // NOLINTBEGIN
    MCAPI class Vec3 abs() const;

    MCAPI class Vec3 ceil() const;

    MCAPI float distanceToLineSquared(class Vec3 const& p0, class Vec3 const& p1) const;

    MCAPI class Vec3 floor(float offset) const;

    MCAPI bool isNan() const;

    MCAPI bool isNear(class Vec3 const& rhs, float e) const;

    MCAPI float length() const;

    MCAPI float maxComponent() const;

    MCAPI class Vec3 normalized() const;

    MCAPI class Vec3& operator*=(float);

    MCAPI class Vec3 operator+(class Vec3 const&) const;

    MCAPI class Vec3& operator+=(class Vec3 const&);

    MCAPI class Vec3 operator-() const;

    MCAPI class Vec3 operator-(class Vec3 const&) const;

    MCAPI bool operator==(class Vec3 const& rhs) const;

    MCAPI std::string toJsonString() const;

    MCAPI std::string toString() const;

    MCAPI class Vec3 xz() const;

    MCAPI static class Vec3 clamp(class Vec3 const& v, class Vec3 const& clipMin, class Vec3 const& clipMax);

    MCAPI static class Vec3 directionFromRotation(class Vec2 const& rot);

    MCAPI static class Vec3 directionFromRotation(float rotX, float rotY);

    MCAPI static class Vec3 fromXZ(class Vec2 const&, float y);

    MCAPI static class Vec2 rotationFromDirection(class Vec3 const& dir);

    MCAPI static class Vec3 const HALF;

    MCAPI static class Vec3 const MAX;

    MCAPI static class Vec3 const MIN;

    MCAPI static class Vec3 const NEG_UNIT_X;

    MCAPI static class Vec3 const NEG_UNIT_Y;

    MCAPI static class Vec3 const NEG_UNIT_Z;

    MCAPI static class Vec3 const ONE;

    MCAPI static class Vec3 const TWO;

    MCAPI static class Vec3 const UNIT_X;

    MCAPI static class Vec3 const UNIT_Y;

    MCAPI static class Vec3 const UNIT_Z;

    MCAPI static class Vec3 const ZERO;

    // NOLINTEND
};
