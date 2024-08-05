#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorType.h"
#include "mc/events/LevelSoundEvent.h"

namespace ReflectProjectileUtility {
// NOLINTBEGIN
MCAPI float evalAzimuthReflectionAngle(class RenderParams&, class ExpressionNode const&);

MCAPI float evalElevationReflectionAngle(class RenderParams&, class ExpressionNode const&);

MCAPI float evalReflectionScale(class RenderParams&, class ExpressionNode const&);

MCAPI ::Puv::Legacy::LevelSoundEvent getReflectionSoundEvent(std::string const&);

MCAPI bool shouldReflectProjectile(::ActorType, std::vector<::ActorType> const&);
// NOLINTEND

}; // namespace ReflectProjectileUtility
