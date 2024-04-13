#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Vec3;
class AABB;
class Actor;
class Player;

namespace HitDetection {
// NOLINTBEGIN
// symbol: ?searchActors@HitDetection@@YAXAEBVVec3@@M0AEBVAABB@@PEAVActor@@PEAVPlayer@@AEAMAEAPEAV4@AEAV2@_N@Z
MCAPI void searchActors(
    Vec3 const& rayDir,
    float       tMax,
    Vec3 const& origin,
    AABB const& srcAabb,
    Actor*      cameraEntity,
    Player*     player,
    float&      resultDist,
    Actor*&     resultActor,
    Vec3&       hitPoint,
    bool        isVR = false
);
// NOLINTEND

}; // namespace HitDetection
