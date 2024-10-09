#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorType.h"

namespace ReflectProjectileUtility {
// NOLINTBEGIN
MCAPI float evalAzimuthReflectionAngle(class RenderParams& renderParams, class ExpressionNode const& azimuthAngle);

MCAPI float evalElevationReflectionAngle(class RenderParams& renderParams, class ExpressionNode const& elevationAngle);

MCAPI float evalReflectionScale(class RenderParams& renderParams, class ExpressionNode const& reflectionScale);

MCAPI ::Puv::Legacy::LevelSoundEvent getReflectionSoundEvent(std::string const& soundName);

MCAPI bool
shouldReflectProjectile(::ActorType projectileActorType, std::vector<::ActorType> const& projectilesToReflect);
// NOLINTEND

}; // namespace ReflectProjectileUtility
