#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct ActorWalkAnimationComponent;
struct InterpolationPair;
struct MobHurtTimeComponent;
// clang-format on

namespace MobAnimation {
// functions
// NOLINTBEGIN
MCAPI void decrementHurtTime(::gsl::not_null<::MobHurtTimeComponent*> hurtTimeComp);

MCAPI float getStandAnim(::EntityContext const& provider);

MCAPI ::InterpolationPair getStandAnimNewOld(::EntityContext const& provider);

MCAPI ::InterpolationPair getWalkAnimSpeedNewOld(::gsl::not_null<::ActorWalkAnimationComponent const*> builtInActorComp
);

MCAPI void initializeHorse(::EntityContext& provider);

MCAPI void setStandAnim(::EntityContext& provider, float standAnim);

MCAPI void setStandAnimO(::EntityContext& provider, float standAnimO);
// NOLINTEND

} // namespace MobAnimation
