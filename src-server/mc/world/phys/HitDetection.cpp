#include "mc/world/phys/HitDetection.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/vanilla_components/ActorDataFlagComponent.h"
#include "mc/deps/vanilla_components/Hitbox.h"
#include "mc/deps/vanilla_components/HitboxComponent.h"
#include "mc/deps/vanilla_components/PlayerComponent.h"
#include "mc/deps/vanilla_components/SubBBsComponent.h"
#include "mc/entity/components/PassengerComponent.h"
#include "mc/entity/components/PickComponent.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/VehicleUtils.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/Level.h"
#include "mc/world/phys/AABB.h"
#include "mc/world/phys/HitResult.h"
#include "mc/world/phys/HitResultType.h"
#include <limits>
#include <vector>

namespace HitDetection {

bool isValidHitDefault(Actor& actor, Actor* /*source*/, Actor* owner) {
    if (!actor.canInteractWithOtherEntitiesInGame()) {
        return false;
    }
    // auto& level = actor.getLevel();
    // if (level.getDisablePlayerInteractions() && actor.getEntityContext().hasComponent<PlayerComponent>()) {
    //     return false;
    // }
    // if (level.isClientSide()
    //     && actor.mTerrainInterlockData->mUnk778fb2.as<ActorTerrainInterlockData::VisibilityState>()
    //            != ActorTerrainInterlockData::VisibilityState::Visible) {
    //     return false;
    // }
    if (owner)
        if (auto actorDataFlag = actor.getEntityContext().tryGetComponent<ActorDataFlagComponent>();
            !actorDataFlag || !actorDataFlag->getStatusFlag(ActorFlags::PassengerCanPick)) {
            if (VehicleUtils::isPassengerOfActor(*owner, actor.getOrCreateUniqueID())) {
                return false;
            }
            if (VehicleUtils::isPassengerOfActor(actor, owner->getOrCreateUniqueID())) {
                return false;
            }
            if (auto actorVehicle = actor.getVehicle(); actorVehicle && actorVehicle == owner->getVehicle()) {
                return false;
            }
        }
    return true;
}
float getCollisionMarginDefault(Actor const& actor) {
    if (auto pickComponent = actor.getEntityContext().tryGetComponent<PickComponent>(); pickComponent) {
        return pickComponent->mRayPickRadius;
    }
    return 0.1f;
}

static HitResult getAABBHitResult(
    Vec3 const& from,
    Vec3 const& to,
    Vec3 const& direction,
    float       margin,
    Actor&      actor,
    AABB const& aabb
) {
    AABB extendedAABB{aabb.min - margin, aabb.max + margin};

    if (extendedAABB.contains(from)) {
        return HitResult{from, direction, actor, from, extendedAABB};
    }
    auto clipResult = extendedAABB.clip(from, to);
    if (clipResult.mIsHit) {
        return HitResult{from, direction, actor, clipResult.mPos, extendedAABB};
    }
    return HitResult{};
}

static HitResult getHitboxComponentHitResult(
    Vec3 const&            from,
    Vec3 const&            to,
    Vec3 const&            direction,
    float                  margin,
    Actor&                 actor,
    HitboxComponent const& hitboxComponent
) {
    if (hitboxComponent.mHitboxes->empty()) {
        return HitResult{};
    }
    for (auto const& hitbox : *hitboxComponent.mHitboxes) {
        auto hitResult = getAABBHitResult(from, to, direction, margin, actor, hitbox.mAabb);
        if (hitResult.mType != HitResultType::NoHit && hitResult.mType != HitResultType::EntityOutOfRange) {
            return hitResult;
        }
    }
    return HitResult{};
}

static HitResult getSubAABBHitResult(
    Vec3 const&        from,
    Vec3 const&        to,
    Vec3 const&        direction,
    float              margin,
    Actor&             actor,
    std::vector<AABB>& subAABBs
) {
    if (subAABBs.empty()) {
        return HitResult{};
    }
    HitResult bestHitResult{};
    float     bestDistance = std::numeric_limits<float>::max();
    for (auto& aabb : subAABBs) {
        AABB extendedAABB{aabb.min - margin, aabb.max + margin};

        if (extendedAABB.contains(from)) {
            return HitResult{from, direction, actor, from, extendedAABB};
        }
        auto clipResult = extendedAABB.clip(from, to);
        if (clipResult.mIsHit) {
            float distance = (float)from.distanceToSqr(clipResult.mPos);
            if (distance < bestDistance) {
                bestDistance     = distance;
                bestHitResult    = HitResult{from, direction, actor, clipResult.mPos, extendedAABB};
                actor.mLastHitBB = &aabb;
            }
        }
    }
    return bestHitResult;
}

std::vector<HitResult> getHitResults(
    BlockSource&                                      region,
    Actor*                                            source,
    Actor*                                            owner,
    Vec3 const&                                       from,
    Vec3 const&                                       to,
    brstd::function_ref<bool(Actor&, Actor*, Actor*)> isValidHit,
    brstd::function_ref<float(Actor const&)>          getCollisionMargin
) {
    std::vector<HitResult> results;
    Vec3                   direction = to - from;
    AABB                   fetchArea;
    if (source) {
        fetchArea = source->getAABB();
        if (direction.x < 0.0f) {
            fetchArea.min.x += direction.x;
        } else if (direction.x > 0.0f) {
            fetchArea.max.x += direction.x;
        }

        if (direction.y < 0.0f) {
            fetchArea.min.y += direction.y;
        } else if (direction.y > 0.0f) {
            fetchArea.max.y += direction.y;
        }

        if (direction.z < 0.0f) {
            fetchArea.min.z += direction.z;
        } else if (direction.z > 0.0f) {
            fetchArea.max.z += direction.z;
        }

        fetchArea = fetchArea.cloneAndGrow(1.0f);

    } else {
        fetchArea.min = min(from, to);
        fetchArea.max = max(from, to);
    }

    auto entities = region.fetchEntities(source, fetchArea, true, false);

    for (Actor* actor : entities) {
        if (!isValidHit(*actor, source, owner)) {
            continue;
        }
        float margin = getCollisionMargin(*actor);

        if (auto subBBsComp = actor->getEntityContext().tryGetComponent<SubBBsComponent>()) {
            if (!subBBsComp->mSubBBs->empty()) {
                auto hitResult = getSubAABBHitResult(from, to, direction, margin, *actor, subBBsComp->mSubBBs);
                if (hitResult.mType != HitResultType::NoHit && hitResult.mType != HitResultType::EntityOutOfRange) {
                    results.push_back(std::move(hitResult));
                }
                continue;
            }
        }
        if (auto hitboxComp = actor->getEntityContext().tryGetComponent<HitboxComponent>()) {
            if (!hitboxComp->mHitboxes->empty()) {
                auto hitResult = getHitboxComponentHitResult(from, to, direction, margin, *actor, *hitboxComp);
                if (hitResult.mType != HitResultType::NoHit && hitResult.mType != HitResultType::EntityOutOfRange) {
                    results.push_back(std::move(hitResult));
                }
                continue;
            }
        }
        auto& aabb      = actor->getAABB();
        auto  hitResult = getAABBHitResult(from, to, direction, margin, *actor, aabb);
        if (hitResult.mType != HitResultType::NoHit && hitResult.mType != HitResultType::EntityOutOfRange) {
            results.push_back(std::move(hitResult));
        }
    }

    return results;
}

HitResult getClosestHitResult(
    BlockSource&                                      region,
    Actor*                                            source,
    Actor*                                            owner,
    Vec3 const&                                       from,
    Vec3 const&                                       to,
    brstd::function_ref<bool(Actor&, Actor*, Actor*)> isValidHit,
    brstd::function_ref<float(Actor const&)>          getCollisionMargin
) {
    HitResult result;
    auto      hitResults = getHitResults(region, source, owner, from, to, isValidHit, getCollisionMargin);

    if (hitResults.empty()) {
        return result;
    }
    float  closestDistanceSq = std::numeric_limits<float>::max();
    size_t closestIndex      = 0;

    for (size_t i = 0; i < hitResults.size(); ++i) {
        const auto& hit = hitResults[i];

        float distanceSq = (float)from.distanceToSqr(hit.mPos);

        if (distanceSq < closestDistanceSq) {
            closestDistanceSq = distanceSq;
            closestIndex      = i;
        }
    }
    result = std::move(hitResults[closestIndex]);
    return result;
}

} // namespace HitDetection