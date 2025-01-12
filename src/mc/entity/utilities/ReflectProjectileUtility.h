#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/LevelSoundEvent.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class RenderParams;
// clang-format on

namespace ReflectProjectileUtility {
// functions
// NOLINTBEGIN
MCFOLD float evalAzimuthReflectionAngle(::RenderParams& renderParams, ::ExpressionNode const& azimuthAngle);

MCFOLD float evalElevationReflectionAngle(::RenderParams& renderParams, ::ExpressionNode const& elevationAngle);

MCFOLD float evalReflectionScale(::RenderParams& renderParams, ::ExpressionNode const& reflectionScale);

MCAPI ::SharedTypes::Legacy::LevelSoundEvent getReflectionSoundEvent(::std::string const& soundName);

MCAPI bool
shouldReflectProjectile(::ActorType projectileActorType, ::std::vector<::ActorType> const& projectilesToReflect);
// NOLINTEND

} // namespace ReflectProjectileUtility
