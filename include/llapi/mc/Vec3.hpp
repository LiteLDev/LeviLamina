#pragma once

#include "../Global.h"
#include "BlockPos.hpp"

class Vec3 {
public:
    float x{}, y{}, z{};

    inline Vec3() = default;

    inline Vec3(float _x, float _y, float _z)
    : x(_x), y(_y), z(_z){};

    inline explicit Vec3(BlockPos& pos)
    : x((float)pos.x), y((float)pos.y), z((float)pos.z){};

    inline Vec3(double _x, double _y, double _z)
    : x((float)_x), y((float)_y), z((float)_z){};

    inline Vec3(int _x, int _y, int _z)
    : x((float)_x), y((float)_y), z((float)_z){};

    MCAPI class Vec3 abs() const;

    MCAPI class Vec3 ceil() const;

    MCAPI class Vec3 floor(float l = 1.0f) const;

    MCAPI float distanceToLineSquared(class Vec3 const&, class Vec3 const&) const;

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

    inline float length() const {
        return sqrt(lengthSqr());
    }

    inline float lengthSqr() const {
        return this->dot(*this);
    }

    inline float distanceTo(Vec3 const& b) const {
        return (*this - b).length();
    }

    inline float distanceToSqr(Vec3 const& b) const {
        return (*this - b).lengthSqr();
    }

    float& operator[](int index) {
        if (index < 0 || index > 2) {
            return (&x)[0];
        }
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
        return x * b.x + y * b.y + z * b.z;
    }

    inline Vec3 cross(const Vec3& b) const {
        return {y * b.z - z * b.y, z * b.x - x * b.z, x * b.y - y * b.x};
    }

    inline bool operator<(const Vec3& b) const {
        return this->lengthSqr() < b.lengthSqr();
    }

    inline bool operator>(const Vec3& b) const {
        return this->lengthSqr() > b.lengthSqr();
    }
};

namespace std {

template <>
struct hash<Vec3> {
    std::size_t operator()(Vec3 const& pos) const noexcept {
        return (std::hash<float>()(pos.x) ^ std::hash<float>()(pos.y) ^ std::hash<float>()(pos.z));
    }
};

} // namespace std