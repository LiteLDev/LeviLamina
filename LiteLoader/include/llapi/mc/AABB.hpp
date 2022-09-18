#pragma once
#include "../Global.h"
#include "Vec3.hpp"

class AABB {

public:
    Vec3 min;
    Vec3 max;

public:
    inline AABB(class AABB const& k) : min(k.min), max(k.max){};
    // inline AABB(Vec3 const& p1, Vec3 const& p2)
    //     : min(p1)
    //     , max(p2){};
    // inline AABB(float ax, float ay, float az, float bx, float by, float bz)
    //     : min({ax, ay, az})
    //     , max({bx, by, bz}){};
    // inline AABB(Vec3 const& p1, float size)
    //     : min(p1)
    //     , max(p1 + size){};
    inline AABB() : min(Vec3::MIN), max(Vec3::MIN){};

    MCAPI AABB(class Vec3 const&, class Vec3 const&);
    MCAPI AABB(class Vec3 const&, float);
    MCAPI AABB(float, float, float, float, float, float);
    MCAPI class Vec3 axisInside(class AABB const&, class Vec3) const;
    MCAPI class HitResult clip(class Vec3 const&, class Vec3 const&) const;
    MCAPI class Vec3 clipCollide(class AABB const&, class Vec3 const&, bool, float*) const;
    MCAPI class AABB cloneAndExpandAlongDirection(class Vec3 const&) const;
    MCAPI class AABB cloneAndFloor(float, float) const;
    MCAPI class AABB cloneAndFloorMinAndCeilingMax() const;
    MCAPI class AABB cloneAndGrow(class Vec3 const&) const;
    MCAPI class AABB cloneAndShrink(class Vec3 const&) const;
    MCAPI class AABB cloneAndTransformByMatrix(class Matrix const&) const;
    MCAPI bool contains(class AABB const&) const;
    MCAPI bool contains(class Vec3 const&) const;
    MCAPI float distanceTo(class AABB const&) const;
    MCAPI float distanceTo(class Vec3 const&) const;
    MCAPI float distanceToSqr(class AABB const&) const;
    MCAPI class Vec3 getBounds() const;
    MCAPI class Vec3 getCenter() const;
    MCAPI float getSize() const;
    MCAPI float getVolume() const;
    MCAPI bool intersectSegment(class Vec3 const&, class Vec3 const&, class Vec3&, class Vec3&) const;
    MCAPI bool intersects(class AABB const&) const;
    MCAPI bool intersects(class Vec3 const&, class Vec3 const&) const;
    MCAPI bool intersectsInner(class AABB const&) const;
    MCAPI bool isValid() const;
    MCAPI bool operator!=(class AABB const&) const;
    MCAPI bool operator==(class AABB const&) const;
    MCAPI class AABB& set(float, float, float, float, float, float);
    MCAPI class AABB& set(class AABB const&);
    MCAPI class AABB& set(class Vec3 const&, class Vec3 const&);
    MCAPI class AABB& shrink(class Vec3 const&);
    MCAPI std::string toString() const;
    MCAPI class AABB& translateCenterTo(class Vec3 const&);
    MCAPI static class AABB const BLOCK_SHAPE;
    MCAPI static class AABB const BOX_AT_ORIGIN_WITH_NO_VOLUME;

    LIAPI class BoundingBox toBoundingBox() const;

    inline Vec3& operator[](int index) {
        if (index < 0 || index > 1) {
            return (&min)[0];
        }
        return (&min)[index];
    }

    constexpr AABB& operator+=(float& b) {
        min += b;
        max += b;
        return *this;
    }

    constexpr AABB& operator-=(float& b) {
        min -= b;
        max -= b;
        return *this;
    }

    constexpr AABB& operator+=(Vec3 const& b) {
        min += b;
        max += b;
        return *this;
    }

    constexpr AABB& operator-=(Vec3 const& b) {
        min -= b;
        max -= b;
        return *this;
    }

    inline AABB operator+(Vec3 const& b) const {
        return AABB(min + b, max + b);
    }

    inline AABB operator+(float& b) const {
        return AABB(min + b, max + b);
    }

    inline AABB operator-(Vec3 const& b) const {
        return AABB(min - b, max - b);
    }

    inline AABB operator-(float& b) const {
        return AABB(min - b, max - b);
    }

    inline AABB merge(AABB const& a) {
        return AABB(std::min(a.min, min), std::max(a.max, max));
    }

    inline AABB merge(Vec3 const& a) {
        return AABB(std::min(a, min), std::max(a, max));
    }
};