#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct DolphinFlagComponent;
struct MobTravelComponent;
struct MovementAttributesComponent;
struct MovementSpeedComponent;
struct OnGroundFlagComponent;
struct PlayerComponent;
struct SwimSpeedMultiplierComponent;
struct TickingSystemWithInfo;
struct WaterWalkSpeedEnchantComponent;
// clang-format on

namespace WaterTravelSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createWaterTravelSystem();

MCAPI void doTickWaterTravelSystem(
    ::StrictEntityContext&                                       entity,
    ::MovementAttributesComponent const&                         attributesComponent,
    ::MovementSpeedComponent const&                              movementSpeedComponent,
    ::SwimSpeedMultiplierComponent const&                        swimSpeedMultiplierComponent,
    ::WaterWalkSpeedEnchantComponent const&                      waterWalkSpeedEnchantComponent,
    ::MobTravelComponent&                                        mobTravelComponent,
    ::Optional<::DolphinFlagComponent const>                     dolphinFlagComponent,
    ::Optional<::OnGroundFlagComponent const>                    onGroundFlagComponent,
    ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>> players
);
// NOLINTEND

} // namespace WaterTravelSystem
