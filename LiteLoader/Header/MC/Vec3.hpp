#pragma once
#include "../Global.h"
#include "BlockPos.hpp"
class Vec3 {
public:
    float x, y, z;

    inline Vec3(){};
    inline Vec3(float mx, float my, float mz)
        : x(mx)
        , y(my)
        , z(mz){};
    inline Vec3(BlockPos& pos)
        : x(pos.x)
        , y(pos.y)
        , z(pos.z){};
    inline Vec3(double mx, double my, double mz)
        : x(mx)
        , y(my)
        , z(mz){};
    inline Vec3(int mx, int my, int mz)
        : x(mx)
        , y(my)
        , z(mz){};
    MCAPI class Vec3 abs() const;
    MCAPI class Vec3 ceil() const;
    MCAPI float distanceToLineSquared(class Vec3 const&, class Vec3 const&) const;
    MCAPI float distanceToSqr(class Vec3 const&) const;
    MCAPI class Vec3 floor(float) const;
    MCAPI bool isNan() const;
    MCAPI bool isNear(class Vec3 const&, float) const;
    MCAPI float maxComponent() const;
    MCAPI class Vec3 normalized() const;
    MCAPI class Vec3 xz() const;
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
    MCAPI static class Vec3 clamp(class Vec3 const&, class Vec3 const&, class Vec3 const&);
    MCAPI static class Vec3 directionFromRotation(class Vec2 const&);
    MCAPI static class Vec2 rotationFromDirection(class Vec3 const&);

    LIAPI BlockPos toBlockPos() const;
    LIAPI float length() const;
    LIAPI float distanceTo(Vec3 const&) const;

    inline std::string toString() const
    {
        return std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z);
    }

    inline Vec3 add(float dx, float dy, float dz) const
    {
        return {x + dx, y + dy, z + dz};
    }

    inline Vec3 normalize() const
    {
        float l = length();
        return {x / l, y / l, z / l};
    }

    inline Vec3 operator*(float num) const
    {
        return {x * num, y * num, z * num};
    }

    inline Vec3 operator+(const Vec3& b) const
    {
        return {this->x + b.x, this->y + b.y, this->z + b.z};
    }

    inline Vec3 operator-(const Vec3& b) const
    {
        return {this->x - b.x, this->y - b.y, this->z - b.z};
    }

    constexpr bool operator==(const Vec3& b) const
    {
        return {this->x == b.x && this->y == b.y && this->z == b.z};
    }
};