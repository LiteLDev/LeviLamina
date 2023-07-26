/**
 * @file  ActorCollision.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace ActorCollision {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?clearPushedBy\@ActorCollision\@\@YAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void clearPushedBy(class EntityContext &);
    /**
     * @symbol  ?getCollidableMobNear\@ActorCollision\@\@YA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI bool getCollidableMobNear(class EntityContext const &);
    /**
     * @symbol  ?getPushedByID\@ActorCollision\@\@YA?AUActorUniqueID\@\@AEBVEntityContext\@\@\@Z
     */
    MCAPI struct ActorUniqueID getPushedByID(class EntityContext const &);
    /**
     * @symbol  ?getSubAABBs\@ActorCollision\@\@YAAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI std::vector<class AABB> & getSubAABBs(class EntityContext &);
    /**
     * @symbol  ?hasCollision\@ActorCollision\@\@YA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI bool hasCollision(class EntityContext const &);
    /**
     * @symbol  ?hasHorizontalCollision\@ActorCollision\@\@YA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI bool hasHorizontalCollision(class EntityContext const &);
    /**
     * @symbol  ?hasVerticalCollision\@ActorCollision\@\@YA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI bool hasVerticalCollision(class EntityContext const &);
    /**
     * @symbol  ?initializeActor\@ActorCollision\@\@YAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initializeActor(class EntityContext &);
    /**
     * @symbol  ?isOnGround\@ActorCollision\@\@YA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI bool isOnGround(class EntityContext const &);
    /**
     * @symbol  ?isStuckInCollider\@ActorCollision\@\@YA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI bool isStuckInCollider(class EntityContext const &);
    /**
     * @symbol  ?isStuckItem\@ActorCollision\@\@YA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI bool isStuckItem(class EntityContext const &);
    /**
     * @symbol  ?setCollidableMob\@ActorCollision\@\@YAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI void setCollidableMob(class EntityContext &, bool);
    /**
     * @symbol  ?setCollidableMobNear\@ActorCollision\@\@YAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI void setCollidableMobNear(class EntityContext &, bool);
    /**
     * @symbol  ?setCollision\@ActorCollision\@\@YAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI void setCollision(class EntityContext &, bool);
    /**
     * @symbol  ?setHorizontalCollision\@ActorCollision\@\@YAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI void setHorizontalCollision(class EntityContext &, bool);
    /**
     * @symbol  ?setOnGround\@ActorCollision\@\@YAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI void setOnGround(class EntityContext &, bool);
    /**
     * @symbol  ?setPushedBy\@ActorCollision\@\@YAXAEAVEntityContext\@\@VStrictEntityContext\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI void setPushedBy(class EntityContext &, class StrictEntityContext, struct ActorUniqueID const &);
    /**
     * @symbol  ?setStuckInCollider\@ActorCollision\@\@YAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI void setStuckInCollider(class EntityContext &, bool);
    /**
     * @symbol  ?setStuckItem\@ActorCollision\@\@YAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI void setStuckItem(class EntityContext &, bool);
    /**
     * @symbol  ?setSubAABBs\@ActorCollision\@\@YAXAEAVEntityContext\@\@AEBV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setSubAABBs(class EntityContext &, std::vector<class AABB> const &);
    /**
     * @symbol  ?setUsesOneWayCollision\@ActorCollision\@\@YAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI void setUsesOneWayCollision(class EntityContext &, bool);
    /**
     * @symbol  ?setVerticalCollision\@ActorCollision\@\@YAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI void setVerticalCollision(class EntityContext &, bool);
    /**
     * @symbol  ?setWasOnGround\@ActorCollision\@\@YAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI void setWasOnGround(class EntityContext &, bool);
    /**
     * @symbol  ?setWasPenetratingLastFrame\@ActorCollision\@\@YAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI void setWasPenetratingLastFrame(class EntityContext &, bool);
    /**
     * @symbol  ?usesOneWayCollision\@ActorCollision\@\@YA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI bool usesOneWayCollision(class EntityContext const &);
    /**
     * @symbol  ?wasOnGround\@ActorCollision\@\@YA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI bool wasOnGround(class EntityContext const &);
    /**
     * @symbol  ?wasPenetratingLastFrame\@ActorCollision\@\@YA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI bool wasPenetratingLastFrame(class EntityContext const &);

};