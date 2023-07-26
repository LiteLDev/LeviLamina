#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobAnimation {
/**
 * @symbol ?decrementHurtTime\@MobAnimation\@\@YAXV?$not_null\@PEAUMobHurtTimeComponent\@\@\@gsl\@\@\@Z
 */
MCAPI void decrementHurtTime(class gsl::not_null<struct MobHurtTimeComponent*>); // NOLINT
/**
 * @symbol ?getStandAnim\@MobAnimation\@\@YAMAEBVEntityContext\@\@\@Z
 */
MCAPI float getStandAnim(class EntityContext const&); // NOLINT
/**
 * @symbol ?getStandAnimNewOld\@MobAnimation\@\@YA?AUInterpolationPair\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI struct InterpolationPair getStandAnimNewOld(class EntityContext const&); // NOLINT
/**
 * @symbol
 * ?getWalkAnimSpeedNewOld\@MobAnimation\@\@YA?AUInterpolationPair\@\@V?$not_null\@PEBUActorWalkAnimationComponent\@\@\@gsl\@\@\@Z
 */
MCAPI struct InterpolationPair
    getWalkAnimSpeedNewOld(class gsl::not_null<struct ActorWalkAnimationComponent const*>); // NOLINT
/**
 * @symbol ?initializeHorse\@MobAnimation\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void initializeHorse(class EntityContext&); // NOLINT
/**
 * @symbol ?setStandAnim\@MobAnimation\@\@YAXAEAVEntityContext\@\@M\@Z
 */
MCAPI void setStandAnim(class EntityContext&, float); // NOLINT
/**
 * @symbol ?setStandAnimO\@MobAnimation\@\@YAXAEAVEntityContext\@\@M\@Z
 */
MCAPI void setStandAnimO(class EntityContext&, float); // NOLINT

}; // namespace MobAnimation
