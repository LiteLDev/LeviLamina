#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace HitDetection {
// NOLINTBEGIN
MCAPI void searchActors(
    class Vec3 const& pickDirection,
    float             pickRange,
    class Vec3 const& cameraPos,
    class AABB const& srcAabb,
    class Actor*      cameraEntity,
    class Player*     player,
    float&            nearest,
    class Actor*&     hovered,
    class Vec3&       entityHitPoint,
    bool              isARVRClient
);
// NOLINTEND

}; // namespace HitDetection
