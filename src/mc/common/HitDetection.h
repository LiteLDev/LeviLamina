#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace HitDetection {
// NOLINTBEGIN
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
