#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Player;
class Vec3;
// clang-format on

namespace HitDetection {
// functions
// NOLINTBEGIN
MCAPI void searchActors(
    ::Vec3 const& pickDirection,
    float         pickRange,
    ::Vec3 const& cameraPos,
    ::AABB const& srcAabb,
    ::Actor*      cameraEntity,
    ::Player*     player,
    float&        nearest,
    ::Actor*&     hovered,
    ::Vec3&       entityHitPoint,
    bool          isARVRClient
);
// NOLINTEND

} // namespace HitDetection
