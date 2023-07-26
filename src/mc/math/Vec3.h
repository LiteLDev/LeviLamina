#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Vec3 {

public:
    // prevent constructor by default
    Vec3& operator=(Vec3 const&) = delete;
    Vec3(Vec3 const&)            = delete;
    Vec3()                       = delete;

public:
    /**
     * @symbol ??0Vec3\@\@QEAA\@MMM\@Z
     */
    MCAPI Vec3(float, float, float); // NOLINT
    /**
     * @symbol ?abs\@Vec3\@\@QEBA?AV1\@XZ
     */
    MCAPI class Vec3 abs() const; // NOLINT
    /**
     * @symbol ?ceil\@Vec3\@\@QEBA?AV1\@XZ
     */
    MCAPI class Vec3 ceil() const; // NOLINT
    /**
     * @symbol ?distanceToLineSquared\@Vec3\@\@QEBAMAEBV1\@0\@Z
     */
    MCAPI float distanceToLineSquared(class Vec3 const&, class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?floor\@Vec3\@\@QEBA?AV1\@M\@Z
     */
    MCAPI class Vec3 floor(float) const; // NOLINT
    /**
     * @symbol ?isNan\@Vec3\@\@QEBA_NXZ
     */
    MCAPI bool isNan() const; // NOLINT
    /**
     * @symbol ?isNear\@Vec3\@\@QEBA_NAEBV1\@M\@Z
     */
    MCAPI bool isNear(class Vec3 const&, float) const; // NOLINT
    /**
     * @symbol ?length\@Vec3\@\@QEBAMXZ
     */
    MCAPI float length() const; // NOLINT
    /**
     * @symbol ?lengthSquared\@Vec3\@\@QEBAMXZ
     */
    MCAPI float lengthSquared() const; // NOLINT
    /**
     * @symbol ?maxComponent\@Vec3\@\@QEBAMXZ
     */
    MCAPI float maxComponent() const; // NOLINT
    /**
     * @symbol ?normalized\@Vec3\@\@QEBA?AV1\@XZ
     */
    MCAPI class Vec3 normalized() const; // NOLINT
    /**
     * @symbol ??XVec3\@\@QEAAAEAV0\@M\@Z
     */
    MCAPI class Vec3& operator*=(float); // NOLINT
    /**
     * @symbol ??HVec3\@\@QEBA?AV0\@AEBV0\@\@Z
     */
    MCAPI class Vec3 operator+(class Vec3 const&) const; // NOLINT
    /**
     * @symbol ??YVec3\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class Vec3& operator+=(class Vec3 const&); // NOLINT
    /**
     * @symbol ??GVec3\@\@QEBA?AV0\@XZ
     */
    MCAPI class Vec3 operator-() const; // NOLINT
    /**
     * @symbol ??8Vec3\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?toString\@Vec3\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const; // NOLINT
    /**
     * @symbol ?xz\@Vec3\@\@QEBA?AV1\@XZ
     */
    MCAPI class Vec3 xz() const; // NOLINT
    /**
     * @symbol ?clamp\@Vec3\@\@SA?AV1\@AEBV1\@00\@Z
     */
    MCAPI static class Vec3 clamp(class Vec3 const&, class Vec3 const&, class Vec3 const&); // NOLINT
    /**
     * @symbol ?directionFromRotation\@Vec3\@\@SA?AV1\@AEBVVec2\@\@\@Z
     */
    MCAPI static class Vec3 directionFromRotation(class Vec2 const&); // NOLINT
    /**
     * @symbol ?directionFromRotation\@Vec3\@\@SA?AV1\@MM\@Z
     */
    MCAPI static class Vec3 directionFromRotation(float, float); // NOLINT
    /**
     * @symbol ?fromXZ\@Vec3\@\@SA?AV1\@AEBVVec2\@\@M\@Z
     */
    MCAPI static class Vec3 fromXZ(class Vec2 const&, float); // NOLINT
    /**
     * @symbol ?rotationFromDirection\@Vec3\@\@SA?AVVec2\@\@AEBV1\@\@Z
     */
    MCAPI static class Vec2 rotationFromDirection(class Vec3 const&); // NOLINT
    /**
     * @symbol ?HALF\@Vec3\@\@2V1\@B
     */
    MCAPI static class Vec3 const HALF; // NOLINT
    /**
     * @symbol ?MAX\@Vec3\@\@2V1\@B
     */
    MCAPI static class Vec3 const MAX; // NOLINT
    /**
     * @symbol ?MIN\@Vec3\@\@2V1\@B
     */
    MCAPI static class Vec3 const MIN; // NOLINT
    /**
     * @symbol ?NEG_UNIT_X\@Vec3\@\@2V1\@B
     */
    MCAPI static class Vec3 const NEG_UNIT_X; // NOLINT
    /**
     * @symbol ?NEG_UNIT_Y\@Vec3\@\@2V1\@B
     */
    MCAPI static class Vec3 const NEG_UNIT_Y; // NOLINT
    /**
     * @symbol ?NEG_UNIT_Z\@Vec3\@\@2V1\@B
     */
    MCAPI static class Vec3 const NEG_UNIT_Z; // NOLINT
    /**
     * @symbol ?ONE\@Vec3\@\@2V1\@B
     */
    MCAPI static class Vec3 const ONE; // NOLINT
    /**
     * @symbol ?TWO\@Vec3\@\@2V1\@B
     */
    MCAPI static class Vec3 const TWO; // NOLINT
    /**
     * @symbol ?UNIT_X\@Vec3\@\@2V1\@B
     */
    MCAPI static class Vec3 const UNIT_X; // NOLINT
    /**
     * @symbol ?UNIT_Y\@Vec3\@\@2V1\@B
     */
    MCAPI static class Vec3 const UNIT_Y; // NOLINT
    /**
     * @symbol ?UNIT_Z\@Vec3\@\@2V1\@B
     */
    MCAPI static class Vec3 const UNIT_Z; // NOLINT
    /**
     * @symbol ?ZERO\@Vec3\@\@2V1\@B
     */
    MCAPI static class Vec3 const ZERO; // NOLINT
};
