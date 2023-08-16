#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"

class BoundingBox;

class AABB : public CommutativeGroup<AABB, Vec3, Vec3> {

public:
    union {
        Vec3 min, x, r, s;
    };
    union {
        Vec3 max, y, g, t, z, b, p;
    };

    constexpr AABB() noexcept : min(Vec3::MIN), max(Vec3::MIN){};
    constexpr AABB(class AABB const& k) noexcept : min(k.min), max(k.max){};
    constexpr AABB(class Vec3 const& min, class Vec3 const& max) noexcept : min(min), max(max){};

    constexpr AABB& merge(AABB const& a) noexcept {
        *this = AABB{::min(a.min, min), ::max(a.max, max)};
        return *this;
    }

    constexpr AABB& merge(Vec3 const& a) noexcept {
        *this = AABB{::min(a, min), ::max(a, max)};
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
            return (T)z;
        }
        return (T)x;
    }

    LLAPI explicit operator class BoundingBox() const;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0AABB\@\@QEAA\@AEBVVec3\@\@M\@Z
     */
    MCAPI AABB(class Vec3 const&, float);
    /**
     * @symbol ??0AABB\@\@QEAA\@MMMMMM\@Z
     */
    MCAPI AABB(float, float, float, float, float, float);
    /**
     * @symbol ?axisInside\@AABB\@\@QEBA?AVVec3\@\@AEBV1\@V2\@\@Z
     */
    MCAPI class Vec3 axisInside(class AABB const&, class Vec3) const;
    /**
     * @symbol ?clip\@AABB\@\@QEBA?AVHitResult\@\@AEBVVec3\@\@0\@Z
     */
    MCAPI class HitResult clip(class Vec3 const&, class Vec3 const&) const;
    /**
     * @symbol ?clipCollide\@AABB\@\@QEBA?AVVec3\@\@AEBV1\@AEBV2\@_NPEAM\@Z
     */
    MCAPI class Vec3 clipCollide(class AABB const&, class Vec3 const&, bool, float*) const;
    /**
     * @symbol ?cloneAndExpandAlongDirection\@AABB\@\@QEBA?AV1\@AEBVVec3\@\@\@Z
     */
    MCAPI class AABB cloneAndExpandAlongDirection(class Vec3 const&) const;
    /**
     * @symbol ?cloneAndFloor\@AABB\@\@QEBA?AV1\@MM\@Z
     */
    MCAPI class AABB cloneAndFloor(float, float) const;
    /**
     * @symbol ?cloneAndFloorMinAndCeilingMax\@AABB\@\@QEBA?AV1\@XZ
     */
    MCAPI class AABB cloneAndFloorMinAndCeilingMax() const;
    /**
     * @symbol ?cloneAndGrow\@AABB\@\@QEBA?AV1\@AEBVVec3\@\@\@Z
     */
    MCAPI class AABB cloneAndGrow(class Vec3 const&) const;
    /**
     * @symbol ?cloneAndShrink\@AABB\@\@QEBA?AV1\@AEBVVec3\@\@\@Z
     */
    MCAPI class AABB cloneAndShrink(class Vec3 const&) const;
    /**
     * @symbol ?cloneAndTransformByMatrix\@AABB\@\@QEBA?AV1\@AEBVMatrix\@\@\@Z
     */
    MCAPI class AABB cloneAndTransformByMatrix(class Matrix const&) const;
    /**
     * @symbol ?contains\@AABB\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool contains(class AABB const&) const;
    /**
     * @symbol ?contains\@AABB\@\@QEBA_NAEBVVec3\@\@\@Z
     */
    MCAPI bool contains(class Vec3 const&) const;
    /**
     * @symbol ?distanceTo\@AABB\@\@QEBAMAEBV1\@\@Z
     */
    MCAPI float distanceTo(class AABB const&) const;
    /**
     * @symbol ?distanceTo\@AABB\@\@QEBAMAEBVVec3\@\@\@Z
     */
    MCAPI float distanceTo(class Vec3 const&) const;
    /**
     * @symbol ?distanceToSqr\@AABB\@\@QEBAMAEBV1\@\@Z
     */
    MCAPI float distanceToSqr(class AABB const&) const;
    /**
     * @symbol ?getBounds\@AABB\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getBounds() const;
    /**
     * @symbol ?getCenter\@AABB\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getCenter() const;
    /**
     * @symbol ?getSize\@AABB\@\@QEBAMXZ
     */
    MCAPI float getSize() const;
    /**
     * @symbol ?getVolume\@AABB\@\@QEBAMXZ
     */
    MCAPI float getVolume() const;
    /**
     * @symbol ?intersectSegment\@AABB\@\@QEBA_NAEBVVec3\@\@0AEAV2\@1\@Z
     */
    MCAPI bool intersectSegment(class Vec3 const&, class Vec3 const&, class Vec3&, class Vec3&) const;
    /**
     * @symbol ?intersects\@AABB\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool intersects(class AABB const&) const;
    /**
     * @symbol ?intersects\@AABB\@\@QEBA_NAEBVVec3\@\@0\@Z
     */
    MCAPI bool intersects(class Vec3 const&, class Vec3 const&) const;
    /**
     * @symbol ?intersectsInner\@AABB\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool intersectsInner(class AABB const&) const;
    /**
     * @symbol ?isValid\@AABB\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ??9AABB\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class AABB const&) const;
    /**
     * @symbol ??4AABB\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class AABB& operator=(class AABB const&);
    /**
     * @symbol ??8AABB\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class AABB const&) const;
    /**
     * @symbol ?set\@AABB\@\@QEAAAEAV1\@AEBV1\@\@Z
     */
    MCAPI class AABB& set(class AABB const&);
    /**
     * @symbol ?set\@AABB\@\@QEAAAEAV1\@MMMMMM\@Z
     */
    MCAPI class AABB& set(float, float, float, float, float, float);
    /**
     * @symbol ?set\@AABB\@\@QEAAAEAV1\@AEBVVec3\@\@0\@Z
     */
    MCAPI class AABB& set(class Vec3 const&, class Vec3 const&);
    /**
     * @symbol ?translateCenterTo\@AABB\@\@QEAAAEAV1\@AEBVVec3\@\@\@Z
     */
    MCAPI class AABB& translateCenterTo(class Vec3 const&);
    /**
     * @symbol ?fromPoints\@AABB\@\@SA?AV1\@AEBVVec3\@\@0\@Z
     */
    MCAPI static class AABB fromPoints(class Vec3 const&, class Vec3 const&);
    /**
     * @symbol ?BLOCK_SHAPE\@AABB\@\@2V1\@B
     */
    MCAPI static class AABB const BLOCK_SHAPE;
    /**
     * @symbol ?BOX_AT_ORIGIN_WITH_NO_VOLUME\@AABB\@\@2V1\@B
     */
    MCAPI static class AABB const BOX_AT_ORIGIN_WITH_NO_VOLUME;
    // NOLINTEND
};
