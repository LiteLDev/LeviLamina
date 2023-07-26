#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorCollision {
/**
 * @symbol ?clearPushedBy\@ActorCollision\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void clearPushedBy(class EntityContext&); // NOLINT
/**
 * @symbol ?getCollidableMobNear\@ActorCollision\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool getCollidableMobNear(class EntityContext const&); // NOLINT
/**
 * @symbol
 * ?getOnewayPhysicsBlocks\@ActorCollision\@\@YAAEBV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI std::vector<class AABB> const& getOnewayPhysicsBlocks(class EntityContext const&); // NOLINT
/**
 * @symbol ?getPushedByID\@ActorCollision\@\@YA?AUActorUniqueID\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI struct ActorUniqueID getPushedByID(class EntityContext const&); // NOLINT
/**
 * @symbol
 * ?getSubAABBs\@ActorCollision\@\@YAAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEAVEntityContext\@\@\@Z
 */
MCAPI std::vector<class AABB>& getSubAABBs(class EntityContext&); // NOLINT
/**
 * @symbol ?hasCollision\@ActorCollision\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool hasCollision(class EntityContext const&); // NOLINT
/**
 * @symbol ?hasHorizontalCollision\@ActorCollision\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool hasHorizontalCollision(class EntityContext const&); // NOLINT
/**
 * @symbol ?hasVerticalCollision\@ActorCollision\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool hasVerticalCollision(class EntityContext const&); // NOLINT
/**
 * @symbol ?initializeActor\@ActorCollision\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void initializeActor(class EntityContext&); // NOLINT
/**
 * @symbol ?isKnockedBackOnDeath\@ActorCollision\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool isKnockedBackOnDeath(class EntityContext const&); // NOLINT
/**
 * @symbol ?isOnGround\@ActorCollision\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool isOnGround(class EntityContext const&); // NOLINT
/**
 * @symbol ?isStuckInCollider\@ActorCollision\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool isStuckInCollider(class EntityContext const&); // NOLINT
/**
 * @symbol ?isStuckItem\@ActorCollision\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool isStuckItem(class EntityContext const&); // NOLINT
/**
 * @symbol ?onOnewayCollision\@ActorCollision\@\@YAXAEAVEntityContext\@\@AEBVAABB\@\@\@Z
 */
MCAPI void onOnewayCollision(class EntityContext&, class AABB const&); // NOLINT
/**
 * @symbol ?setCollidableMob\@ActorCollision\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setCollidableMob(class EntityContext&, bool); // NOLINT
/**
 * @symbol ?setCollidableMobNear\@ActorCollision\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setCollidableMobNear(class EntityContext&, bool); // NOLINT
/**
 * @symbol ?setCollision\@ActorCollision\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setCollision(class EntityContext&, bool); // NOLINT
/**
 * @symbol ?setHorizontalCollision\@ActorCollision\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setHorizontalCollision(class EntityContext&, bool); // NOLINT
/**
 * @symbol ?setIsKnockedBackOnDeath\@ActorCollision\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setIsKnockedBackOnDeath(class EntityContext&, bool); // NOLINT
/**
 * @symbol ?setOnGround\@ActorCollision\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setOnGround(class EntityContext&, bool); // NOLINT
/**
 * @symbol ?setPushedBy\@ActorCollision\@\@YAXAEAVEntityContext\@\@VStrictEntityContext\@\@AEBUActorUniqueID\@\@\@Z
 */
MCAPI void setPushedBy(class EntityContext&, class StrictEntityContext, struct ActorUniqueID const&); // NOLINT
/**
 * @symbol ?setStuckInCollider\@ActorCollision\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setStuckInCollider(class EntityContext&, bool); // NOLINT
/**
 * @symbol ?setStuckItem\@ActorCollision\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setStuckItem(class EntityContext&, bool); // NOLINT
/**
 * @symbol
 * ?setSubAABBs\@ActorCollision\@\@YAXAEAVEntityContext\@\@AEBV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@\@Z
 */
MCAPI void setSubAABBs(class EntityContext&, std::vector<class AABB> const&); // NOLINT
/**
 * @symbol ?setUsesOneWayCollision\@ActorCollision\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setUsesOneWayCollision(class EntityContext&, bool); // NOLINT
/**
 * @symbol ?setVerticalCollision\@ActorCollision\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setVerticalCollision(class EntityContext&, bool); // NOLINT
/**
 * @symbol ?setWasOnGround\@ActorCollision\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setWasOnGround(class EntityContext&, bool); // NOLINT
/**
 * @symbol ?setWasPenetratingLastFrame\@ActorCollision\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setWasPenetratingLastFrame(class EntityContext&, bool); // NOLINT
/**
 * @symbol ?updateOnewayCollisions\@ActorCollision\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void updateOnewayCollisions(class EntityContext&); // NOLINT
/**
 * @symbol ?usesOneWayCollision\@ActorCollision\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool usesOneWayCollision(class EntityContext const&); // NOLINT
/**
 * @symbol ?wasOnGround\@ActorCollision\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool wasOnGround(class EntityContext const&); // NOLINT
/**
 * @symbol ?wasPenetratingLastFrame\@ActorCollision\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool wasPenetratingLastFrame(class EntityContext const&); // NOLINT

}; // namespace ActorCollision
