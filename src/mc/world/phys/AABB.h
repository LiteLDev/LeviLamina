#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/phys/AABBHitResult.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class Matrix;
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

    template <typename T, size_t N>
    [[nodiscard]] constexpr T& get() noexcept {
        if constexpr (N == 0) {
            return x;
        } else if constexpr (N == 1) {
            return y;
        } else {
            static_assert(ll::traits::always_false<T>);
        }
    }

    template <typename T, size_t N>
    [[nodiscard]] constexpr T const& get() const noexcept {
        if constexpr (N == 0) {
            return x;
        } else if constexpr (N == 1) {
            return y;
        } else {
            static_assert(ll::traits::always_false<T>);
        }
    }

    [[nodiscard]] constexpr bool contains(Vec3 const& a) const noexcept { return a.ge(min).all() && a.le(max).all(); }

    [[nodiscard]] constexpr bool contains(AABB const& a) const noexcept {
        return a.min.ge(min).all() && a.max.le(max).all();
    }

    LLAPI explicit operator BoundingBox() const;

    LLAPI bool intersects(::AABB const& c) const;

    [[nodiscard]] constexpr Vec3 center() const noexcept { return (min + max) * 0.5f; }

    [[nodiscard]] constexpr AABB& shrink(float f) noexcept {
        min += f;
        max -= f;
        return *this;
    }

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C float _clipAxisCollide(::AABB const& c, float vAxis, int axisIndex, bool oneway) const;

    MCAPI ::AABBHitResult clip(::Vec3 const& a, ::Vec3 const& b) const;

    MCAPI ::AABB cloneAndFloor(float offsetMin, float offsetMax) const;

    MCAPI ::AABB cloneAndFloorMinAndCeilingMax() const;

    MCAPI ::AABB cloneAndGrow(::Vec3 const& distance) const;

    MCAPI ::AABB cloneAndGrow(float radius) const;

    MCAPI ::AABB cloneAndShrink(::Vec3 const& offset) const;

    MCAPI ::AABB cloneAndTransformByMatrix(::Matrix const& transform) const;

    MCAPI float distanceTo(::Vec3 const& pos) const;

    MCAPI float distanceToSqr(::AABB const& aabb) const;

    MCAPI_C ::std::array<::Vec3, 8> getCorners() const;

    MCAPI bool intersectSegment(
        ::Vec3 const& segmentBegin,
        ::Vec3 const& segmentEnd,
        ::Vec3&       intersectPoint,
        ::Vec3&       intersectNorm
    ) const;

    MCAPI bool intersects(::Vec3 const& segmentBegin, ::Vec3 const& segmentEnd) const;
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
};
