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
     * @symbol ?getWalkAnimSpeedNewOld\@MobAnimation\@\@YA?AUInterpolationPair\@\@V?$not_null\@PEBUActorWalkAnimationComponent\@\@\@gsl\@\@\@Z
     */
    MCAPI struct InterpolationPair getWalkAnimSpeedNewOld(class gsl::not_null<struct ActorWalkAnimationComponent const *>);

};