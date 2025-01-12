#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/DepenetrationComponent.h"

// auto generated forward declare list
// clang-format off
class AABB;
class EntityContext;
class StrictEntityContext;
struct ActorUniqueID;
// clang-format on

namespace ActorCollision {
// functions
// NOLINTBEGIN
MCAPI void clearPushedBy(::EntityContext& provider);

MCAPI bool getCollidableMobNear(::EntityContext const& provider);

MCAPI bool getDepenetrationComponentBit(::EntityContext const& provider, ::DepenetrationComponent::Bit bit);

MCAPI ::std::vector<::AABB> const& getOnewayPhysicsBlocks(::EntityContext const& provider);

MCAPI float getPickRadius(::EntityContext const& provider);

MCAPI ::ActorUniqueID getPushedByID(::EntityContext const& provider);

MCAPI ::std::vector<::AABB>& getSubAABBs(::EntityContext& provider);

MCFOLD bool hasCollision(::EntityContext const& provider);

MCFOLD bool hasHorizontalCollision(::EntityContext const& provider);

MCFOLD bool hasVerticalCollision(::EntityContext const& provider);

MCAPI void initializeActor(::EntityContext& provider);

MCAPI void initializePickable(::EntityContext& provider, float pickRadius);

MCAPI void initializePlayer(::EntityContext& provider);

MCAPI bool isKnockedBackOnDeath(::EntityContext const& provider);

MCFOLD bool isOnGround(::EntityContext const& provider);

MCAPI bool isPickable(::EntityContext const& provider);

MCAPI bool isStuckInCollider(::EntityContext const& provider);

MCAPI bool isStuckItem(::EntityContext const& provider);

MCAPI void setCollidableMob(::EntityContext& provider, bool value);

MCAPI void setCollidableMobNear(::EntityContext& provider, bool value);

MCAPI void setCollision(::EntityContext& provider, bool value);

MCAPI void setDepenetrationComponentBit(::EntityContext& provider, ::DepenetrationComponent::Bit bit, bool value);

MCAPI void setHorizontalCollision(::EntityContext& provider, bool value);

MCAPI void setIsKnockedBackOnDeath(::EntityContext& provider, bool value);

MCAPI void setIsPickable(::EntityContext& provider, bool isPickable);

MCAPI void setOnGround(::EntityContext& provider, bool value);

MCAPI void setPickRadius(::EntityContext& provider, float pickRadius);

MCAPI void setPushedBy(::EntityContext& provider, ::StrictEntityContext context, ::ActorUniqueID const& id);

MCAPI void setStuckItem(::EntityContext& provider, bool value);

MCAPI void setSubAABBs(::EntityContext& provider, ::std::vector<::AABB> const& bbs);

MCAPI void setUsesOneWayCollision(::EntityContext& provider, bool value);

MCAPI void setVerticalCollision(::EntityContext& provider, bool value);

MCAPI void setWasOnGround(::EntityContext& provider, bool value);

MCAPI bool usesOneWayCollision(::EntityContext const& provider);

MCFOLD bool wasOnGround(::EntityContext const& provider);

MCAPI bool wasPenetratingLastFrame(::EntityContext const& provider);
// NOLINTEND

} // namespace ActorCollision
