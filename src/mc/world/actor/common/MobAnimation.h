#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobAnimation {
// NOLINTBEGIN
// symbol: ?decrementHurtTime@MobAnimation@@YAXV?$not_null@PEAUMobHurtTimeComponent@@@gsl@@@Z
MCAPI void decrementHurtTime(gsl::not_null<struct MobHurtTimeComponent*>);

// symbol: ?getStandAnim@MobAnimation@@YAMAEBVEntityContext@@@Z
MCAPI float getStandAnim(class EntityContext const& provider);

// symbol: ?getStandAnimNewOld@MobAnimation@@YA?AUInterpolationPair@@AEBVEntityContext@@@Z
MCAPI struct InterpolationPair getStandAnimNewOld(class EntityContext const& provider);

// symbol:
// ?getWalkAnimSpeedNewOld@MobAnimation@@YA?AUInterpolationPair@@V?$not_null@PEBUActorWalkAnimationComponent@@@gsl@@@Z
MCAPI struct InterpolationPair getWalkAnimSpeedNewOld(gsl::not_null<struct ActorWalkAnimationComponent const*>);

// symbol: ?initializeHorse@MobAnimation@@YAXAEAVEntityContext@@@Z
MCAPI void initializeHorse(class EntityContext& provider);

// symbol: ?setStandAnim@MobAnimation@@YAXAEAVEntityContext@@M@Z
MCAPI void setStandAnim(class EntityContext& provider, float);

// symbol: ?setStandAnimO@MobAnimation@@YAXAEAVEntityContext@@M@Z
MCAPI void setStandAnimO(class EntityContext& provider, float);
// NOLINTEND

}; // namespace MobAnimation
