#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class Matrix;
class Vec3;
struct AABBHitResult;
struct ClipCollideResult;
// clang-format on

class BoundingBox;

class AABB : public ll::math::CommutativeGroup<AABB, Vec3, Vec3> {
public:
    union {
        Vec3 min, x, r, s;
    };
    union {
        Vec3 max, y, g, t, z, b, p;
    };

    [[nodiscard]] constexpr AABB() noexcept : min(0), max(0) {}
    [[nodiscard]] constexpr AABB(class AABB const& k) noexcept : min(k.min), max(k.max) {}
    [[nodiscard]] constexpr AABB(class Vec3 const& min, class Vec3 const& max) noexcept : min(min), max(max) {}

    inline AABB& merge(AABB const& a) noexcept {
        *this = AABB{ll::math::min(a.min, min), ll::math::max(a.max, max)};
        return *this;
    }

    inline AABB& merge(Vec3 const& a) noexcept {
        *this = AABB{ll::math::min(a, min), ll::math::max(a, max)};
        return *this;
    }

    template <typename T>
    [[nodiscard]] constexpr T& get(size_t index) noexcept {
        if (index == 1) {
            return (T&)z;
        }
        return (T&)x;
    }
    template <typename T>
    [[nodiscard]] constexpr T const& get(size_t index) const noexcept {
        if (index == 1) {
            return (T const&)z;
        }
        return (T const&)x;
    }

    [[nodiscard]] constexpr bool contains(Vec3 const& a) const noexcept { return a.ge(min).all() && a.le(max).all(); }

    [[nodiscard]] constexpr bool contains(AABB const& a) const noexcept {
        return a.min.ge(min).all() && a.max.le(max).all();
    }

    LLAPI explicit operator BoundingBox() const;

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AABB(::Vec3 const& min, float side);

    MCAPI AABB(float minX, float minY, float minZ, float maxX, float maxY, float maxZ);

    MCAPI ::Vec3 axisInside(::AABB const& other, ::Vec3 axis) const;

    MCAPI ::AABBHitResult clip(::Vec3 const& a, ::Vec3 const& b) const;

    MCAPI ::Vec3 clipCollide(::AABB const& c, ::Vec3 const& velocity, bool oneWay, float* penetration) const;

    MCAPI ::AABB cloneAndAddAABB(::AABB const& rhs) const;

    MCAPI ::AABB cloneAndExpandAlongDirection(::Vec3 const& direction) const;

    MCAPI ::AABB cloneAndFloor(float offsetMin, float offsetMax) const;

    MCAPI ::AABB cloneAndFloorMinAndCeilingMax() const;

    MCAPI ::AABB cloneAndGrow(::Vec3 const& distance) const;

    MCAPI ::AABB cloneAndShrink(::Vec3 const& offset) const;

    MCAPI ::AABB cloneAndTransformByMatrix(::Matrix const& transform) const;

    MCAPI float distanceTo(::AABB const& aabb) const;

    MCAPI float distanceTo(::Vec3 const& pos) const;

    MCAPI float distanceToSqr(::AABB const& aabb) const;

    MCAPI ::Vec3 getBottomCenter() const;

    MCAPI ::Vec3 getBounds() const;

    MCAPI ::Vec3 getCenter() const;

    MCAPI float getSize() const;

    MCAPI float getVolume() const;

    MCAPI bool intersectSegment(
        ::Vec3 const& segmentBegin,
        ::Vec3 const& segmentEnd,
        ::Vec3&       intersectPoint,
        ::Vec3&       intersectNorm
    ) const;

    MCAPI bool intersects(::AABB const& c) const;

    MCAPI bool intersects(::Vec3 const& segmentBegin, ::Vec3 const& segmentEnd) const;

    MCAPI bool intersectsInner(::AABB const& c) const;

    MCAPI bool isNan() const;

    MCAPI bool isValid() const;

    MCAPI bool operator!=(::AABB const& rhs) const;

    MCAPI bool operator==(::AABB const& rhs) const;

    MCAPI ::AABB& set(::AABB const& b);

    MCAPI ::AABB& set(::Vec3 const& min, ::Vec3 const& max);

    MCAPI ::AABB& set(float minX, float minY, float minZ, float maxX, float maxY, float maxZ);

    MCAPI ::AABB& shrink(::Vec3 const& offset);

    MCAPI ::AABB& translateCenterTo(::Vec3 const& center);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ClipCollideResult
    clipCollide(::AABB const& stationary, ::AABB const& moving, ::Vec3 const& velocity);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::AABB const& BLOCK_SHAPE();

    MCAPI static ::AABB const& BOX_AT_ORIGIN_WITH_NO_VOLUME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Vec3 const& min, ::Vec3 const& max);

    MCAPI void* $ctor(::Vec3 const& min, float side);

    MCAPI void* $ctor(float minX, float minY, float minZ, float maxX, float maxY, float maxZ);
    // NOLINTEND
};
