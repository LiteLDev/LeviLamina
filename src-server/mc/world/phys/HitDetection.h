#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/phys/HitResult.h"

// Forward declarations
class Actor;
class BlockSource;
class Vec3;
class AABB;
class HitboxComponent;
class SubBBsComponent;

namespace HitDetection {

LLNDAPI bool isValidHitDefault(Actor& actor, Actor* source, Actor* owner);

LLNDAPI float getCollisionMarginDefault(Actor const& actor);

LLNDAPI std::vector<HitResult> getHitResults(
    BlockSource&                                      region,
    Actor*                                            source,
    Actor*                                            owner,
    Vec3 const&                                       from,
    Vec3 const&                                       to,
    brstd::function_ref<bool(Actor&, Actor*, Actor*)> isValidHit         = isValidHitDefault,
    brstd::function_ref<float(Actor const&)>          getCollisionMargin = getCollisionMarginDefault
);

LLNDAPI HitResult getClosestHitResult(
    BlockSource&                                      region,
    Actor*                                            source,
    Actor*                                            owner,
    Vec3 const&                                       from,
    Vec3 const&                                       to,
    brstd::function_ref<bool(Actor&, Actor*, Actor*)> isValidHit         = isValidHitDefault,
    brstd::function_ref<float(Actor const&)>          getCollisionMargin = getCollisionMarginDefault
);

} // namespace HitDetection
