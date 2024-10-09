#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/DepenetrationComponent.h"

namespace ActorCollision {
// NOLINTBEGIN
MCAPI void clearPushedBy(class EntityContext& provider);

MCAPI bool getCollidableMobNear(class EntityContext const& provider);

MCAPI std::vector<class AABB> const& getOnewayPhysicsBlocks(class EntityContext const& provider);

MCAPI float getPickRadius(class EntityContext const& provider);

MCAPI struct ActorUniqueID getPushedByID(class EntityContext const& provider);

MCAPI std::vector<class AABB>& getSubAABBs(class EntityContext& provider);

MCAPI bool hasCollision(class EntityContext const& provider);

MCAPI bool hasHorizontalCollision(class EntityContext const& provider);

MCAPI bool hasVerticalCollision(class EntityContext const& provider);

MCAPI void initializeActor(class EntityContext& provider);

MCAPI void initializePickable(class EntityContext& provider, float pickRadius);

MCAPI bool isKnockedBackOnDeath(class EntityContext const& provider);

MCAPI bool isOnGround(class EntityContext const& provider);

MCAPI bool isPickable(class EntityContext const& provider);

MCAPI bool isStuckInCollider(class EntityContext const& provider);

MCAPI bool isStuckItem(class EntityContext const& provider);

MCAPI void onOnewayCollision(class EntityContext& provider, class AABB const& oneWayVolume);

MCAPI void setCollidableMob(class EntityContext& provider, bool value);

MCAPI void setCollidableMobNear(class EntityContext& provider, bool value);

MCAPI void setCollision(class EntityContext& provider, bool value);

MCAPI void setDepenetrationComponentBit(class EntityContext& provider, ::DepenetrationComponent::Bit bit, bool value);

MCAPI void setHorizontalCollision(class EntityContext& provider, bool value);

MCAPI void setIsKnockedBackOnDeath(class EntityContext& provider, bool value);

MCAPI void setIsPickable(class EntityContext& provider, bool isPickable);

MCAPI void setOnGround(class EntityContext& provider, bool value);

MCAPI void setPickRadius(class EntityContext& provider, float pickRadius);

MCAPI void
setPushedBy(class EntityContext& provider, class StrictEntityContext context, struct ActorUniqueID const& id);

MCAPI void setStuckItem(class EntityContext& provider, bool value);

MCAPI void setSubAABBs(class EntityContext& provider, std::vector<class AABB> const& bbs);

MCAPI void setUsesOneWayCollision(class EntityContext& provider, bool value);

MCAPI void setVerticalCollision(class EntityContext& provider, bool value);

MCAPI void setWasOnGround(class EntityContext& provider, bool value);

MCAPI void updateOnewayCollisions(class EntityContext& provider);

MCAPI bool usesOneWayCollision(class EntityContext const& provider);

MCAPI bool wasOnGround(class EntityContext const& provider);

MCAPI bool wasPenetratingLastFrame(class EntityContext const& provider);
// NOLINTEND

}; // namespace ActorCollision
