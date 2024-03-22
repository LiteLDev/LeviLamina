#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"

class BoundingBox;

class AABB : public ll::math::CommutativeGroup<AABB, Vec3, Vec3> {
public:
    union {
        Vec3 min, x, r, s;
    };
    union {
        Vec3 max, y, g, t, z, b, p;
    };

    [[nodiscard]] constexpr AABB() noexcept : min(0), max(0){};
    [[nodiscard]] constexpr AABB(class AABB const& k) noexcept : min(k.min), max(k.max){};
    [[nodiscard]] constexpr AABB(class Vec3 const& min, class Vec3 const& max) noexcept : min(min), max(max){};

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

    LLAPI explicit operator class BoundingBox() const;

public:
    // NOLINTBEGIN
    // symbol: ??0AABB@@QEAA@AEBVVec3@@M@Z
    MCAPI AABB(class Vec3 const& min, float side);

    // symbol: ??0AABB@@QEAA@MMMMMM@Z
    MCAPI AABB(float minX, float minY, float minZ, float maxX, float maxY, float maxZ);

    // symbol: ?addAABB@AABB@@QEAAAEAV1@AEBV1@@Z
    MCAPI class AABB& addAABB(class AABB const&);

    // symbol: ?axisInside@AABB@@QEBA?AVVec3@@AEBV1@V2@@Z
    MCAPI class Vec3 axisInside(class AABB const& other, class Vec3 axis) const;

    // symbol: ?clip@AABB@@QEBA?AVHitResult@@AEBVVec3@@0@Z
    MCAPI class HitResult clip(class Vec3 const& a, class Vec3 const& b) const;

    // symbol: ?clipCollide@AABB@@QEBA?AVVec3@@AEBV1@AEBV2@_NPEAM@Z
    MCAPI class Vec3
    clipCollide(class AABB const& c, class Vec3 const& velocity, bool oneWay, float* penetration) const;

    // symbol: ?cloneAndAddAABB@AABB@@QEBA?AV1@AEBV1@@Z
    MCAPI class AABB cloneAndAddAABB(class AABB const&) const;

    // symbol: ?cloneAndExpandAlongDirection@AABB@@QEBA?AV1@AEBVVec3@@@Z
    MCAPI class AABB cloneAndExpandAlongDirection(class Vec3 const& direction) const;

    // symbol: ?cloneAndFloor@AABB@@QEBA?AV1@MM@Z
    MCAPI class AABB cloneAndFloor(float offsetMin, float offsetMax) const;

    // symbol: ?cloneAndFloorMinAndCeilingMax@AABB@@QEBA?AV1@XZ
    MCAPI class AABB cloneAndFloorMinAndCeilingMax() const;

    // symbol: ?cloneAndGrow@AABB@@QEBA?AV1@AEBVVec3@@@Z
    MCAPI class AABB cloneAndGrow(class Vec3 const& distance) const;

    // symbol: ?cloneAndSetBoundsAroundCenter@AABB@@QEBA?AV1@VVec3@@@Z
    MCAPI class AABB cloneAndSetBoundsAroundCenter(class Vec3) const;

    // symbol: ?cloneAndShrink@AABB@@QEBA?AV1@AEBVVec3@@@Z
    MCAPI class AABB cloneAndShrink(class Vec3 const& offset) const;

    // symbol: ?cloneAndTransformByMatrix@AABB@@QEBA?AV1@AEBVMatrix@@@Z
    MCAPI class AABB cloneAndTransformByMatrix(class Matrix const& transform) const;

    // symbol: ?distanceTo@AABB@@QEBAMAEBV1@@Z
    MCAPI float distanceTo(class AABB const& aabb) const;

    // symbol: ?distanceTo@AABB@@QEBAMAEBVVec3@@@Z
    MCAPI float distanceTo(class Vec3 const& pos) const;

    // symbol: ?distanceToSqr@AABB@@QEBAMAEBV1@@Z
    MCAPI float distanceToSqr(class AABB const& aabb) const;

    // symbol: ?getBounds@AABB@@QEBA?AVVec3@@XZ
    MCAPI class Vec3 getBounds() const;

    // symbol: ?getCenter@AABB@@QEBA?AVVec3@@XZ
    MCAPI class Vec3 getCenter() const;

    // symbol: ?getSize@AABB@@QEBAMXZ
    MCAPI float getSize() const;

    // symbol: ?getVolume@AABB@@QEBAMXZ
    MCAPI float getVolume() const;

    // symbol: ?intersectSegment@AABB@@QEBA_NAEBVVec3@@0AEAV2@1@Z
    MCAPI bool intersectSegment(
        class Vec3 const& segmentBegin,
        class Vec3 const& segmentEnd,
        class Vec3&       intersectPoint,
        class Vec3&       intersectNorm
    ) const;

    // symbol: ?intersects@AABB@@QEBA_NAEBV1@@Z
    MCAPI bool intersects(class AABB const& c) const;

    // symbol: ?intersects@AABB@@QEBA_NAEBVVec3@@0@Z
    MCAPI bool intersects(class Vec3 const& segmentBegin, class Vec3 const& segmentEnd) const;

    // symbol: ?intersectsInner@AABB@@QEBA_NAEBV1@@Z
    MCAPI bool intersectsInner(class AABB const& c) const;

    // symbol: ?isValid@AABB@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ??9AABB@@QEBA_NAEBV0@@Z
    MCAPI bool operator!=(class AABB const& rhs) const;

    // symbol: ??4AABB@@QEAAAEAV0@AEBV0@@Z
    MCAPI class AABB& operator=(class AABB const&);

    // symbol: ??8AABB@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class AABB const& rhs) const;

    // symbol: ?set@AABB@@QEAAAEAV1@AEBV1@@Z
    MCAPI class AABB& set(class AABB const& b);

    // symbol: ?set@AABB@@QEAAAEAV1@AEBVVec3@@0@Z
    MCAPI class AABB& set(class Vec3 const& min, class Vec3 const& max);

    // symbol: ?set@AABB@@QEAAAEAV1@MMMMMM@Z
    MCAPI class AABB& set(float minX, float minY, float minZ, float maxX, float maxY, float maxZ);

    // symbol: ?shrink@AABB@@QEAAAEAV1@AEBVVec3@@@Z
    MCAPI class AABB& shrink(class Vec3 const& offset);

    // symbol: ?translateCenterTo@AABB@@QEAAAEAV1@AEBVVec3@@@Z
    MCAPI class AABB& translateCenterTo(class Vec3 const&);

    // symbol: ?clipCollide@AABB@@SA?AUClipCollideResult@@AEBV1@0AEBVVec3@@@Z
    MCAPI static struct ClipCollideResult clipCollide(class AABB const&, class AABB const&, class Vec3 const&);

    // symbol: ?fromPoints@AABB@@SA?AV1@AEBVVec3@@0@Z
    MCAPI static class AABB fromPoints(class Vec3 const&, class Vec3 const&);

    // symbol: ?BLOCK_SHAPE@AABB@@2V1@B
    MCAPI static class AABB const BLOCK_SHAPE;

    // symbol: ?BOX_AT_ORIGIN_WITH_NO_VOLUME@AABB@@2V1@B
    MCAPI static class AABB const BOX_AT_ORIGIN_WITH_NO_VOLUME;

    // NOLINTEND
};
