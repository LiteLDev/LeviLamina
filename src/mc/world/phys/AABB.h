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
    // prevent constructor by default
    AABB();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AABB(::Vec3 const& min, ::Vec3 const& max);

    MCAPI AABB(::Vec3 const& min, float side);

    MCAPI AABB(float minX, float minY, float minZ, float maxX, float maxY, float maxZ);

    MCAPI ::Vec3 axisInside(::AABB const& other, ::Vec3 axis) const;

    MCAPI ::AABBHitResult clip(::Vec3 const& a, ::Vec3 const& b) const;

    MCAPI ::Vec3 clipCollide(::AABB const& c, ::Vec3 const& velocity, bool oneWay, float* penetration) const;

#ifdef LL_PLAT_C
    MCAPI float clipXCollide(::AABB const& c, float ya, bool oneway) const;

    MCAPI float clipYCollide(::AABB const& c, float ya, bool oneway) const;

    MCAPI float clipZCollide(::AABB const& c, float ya, bool oneway) const;
#endif

    MCAPI ::AABB cloneAndExpandAlongDirection(::Vec3 const& direction) const;

    MCAPI ::AABB cloneAndFloor(float offsetMin, float offsetMax) const;

    MCAPI ::AABB cloneAndFloorMinAndCeilingMax() const;

    MCAPI ::AABB cloneAndGrow(::Vec3 const& distance) const;

    MCAPI ::AABB cloneAndGrow(float radius) const;

    MCAPI ::AABB cloneAndShrink(::Vec3 const& offset) const;

    MCAPI ::AABB cloneAndTransformByMatrix(::Matrix const& transform) const;

    MCAPI ::AABB cloneAndTranslate(::Vec3 const& offset) const;

    MCAPI bool contains(::AABB const& bb) const;

    MCAPI bool contains(::Vec3 const& p) const;

    MCAPI float distanceTo(::AABB const& aabb) const;

    MCAPI float distanceTo(::Vec3 const& pos) const;

    MCAPI float distanceToSqr(::Vec3 const& pos) const;

    MCAPI ::Vec3 getBottomCenter() const;

    MCAPI ::Vec3 getBounds() const;

    MCAPI ::Vec3 getCenter() const;

#ifdef LL_PLAT_C
    MCAPI ::std::array<::Vec3, 8> getCorners() const;
#endif

    MCAPI float getSize() const;

    MCAPI ::Vec3 getTopCenter() const;

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

    MCFOLD ::AABB& set(::Vec3 const& min, ::Vec3 const& max);

    MCFOLD ::AABB& set(float minX, float minY, float minZ, float maxX, float maxY, float maxZ);

    MCAPI ::AABB& shrink(::Vec3 const& offset);

#ifdef LL_PLAT_C
    MCAPI ::AABB& translateCenterTo(::Vec3 const& center);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::AABB aroundRadius(::Vec3 const& point, float radius);

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
    MCFOLD void* $ctor(::Vec3 const& min, ::Vec3 const& max);

    MCAPI void* $ctor(::Vec3 const& min, float side);

    MCFOLD void* $ctor(float minX, float minY, float minZ, float maxX, float maxY, float maxZ);
    // NOLINTEND
};
