#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobAnimation {
// NOLINTBEGIN
MCAPI void decrementHurtTime(gsl::not_null<struct MobHurtTimeComponent*>);

MCAPI float getStandAnim(class EntityContext const& provider);

MCAPI struct InterpolationPair getStandAnimNewOld(class EntityContext const& provider);

MCAPI struct InterpolationPair getWalkAnimSpeedNewOld(gsl::not_null<struct ActorWalkAnimationComponent const*>);

MCAPI void initializeHorse(class EntityContext& provider);

MCAPI void setStandAnim(class EntityContext& provider, float);

MCAPI void setStandAnimO(class EntityContext& provider, float);
// NOLINTEND

}; // namespace MobAnimation
