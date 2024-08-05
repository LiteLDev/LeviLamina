#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AABB {
public:
    // prevent constructor by default
    AABB(AABB const&);
    AABB();

public:
    // NOLINTBEGIN
    MCAPI AABB(class Vec3 const& min, class Vec3 const& max);

    MCAPI AABB(class Vec3 const& min, float side);

    MCAPI AABB(float minX, float minY, float minZ, float maxX, float maxY, float maxZ);

    MCAPI class AABB& addAABB(class AABB const&);

    MCAPI class Vec3 axisInside(class AABB const& other, class Vec3 axis) const;

    MCAPI class HitResult clip(class Vec3 const& a, class Vec3 const& b) const;

    MCAPI class Vec3
    clipCollide(class AABB const& c, class Vec3 const& velocity, bool oneWay, float* penetration) const;

    MCAPI class AABB cloneAndAddAABB(class AABB const&) const;

    MCAPI class AABB cloneAndExpandAlongDirection(class Vec3 const& direction) const;

    MCAPI class AABB cloneAndFloor(float offsetMin, float offsetMax) const;

    MCAPI class AABB cloneAndFloorMinAndCeilingMax() const;

    MCAPI class AABB cloneAndGrow(class Vec3 const& distance) const;

    MCAPI class AABB cloneAndSetBoundsAroundCenter(class Vec3) const;

    MCAPI class AABB cloneAndShrink(class Vec3 const& offset) const;

    MCAPI class AABB cloneAndTransformByMatrix(class Matrix const& transform) const;

    MCAPI bool contains(class AABB const& bb) const;

    MCAPI bool contains(class Vec3 const& p) const;

    MCAPI float distanceTo(class AABB const& aabb) const;

    MCAPI float distanceTo(class Vec3 const& pos) const;

    MCAPI float distanceToSqr(class AABB const& aabb) const;

    MCAPI class Vec3 getBounds() const;

    MCAPI class Vec3 getCenter() const;

    MCAPI float getSize() const;

    MCAPI float getVolume() const;

    MCAPI bool intersectSegment(
        class Vec3 const& segmentBegin,
        class Vec3 const& segmentEnd,
        class Vec3&       intersectPoint,
        class Vec3&       intersectNorm
    ) const;

    MCAPI bool intersects(class AABB const& c) const;

    MCAPI bool intersects(class Vec3 const& segmentBegin, class Vec3 const& segmentEnd) const;

    MCAPI bool intersectsInner(class AABB const& c) const;

    MCAPI bool isValid() const;

    MCAPI bool operator!=(class AABB const& rhs) const;

    MCAPI class AABB& operator=(class AABB const&);

    MCAPI bool operator==(class AABB const& rhs) const;

    MCAPI class AABB& set(class AABB const& b);

    MCAPI class AABB& set(class Vec3 const& min, class Vec3 const& max);

    MCAPI class AABB& set(float minX, float minY, float minZ, float maxX, float maxY, float maxZ);

    MCAPI class AABB& shrink(class Vec3 const& offset);

    MCAPI class AABB& translateCenterTo(class Vec3 const&);

    MCAPI static struct ClipCollideResult clipCollide(class AABB const&, class AABB const&, class Vec3 const&);

    MCAPI static class AABB fromPoints(class Vec3 const&, class Vec3 const&);

    MCAPI static class AABB const BLOCK_SHAPE;

    MCAPI static class AABB const BOX_AT_ORIGIN_WITH_NO_VOLUME;

    // NOLINTEND
};
