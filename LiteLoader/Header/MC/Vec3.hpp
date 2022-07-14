#pragma once

#include "../Global.h"
#include "BlockPos.hpp"

class Vec3 {
public:
    float x{}, y{}, z{};

    inline Vec3() = default;

    inline Vec3(float _x, float _y, float _z)
        : x(_x)
        , y(_y)
        , z(_z){};

    inline explicit Vec3(BlockPos& pos)
        : x((float)pos.x)
        , y((float)pos.y)
        , z((float)pos.z){};

    inline Vec3(double _x, double _y, double _z)
        : x((float)_x)
        , y((float)_y)
        , z((float)_z){};

    inline Vec3(int _x, int _y, int _z)
        : x((float)_x)
        , y((float)_y)
        , z((float)_z){};

    MCAPI class Vec3 abs() const;

    MCAPI class Vec3 ceil() const;

    MCAPI float distanceToLineSquared(class Vec3 const&, class Vec3 const&) const;

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

    inline std::string toString() const {
        return std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z);
    }

    inline Vec3 add(float dx, float dy, float dz) const {
        return {x + dx, y + dy, z + dz};
    }

    inline Vec3 normalize() const {
        float l = length();
        return {x / l, y / l, z / l};
    }

      inline float distanceToSqr(const struct Vec3& a2) const {
        return (float)((float)((float)(*((float*)&a2 + 1) - *((float*)this + 1)) *
                               (float)(*((float*)&a2 + 1) - *((float*)this + 1))) +
                       (float)((float)(*(float*)&a2 - *(float*)this) * (float)(*(float*)&a2 - *(float*)this))) +
               (float)((float)(*((float*)&a2 + 2) - *((float*)this + 2)) *
                       (float)(*((float*)&a2 + 2) - *((float*)this + 2)));
    }


    float& operator[](int index) {
            if (index < 0 || index > 2) { return (&x)[0]; }
        return (&x)[index];
    }

    constexpr bool operator==(const Vec3& b) const {
        return x == b.x && y == b.y && z == b.z;
    }

    constexpr bool operator!=(const Vec3& b) const {
        return x != b.x || y != b.y || z != b.z;
    }

    inline Vec3 operator*(float b) const {
        return {x * b, y * b, z * b};
    }

    inline Vec3 operator/(float b) const {
        return {x / b, y / b, z / b};
    }

    inline Vec3 operator+(float b) const {
        return {x + b, y + b, z + b};
    }

    inline Vec3 operator-(float b) const {
        return {x - b, y - b, z - b};
    }

    constexpr Vec3& operator+=(float b) {
        x += b;
        y += b;
        z += b;
        return *this;
    }

    constexpr Vec3& operator-=(float b) {
        x -= b;
        y -= b;
        z -= b;
        return *this;
    }

    constexpr Vec3& operator*=(float b) {
        x *= b;
        y *= b;
        z *= b;
        return *this;
    }

    constexpr Vec3& operator/=(float b) {
        x /= b;
        y /= b;
        z /= b;
        return *this;
    }

    constexpr Vec3& operator+=(Vec3 const& b) {
        x += b.x;
        y += b.y;
        z += b.z;
        return *this;
    }

    constexpr Vec3& operator-=(Vec3 const& b) {
        x -= b.x;
        y -= b.y;
        z -= b.z;
        return *this;
    }

    constexpr Vec3& operator*=(Vec3 const& b) {
        x *= b.x;
        y *= b.y;
        z *= b.z;
        return *this;
    }

    constexpr Vec3& operator/=(Vec3 const& b) {
        x /= b.x;
        y /= b.y;
        z /= b.z;
        return *this;
    }

    inline Vec3 operator+(Vec3 const& b) const {
        return {x + b.x, y + b.y, z + b.z};
    }

    inline Vec3 operator*(Vec3 const& b) const {
        return {x * b.x, y * b.y, z * b.z};
    }

    inline Vec3 operator/(Vec3 const& b) const {
        return {x / b.x, y / b.y, z / b.z};
    }

    inline Vec3 operator-(Vec3 const& b) const {
        return {x - b.x, y - b.y, z - b.z};
    }

    inline float dot(const Vec3& b) const {
        return {x * b.x + y * b.y + z * b.z};
    }

    inline Vec3 cross(const Vec3& b) const {
        return {y * b.z - z * b.y, z * b.x - x * b.z, x * b.y - y * b.x};
    }

    inline static Vec3 max(const Vec3& a, const Vec3& b) {
        return {std::max(a.x, b.x), std::max(a.y, b.y), std::max(a.z, b.z)};
    }

    inline static Vec3 min(const Vec3& a, const Vec3& b) {
        return {std::min(a.x, b.x), std::min(a.y, b.y), std::min(a.z, b.z)};
    }
};

namespace std {

template <> struct hash<Vec3> {
    std::size_t operator()(Vec3 const& pos) const noexcept {
        return (std::hash<float>()(pos.x) ^ std::hash<float>()(pos.y) ^ std::hash<float>()(pos.z));
    }
};

} // namespace std