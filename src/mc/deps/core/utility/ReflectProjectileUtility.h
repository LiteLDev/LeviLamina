#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorType.h"
#include "mc/events/LevelSoundEvent.h"

namespace ReflectProjectileUtility {
// NOLINTBEGIN
// symbol: ?evalAzimuthReflectionAngle@ReflectProjectileUtility@@YAMAEAVRenderParams@@AEBVExpressionNode@@@Z
MCAPI float evalAzimuthReflectionAngle(class RenderParams&, class ExpressionNode const&);

// symbol: ?evalElevationReflectionAngle@ReflectProjectileUtility@@YAMAEAVRenderParams@@AEBVExpressionNode@@@Z
MCAPI float evalElevationReflectionAngle(class RenderParams&, class ExpressionNode const&);

// symbol: ?evalReflectionScale@ReflectProjectileUtility@@YAMAEAVRenderParams@@AEBVExpressionNode@@@Z
MCAPI float evalReflectionScale(class RenderParams&, class ExpressionNode const&);

// symbol:
// ?getReflectionSoundEvent@ReflectProjectileUtility@@YA?AW4LevelSoundEvent@Legacy@Puv@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI ::Puv::Legacy::LevelSoundEvent getReflectionSoundEvent(std::string const&);

// symbol:
// ?shouldReflectProjectile@ReflectProjectileUtility@@YA_NW4ActorType@@AEBV?$vector@W4ActorType@@V?$allocator@W4ActorType@@@std@@@std@@@Z
MCAPI bool shouldReflectProjectile(::ActorType, std::vector<::ActorType> const&);
// NOLINTEND

}; // namespace ReflectProjectileUtility
