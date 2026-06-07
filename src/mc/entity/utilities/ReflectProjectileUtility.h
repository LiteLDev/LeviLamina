#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class RenderParams;
// clang-format on

namespace ReflectProjectileUtility {
// functions
// NOLINTBEGIN
MCNAPI float evalAzimuthReflectionAngle(::RenderParams& renderParams, ::ExpressionNode const& azimuthAngle);

MCNAPI float evalElevationReflectionAngle(::RenderParams& renderParams, ::ExpressionNode const& elevationAngle);

MCNAPI float evalReflectionScale(::RenderParams& renderParams, ::ExpressionNode const& reflectionScale);

MCNAPI ::SharedTypes::Legacy::LevelSoundEvent getReflectionSoundEvent(::std::string const& soundName);

MCNAPI bool
shouldReflectProjectile(::ActorType projectileActorType, ::std::vector<::ActorType> const& projectilesToReflect);
// NOLINTEND

} // namespace ReflectProjectileUtility
