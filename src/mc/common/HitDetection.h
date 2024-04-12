#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace HitDetection {
// NOLINTBEGIN
// symbol: ?searchActors@HitDetection@@YAXAEBVVec3@@M0AEBVAABB@@PEAVActor@@PEAVPlayer@@AEAMAEAPEAV4@AEAV2@_N@Z
MCAPI void searchActors(
    class Vec3 const& pickDirection,
    float             pickRange,
    class Vec3 const& cameraPos,
    class AABB const&,
    class Actor*  cameraEntity,
    class Player* player,
    float&,
    class Actor*&,
    class Vec3&,
    bool
);
// NOLINTEND

}; // namespace HitDetection
