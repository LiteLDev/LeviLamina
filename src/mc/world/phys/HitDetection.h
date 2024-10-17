#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Vec3;
class AABB;
class Actor;
class Player;

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
    bool              isARVRClient = false
);
// NOLINTEND

}; // namespace HitDetection
