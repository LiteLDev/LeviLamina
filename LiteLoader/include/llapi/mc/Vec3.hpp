#pragma once

#include "../Global.h"
#include "BlockPos.hpp"
#include "VectorBase.hpp"

class Vec3 {
   public:
    float x{}, y{}, z{};

    inline Vec3() = default;

    inline Vec3(float _x, float _y, float _z) : x(_x), y(_y), z(_z){};

    inline explicit Vec3(BlockPos& pos) : x((float)pos.x), y((float)pos.y), z((float)pos.z){};

    inline Vec3(double _x, double _y, double _z) : x((float)_x), y((float)_y), z((float)_z){};

    inline Vec3(int _x, int _y, int _z) : x((float)_x), y((float)_y), z((float)_z){};

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

    inline Vec3 add(float dx, float dy, float dz) const { return {x + dx, y + dy, z + dz}; }

    constexpr float& operator[](size_t index) {
        switch (index) {
            case 1:
                return y;
            case 2:
                return z;
            default:
                return x;
        }
    }

    constexpr float operator[](size_t index) const {
        switch (index) {
            case 1:
                return y;
            case 2:
                return z;
            default:
                return x;
        }
    }

    inline Vec3 cross(const Vec3& b) const { return {y * b.z - z * b.y, z * b.x - x * b.z, x * b.y - y * b.x}; }

    FAKE_CRTP(Vec3, float, 3);
};

namespace std {

    template <>
    struct hash<Vec3> {
        std::size_t operator()(Vec3 const& pos) const noexcept {
            return pos.hash();
        }
    };

}  // namespace std
