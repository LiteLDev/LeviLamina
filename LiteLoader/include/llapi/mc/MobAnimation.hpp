/**
 * @file  MobAnimation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace MobAnimation {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?decrementHurtTime\@MobAnimation\@\@YAXV?$not_null\@PEAUMobHurtTimeComponent\@\@\@gsl\@\@\@Z
     */
    MCAPI void decrementHurtTime(class gsl::not_null<struct MobHurtTimeComponent *>);
    /**
     * @symbol ?getStandAnim\@MobAnimation\@\@YAMAEBVEntityContext\@\@\@Z
     */
    MCAPI float getStandAnim(class EntityContext const &);
    /**
     * @symbol ?getStandAnimNewOld\@MobAnimation\@\@YA?AUInterpolationPair\@\@AEBVEntityContext\@\@\@Z
     */
    MCAPI struct InterpolationPair getStandAnimNewOld(class EntityContext const &);
    /**
     * @symbol ?getWalkAnimSpeedNewOld\@MobAnimation\@\@YA?AUInterpolationPair\@\@V?$not_null\@PEBUActorWalkAnimationComponent\@\@\@gsl\@\@\@Z
     */
    MCAPI struct InterpolationPair getWalkAnimSpeedNewOld(class gsl::not_null<struct ActorWalkAnimationComponent const *>);
    /**
     * @symbol ?initializeHorse\@MobAnimation\@\@YAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initializeHorse(class EntityContext &);
    /**
     * @symbol ?setStandAnim\@MobAnimation\@\@YAXAEAVEntityContext\@\@M\@Z
     */
    MCAPI void setStandAnim(class EntityContext &, float);
    /**
     * @symbol ?setStandAnimO\@MobAnimation\@\@YAXAEAVEntityContext\@\@M\@Z
     */
    MCAPI void setStandAnimO(class EntityContext &, float);

};