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
     * @symbol ?getPredictedWalkDist\@ActorMovement\@\@YAMAEBVEntityContext\@\@M\@Z
     */
    MCAPI float getPredictedWalkDist(class EntityContext const &, float);
    /**
     * @symbol ?initializeActor\@ActorMovement\@\@YAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initializeActor(class EntityContext &);
    /**
     * @symbol ?isImmobile\@ActorMovement\@\@YA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI bool isImmobile(class EntityContext const &);
    /**
     * @symbol ?setHasTeleported\@ActorMovement\@\@YAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI void setHasTeleported(class EntityContext &, bool);
    /**
     * @symbol ?setIsImmobile\@ActorMovement\@\@YAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI void setIsImmobile(class EntityContext &, bool);

};