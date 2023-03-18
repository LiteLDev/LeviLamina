/**
 * @file  ActorMovement.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace ActorMovement {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?getHasTeleported\@ActorMovement\@\@YA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI bool getHasTeleported(class EntityContext const &);
    /**
     * @symbol ?getWalkDist\@ActorMovement\@\@YAMAEBVEntityContext\@\@\@Z
     */
    MCAPI float getWalkDist(class EntityContext const &);
    /**
     * @symbol ?getWalkDistPrev\@ActorMovement\@\@YAMAEBVEntityContext\@\@\@Z
     */
    MCAPI float getWalkDistPrev(class EntityContext const &);
    /**
     * @symbol ?initializeActor\@ActorMovement\@\@YAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initializeActor(class EntityContext &);
    /**
     * @symbol ?setHasTeleported\@ActorMovement\@\@YAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI void setHasTeleported(class EntityContext &, bool);
    /**
     * @symbol ?setWalkDist\@ActorMovement\@\@YAXAEAVEntityContext\@\@M\@Z
     */
    MCAPI void setWalkDist(class EntityContext &, float);

};