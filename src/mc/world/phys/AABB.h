#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AABB {

public:
    // prevent constructor by default
    AABB(AABB const&) = delete;
    AABB()            = delete;

public:
    /**
     * @symbol ??0AABB\@\@QEAA\@AEBVVec3\@\@0\@Z
     */
    MCAPI AABB(class Vec3 const&, class Vec3 const&); // NOLINT
    /**
     * @symbol ??0AABB\@\@QEAA\@MMMMMM\@Z
     */
    MCAPI AABB(float, float, float, float, float, float); // NOLINT
    /**
     * @symbol ??0AABB\@\@QEAA\@AEBVVec3\@\@M\@Z
     */
    MCAPI AABB(class Vec3 const&, float); // NOLINT
    /**
     * @symbol ?axisInside\@AABB\@\@QEBA?AVVec3\@\@AEBV1\@V2\@\@Z
     */
    MCAPI class Vec3 axisInside(class AABB const&, class Vec3) const; // NOLINT
    /**
     * @symbol ?clip\@AABB\@\@QEBA?AVHitResult\@\@AEBVVec3\@\@0\@Z
     */
    MCAPI class HitResult clip(class Vec3 const&, class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?clipCollide\@AABB\@\@QEBA?AVVec3\@\@AEBV1\@AEBV2\@_NPEAM\@Z
     */
    MCAPI class Vec3 clipCollide(class AABB const&, class Vec3 const&, bool, float*) const; // NOLINT
    /**
     * @symbol ?cloneAndExpandAlongDirection\@AABB\@\@QEBA?AV1\@AEBVVec3\@\@\@Z
     */
    MCAPI class AABB cloneAndExpandAlongDirection(class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?cloneAndFloor\@AABB\@\@QEBA?AV1\@MM\@Z
     */
    MCAPI class AABB cloneAndFloor(float, float) const; // NOLINT
    /**
     * @symbol ?cloneAndFloorMinAndCeilingMax\@AABB\@\@QEBA?AV1\@XZ
     */
    MCAPI class AABB cloneAndFloorMinAndCeilingMax() const; // NOLINT
    /**
     * @symbol ?cloneAndGrow\@AABB\@\@QEBA?AV1\@AEBVVec3\@\@\@Z
     */
    MCAPI class AABB cloneAndGrow(class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?cloneAndShrink\@AABB\@\@QEBA?AV1\@AEBVVec3\@\@\@Z
     */
    MCAPI class AABB cloneAndShrink(class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?cloneAndTransformByMatrix\@AABB\@\@QEBA?AV1\@AEBVMatrix\@\@\@Z
     */
    MCAPI class AABB cloneAndTransformByMatrix(class Matrix const&) const; // NOLINT
    /**
     * @symbol ?contains\@AABB\@\@QEBA_NAEBVVec3\@\@\@Z
     */
    MCAPI bool contains(class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?contains\@AABB\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool contains(class AABB const&) const; // NOLINT
    /**
     * @symbol ?distanceTo\@AABB\@\@QEBAMAEBV1\@\@Z
     */
    MCAPI float distanceTo(class AABB const&) const; // NOLINT
    /**
     * @symbol ?distanceTo\@AABB\@\@QEBAMAEBVVec3\@\@\@Z
     */
    MCAPI float distanceTo(class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?distanceToSqr\@AABB\@\@QEBAMAEBV1\@\@Z
     */
    MCAPI float distanceToSqr(class AABB const&) const; // NOLINT
    /**
     * @symbol ?getBounds\@AABB\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getBounds() const; // NOLINT
    /**
     * @symbol ?getCenter\@AABB\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getCenter() const; // NOLINT
    /**
     * @symbol ?getSize\@AABB\@\@QEBAMXZ
     */
    MCAPI float getSize() const; // NOLINT
    /**
     * @symbol ?getVolume\@AABB\@\@QEBAMXZ
     */
    MCAPI float getVolume() const; // NOLINT
    /**
     * @symbol ?intersectSegment\@AABB\@\@QEBA_NAEBVVec3\@\@0AEAV2\@1\@Z
     */
    MCAPI bool intersectSegment(class Vec3 const&, class Vec3 const&, class Vec3&, class Vec3&) const; // NOLINT
    /**
     * @symbol ?intersects\@AABB\@\@QEBA_NAEBVVec3\@\@0\@Z
     */
    MCAPI bool intersects(class Vec3 const&, class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?intersects\@AABB\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool intersects(class AABB const&) const; // NOLINT
    /**
     * @symbol ?intersectsInner\@AABB\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool intersectsInner(class AABB const&) const; // NOLINT
    /**
     * @symbol ?isValid\@AABB\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const; // NOLINT
    /**
     * @symbol ??9AABB\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class AABB const&) const; // NOLINT
    /**
     * @symbol ??4AABB\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class AABB& operator=(class AABB const&); // NOLINT
    /**
     * @symbol ??8AABB\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class AABB const&) const; // NOLINT
    /**
     * @symbol ?set\@AABB\@\@QEAAAEAV1\@MMMMMM\@Z
     */
    MCAPI class AABB& set(float, float, float, float, float, float); // NOLINT
    /**
     * @symbol ?set\@AABB\@\@QEAAAEAV1\@AEBV1\@\@Z
     */
    MCAPI class AABB& set(class AABB const&); // NOLINT
    /**
     * @symbol ?set\@AABB\@\@QEAAAEAV1\@AEBVVec3\@\@0\@Z
     */
    MCAPI class AABB& set(class Vec3 const&, class Vec3 const&); // NOLINT
    /**
     * @symbol ?translateCenterTo\@AABB\@\@QEAAAEAV1\@AEBVVec3\@\@\@Z
     */
    MCAPI class AABB& translateCenterTo(class Vec3 const&); // NOLINT
    /**
     * @symbol ?fromPoints\@AABB\@\@SA?AV1\@AEBVVec3\@\@0\@Z
     */
    MCAPI static class AABB fromPoints(class Vec3 const&, class Vec3 const&); // NOLINT
    /**
     * @symbol ?BLOCK_SHAPE\@AABB\@\@2V1\@B
     */
    MCAPI static class AABB const BLOCK_SHAPE; // NOLINT
    /**
     * @symbol ?BOX_AT_ORIGIN_WITH_NO_VOLUME\@AABB\@\@2V1\@B
     */
    MCAPI static class AABB const BOX_AT_ORIGIN_WITH_NO_VOLUME; // NOLINT
};
