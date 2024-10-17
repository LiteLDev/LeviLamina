#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobAnimation {
// NOLINTBEGIN
MCAPI void decrementHurtTime(gsl::not_null<struct MobHurtTimeComponent*> hurtTimeComp);

MCAPI float getStandAnim(class EntityContext const& provider);

MCAPI struct InterpolationPair getStandAnimNewOld(class EntityContext const& provider);

MCAPI struct InterpolationPair
getWalkAnimSpeedNewOld(gsl::not_null<struct ActorWalkAnimationComponent const*> builtInActorComp);

MCAPI void initializeHorse(class EntityContext& provider);

MCAPI void setStandAnim(class EntityContext& provider, float standAnim);

MCAPI void setStandAnimO(class EntityContext& provider, float standAnimO);
// NOLINTEND

}; // namespace MobAnimation
