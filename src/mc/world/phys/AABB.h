#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class Matrix;
struct AABBHitResult;
struct ClipCollideResult;
// clang-format on

class AABB {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> min;
    ::ll::TypedStorage<4, 12, ::Vec3> max;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C float _clipAxisCollide(::AABB const& c, float vAxis, int axisIndex, bool oneway) const;

    MCAPI ::AABBHitResult clip(::Vec3 const& a, ::Vec3 const& b) const;

    MCAPI ::AABB cloneAndFloor(float offsetMin, float offsetMax) const;

    MCAPI ::AABB cloneAndFloorMinAndCeilingMax() const;

    MCAPI ::AABB cloneAndGrow(::Vec3 const& distance) const;

    MCAPI ::AABB cloneAndShrink(::Vec3 const& offset) const;

    MCAPI ::AABB cloneAndTransformByMatrix(::Matrix const& transform) const;

    MCAPI_C bool contains(::Vec3 const& p) const;

    MCAPI float distanceTo(::Vec3 const& pos) const;

    MCAPI float distanceToSqr(::AABB const& aabb) const;

    MCAPI_C ::std::array<::Vec3, 8> getCorners() const;

    MCAPI bool intersectSegment(
        ::Vec3 const& segmentBegin,
        ::Vec3 const& segmentEnd,
        ::Vec3&       intersectPoint,
        ::Vec3&       intersectNorm
    ) const;

    MCAPI bool intersects(::AABB const& c) const;

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
