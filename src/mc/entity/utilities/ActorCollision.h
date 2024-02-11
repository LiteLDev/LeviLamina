#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/components/DepenetrationComponent.h"

namespace ActorCollision {
// NOLINTBEGIN
// symbol: ?clearPushedBy@ActorCollision@@YAXAEAVEntityContext@@@Z
MCAPI void clearPushedBy(class EntityContext& provider);

// symbol: ?getCollidableMobNear@ActorCollision@@YA_NAEBVEntityContext@@@Z
MCAPI bool getCollidableMobNear(class EntityContext const& provider);

// symbol:
// ?getOnewayPhysicsBlocks@ActorCollision@@YAAEBV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVEntityContext@@@Z
MCAPI std::vector<class AABB> const& getOnewayPhysicsBlocks(class EntityContext const& provider);

// symbol: ?getPushedByID@ActorCollision@@YA?AUActorUniqueID@@AEBVEntityContext@@@Z
MCAPI struct ActorUniqueID getPushedByID(class EntityContext const& provider);

// symbol: ?getSubAABBs@ActorCollision@@YAAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEAVEntityContext@@@Z
MCAPI std::vector<class AABB>& getSubAABBs(class EntityContext& provider);

// symbol: ?hasCollision@ActorCollision@@YA_NAEBVEntityContext@@@Z
MCAPI bool hasCollision(class EntityContext const& provider);

// symbol: ?hasHorizontalCollision@ActorCollision@@YA_NAEBVEntityContext@@@Z
MCAPI bool hasHorizontalCollision(class EntityContext const& provider);

// symbol: ?hasVerticalCollision@ActorCollision@@YA_NAEBVEntityContext@@@Z
MCAPI bool hasVerticalCollision(class EntityContext const& provider);

// symbol: ?initializeActor@ActorCollision@@YAXAEAVEntityContext@@@Z
MCAPI void initializeActor(class EntityContext& provider);

// symbol: ?isKnockedBackOnDeath@ActorCollision@@YA_NAEBVEntityContext@@@Z
MCAPI bool isKnockedBackOnDeath(class EntityContext const& provider);

// symbol: ?isOnGround@ActorCollision@@YA_NAEBVEntityContext@@@Z
MCAPI bool isOnGround(class EntityContext const& provider);

// symbol: ?isStuckInCollider@ActorCollision@@YA_NAEBVEntityContext@@@Z
MCAPI bool isStuckInCollider(class EntityContext const& provider);

// symbol: ?isStuckItem@ActorCollision@@YA_NAEBVEntityContext@@@Z
MCAPI bool isStuckItem(class EntityContext const& provider);

// symbol: ?onOnewayCollision@ActorCollision@@YAXAEAVEntityContext@@AEBVAABB@@@Z
MCAPI void onOnewayCollision(class EntityContext& provider, class AABB const& oneWayVolume);

// symbol: ?setCollidableMob@ActorCollision@@YAXAEAVEntityContext@@_N@Z
MCAPI void setCollidableMob(class EntityContext& provider, bool value);

// symbol: ?setCollidableMobNear@ActorCollision@@YAXAEAVEntityContext@@_N@Z
MCAPI void setCollidableMobNear(class EntityContext& provider, bool value);

// symbol: ?setCollision@ActorCollision@@YAXAEAVEntityContext@@_N@Z
MCAPI void setCollision(class EntityContext& provider, bool value);

// symbol: ?setDepenetrationComponentBit@ActorCollision@@YAXAEAVEntityContext@@W4Bit@DepenetrationComponent@@_N@Z
MCAPI void setDepenetrationComponentBit(class EntityContext&, ::DepenetrationComponent::Bit, bool);

// symbol: ?setHorizontalCollision@ActorCollision@@YAXAEAVEntityContext@@_N@Z
MCAPI void setHorizontalCollision(class EntityContext& provider, bool value);

// symbol: ?setIsKnockedBackOnDeath@ActorCollision@@YAXAEAVEntityContext@@_N@Z
MCAPI void setIsKnockedBackOnDeath(class EntityContext& provider, bool value);

// symbol: ?setOnGround@ActorCollision@@YAXAEAVEntityContext@@_N@Z
MCAPI void setOnGround(class EntityContext& provider, bool value);

// symbol: ?setPushedBy@ActorCollision@@YAXAEAVEntityContext@@VStrictEntityContext@@AEBUActorUniqueID@@@Z
MCAPI void
setPushedBy(class EntityContext& provider, class StrictEntityContext context, struct ActorUniqueID const& id);

// symbol: ?setStuckItem@ActorCollision@@YAXAEAVEntityContext@@_N@Z
MCAPI void setStuckItem(class EntityContext& provider, bool value);

// symbol: ?setSubAABBs@ActorCollision@@YAXAEAVEntityContext@@AEBV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
MCAPI void setSubAABBs(class EntityContext& provider, std::vector<class AABB> const&);

// symbol: ?setUsesOneWayCollision@ActorCollision@@YAXAEAVEntityContext@@_N@Z
MCAPI void setUsesOneWayCollision(class EntityContext& provider, bool value);

// symbol: ?setVerticalCollision@ActorCollision@@YAXAEAVEntityContext@@_N@Z
MCAPI void setVerticalCollision(class EntityContext& provider, bool value);

// symbol: ?setWasOnGround@ActorCollision@@YAXAEAVEntityContext@@_N@Z
MCAPI void setWasOnGround(class EntityContext& provider, bool value);

// symbol: ?updateOnewayCollisions@ActorCollision@@YAXAEAVEntityContext@@@Z
MCAPI void updateOnewayCollisions(class EntityContext& provider);

// symbol: ?usesOneWayCollision@ActorCollision@@YA_NAEBVEntityContext@@@Z
MCAPI bool usesOneWayCollision(class EntityContext const& provider);

// symbol: ?wasOnGround@ActorCollision@@YA_NAEBVEntityContext@@@Z
MCAPI bool wasOnGround(class EntityContext const& provider);

// symbol: ?wasPenetratingLastFrame@ActorCollision@@YA_NAEBVEntityContext@@@Z
MCAPI bool wasPenetratingLastFrame(class EntityContext const& provider);
// NOLINTEND

}; // namespace ActorCollision
