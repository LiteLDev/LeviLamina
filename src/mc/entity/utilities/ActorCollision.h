#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorCollision {
// NOLINTBEGIN
// symbol: ?clearPushedBy@ActorCollision@@YAXAEAVEntityContext@@@Z
MCAPI void clearPushedBy(class EntityContext&);

// symbol: ?getCollidableMobNear@ActorCollision@@YA_NAEBVEntityContext@@@Z
MCAPI bool getCollidableMobNear(class EntityContext const&);

// symbol:
// ?getOnewayPhysicsBlocks@ActorCollision@@YAAEBV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVEntityContext@@@Z
MCAPI std::vector<class AABB> const& getOnewayPhysicsBlocks(class EntityContext const&);

// symbol: ?getPushedByID@ActorCollision@@YA?AUActorUniqueID@@AEBVEntityContext@@@Z
MCAPI struct ActorUniqueID getPushedByID(class EntityContext const&);

// symbol: ?getSubAABBs@ActorCollision@@YAAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEAVEntityContext@@@Z
MCAPI std::vector<class AABB>& getSubAABBs(class EntityContext&);

// symbol: ?hasCollision@ActorCollision@@YA_NAEBVEntityContext@@@Z
MCAPI bool hasCollision(class EntityContext const&);

// symbol: ?hasHorizontalCollision@ActorCollision@@YA_NAEBVEntityContext@@@Z
MCAPI bool hasHorizontalCollision(class EntityContext const&);

// symbol: ?hasVerticalCollision@ActorCollision@@YA_NAEBVEntityContext@@@Z
MCAPI bool hasVerticalCollision(class EntityContext const&);

// symbol: ?initializeActor@ActorCollision@@YAXAEAVEntityContext@@@Z
MCAPI void initializeActor(class EntityContext&);

// symbol: ?isKnockedBackOnDeath@ActorCollision@@YA_NAEBVEntityContext@@@Z
MCAPI bool isKnockedBackOnDeath(class EntityContext const&);

// symbol: ?isOnGround@ActorCollision@@YA_NAEBVEntityContext@@@Z
MCAPI bool isOnGround(class EntityContext const&);

// symbol: ?isStuckInCollider@ActorCollision@@YA_NAEBVEntityContext@@@Z
MCAPI bool isStuckInCollider(class EntityContext const&);

// symbol: ?isStuckItem@ActorCollision@@YA_NAEBVEntityContext@@@Z
MCAPI bool isStuckItem(class EntityContext const&);

// symbol: ?onOnewayCollision@ActorCollision@@YAXAEAVEntityContext@@AEBVAABB@@@Z
MCAPI void onOnewayCollision(class EntityContext&, class AABB const& oneWayVolume);

// symbol: ?setCollidableMob@ActorCollision@@YAXAEAVEntityContext@@_N@Z
MCAPI void setCollidableMob(class EntityContext&, bool value);

// symbol: ?setCollidableMobNear@ActorCollision@@YAXAEAVEntityContext@@_N@Z
MCAPI void setCollidableMobNear(class EntityContext&, bool value);

// symbol: ?setCollision@ActorCollision@@YAXAEAVEntityContext@@_N@Z
MCAPI void setCollision(class EntityContext&, bool value);

// symbol: ?setHorizontalCollision@ActorCollision@@YAXAEAVEntityContext@@_N@Z
MCAPI void setHorizontalCollision(class EntityContext&, bool value);

// symbol: ?setIsKnockedBackOnDeath@ActorCollision@@YAXAEAVEntityContext@@_N@Z
MCAPI void setIsKnockedBackOnDeath(class EntityContext&, bool value);

// symbol: ?setOnGround@ActorCollision@@YAXAEAVEntityContext@@_N@Z
MCAPI void setOnGround(class EntityContext&, bool value);

// symbol: ?setPushedBy@ActorCollision@@YAXAEAVEntityContext@@VStrictEntityContext@@AEBUActorUniqueID@@@Z
MCAPI void setPushedBy(class EntityContext&, class StrictEntityContext context, struct ActorUniqueID const&);

// symbol: ?setStuckInCollider@ActorCollision@@YAXAEAVEntityContext@@_N@Z
MCAPI void setStuckInCollider(class EntityContext&, bool value);

// symbol: ?setStuckItem@ActorCollision@@YAXAEAVEntityContext@@_N@Z
MCAPI void setStuckItem(class EntityContext&, bool value);

// symbol: ?setSubAABBs@ActorCollision@@YAXAEAVEntityContext@@AEBV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
MCAPI void setSubAABBs(class EntityContext&, std::vector<class AABB> const&);

// symbol: ?setUsesOneWayCollision@ActorCollision@@YAXAEAVEntityContext@@_N@Z
MCAPI void setUsesOneWayCollision(class EntityContext&, bool value);

// symbol: ?setVerticalCollision@ActorCollision@@YAXAEAVEntityContext@@_N@Z
MCAPI void setVerticalCollision(class EntityContext&, bool value);

// symbol: ?setWasOnGround@ActorCollision@@YAXAEAVEntityContext@@_N@Z
MCAPI void setWasOnGround(class EntityContext&, bool value);

// symbol: ?setWasPenetratingLastFrame@ActorCollision@@YAXAEAVEntityContext@@_N@Z
MCAPI void setWasPenetratingLastFrame(class EntityContext&, bool value);

// symbol: ?updateOnewayCollisions@ActorCollision@@YAXAEAVEntityContext@@@Z
MCAPI void updateOnewayCollisions(class EntityContext&);

// symbol: ?usesOneWayCollision@ActorCollision@@YA_NAEBVEntityContext@@@Z
MCAPI bool usesOneWayCollision(class EntityContext const&);

// symbol: ?wasOnGround@ActorCollision@@YA_NAEBVEntityContext@@@Z
MCAPI bool wasOnGround(class EntityContext const&);

// symbol: ?wasPenetratingLastFrame@ActorCollision@@YA_NAEBVEntityContext@@@Z
MCAPI bool wasPenetratingLastFrame(class EntityContext const&);
// NOLINTEND

}; // namespace ActorCollision
