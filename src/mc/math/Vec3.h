#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Vec3 : public ll::math::floatN3<Vec3> {
public:
    using floatN3::floatN3;
    // NOLINTBEGIN
    // symbol: ?distanceToLineSquared@Vec3@@QEBAMAEBV1@0@Z
    MCAPI float distanceToLineSquared(class Vec3 const& p0, class Vec3 const& p1) const;

    // symbol: ?floor@Vec3@@QEBA?AV1@M@Z
    MCAPI class Vec3 floor(float offset) const;

    // symbol: ?isNan@Vec3@@QEBA_NXZ
    MCAPI bool isNan() const;

    // symbol: ?isNear@Vec3@@QEBA_NAEBV1@M@Z
    MCAPI bool isNear(class Vec3 const& rhs, float e) const;

    // symbol: ?maxComponent@Vec3@@QEBAMXZ
    MCAPI float maxComponent() const;

    // symbol: ?normalized@Vec3@@QEBA?AV1@XZ
    MCAPI class Vec3 normalized() const;

    // symbol: ?toJsonString@Vec3@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toJsonString() const;

    // symbol: ?xz@Vec3@@QEBA?AV1@XZ
    MCAPI class Vec3 xz() const;

    // symbol: ?directionFromRotation@Vec3@@SA?AV1@AEBVVec2@@@Z
    MCAPI static class Vec3 directionFromRotation(class Vec2 const& rot);

    // symbol: ?directionFromRotation@Vec3@@SA?AV1@MM@Z
    MCAPI static class Vec3 directionFromRotation(float rotX, float rotY);

    // symbol: ?fromXZ@Vec3@@SA?AV1@AEBVVec2@@M@Z
    MCAPI static class Vec3 fromXZ(class Vec2 const&, float y);

    // symbol: ?rotationFromDirection@Vec3@@SA?AVVec2@@AEBV1@@Z
    MCAPI static class Vec2 rotationFromDirection(class Vec3 const& dir);

    // symbol: ?HALF@Vec3@@2V1@B
    MCAPI static class Vec3 const HALF;

    // symbol: ?MAX@Vec3@@2V1@B
    MCAPI static class Vec3 const MAX;

    // symbol: ?MIN@Vec3@@2V1@B
    MCAPI static class Vec3 const MIN;

    // symbol: ?NEG_UNIT_X@Vec3@@2V1@B
    MCAPI static class Vec3 const NEG_UNIT_X;

    // symbol: ?NEG_UNIT_Y@Vec3@@2V1@B
    MCAPI static class Vec3 const NEG_UNIT_Y;

    // symbol: ?NEG_UNIT_Z@Vec3@@2V1@B
    MCAPI static class Vec3 const NEG_UNIT_Z;

    // symbol: ?ONE@Vec3@@2V1@B
    MCAPI static class Vec3 const ONE;

    // symbol: ?TWO@Vec3@@2V1@B
    MCAPI static class Vec3 const TWO;

    // symbol: ?UNIT_X@Vec3@@2V1@B
    MCAPI static class Vec3 const UNIT_X;

    // symbol: ?UNIT_Y@Vec3@@2V1@B
    MCAPI static class Vec3 const UNIT_Y;

    // symbol: ?UNIT_Z@Vec3@@2V1@B
    MCAPI static class Vec3 const UNIT_Z;

    // symbol: ?ZERO@Vec3@@2V1@B
    MCAPI static class Vec3 const ZERO;

    // NOLINTEND
};
