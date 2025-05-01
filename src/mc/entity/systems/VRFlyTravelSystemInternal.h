#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct LocalPlayerPrePlayerTravelComponent;
struct MobTravelComponent;
struct MovementAbilitiesComponent;
struct PlayerInputModeComponent;
// clang-format on

namespace VRFlyTravelSystemInternal {
// functions
// NOLINTBEGIN
MCNAPI void _prePlayerTravelSystem(
    ::StrictEntityContext const&                            context,
    ::PlayerInputModeComponent const&                       inputMode,
    ::MobTravelComponent&                                   mobTravel,
    ::MovementAbilitiesComponent&                           abilitiesComponent,
    ::EntityModifier<::LocalPlayerPrePlayerTravelComponent> mod
);
// NOLINTEND

} // namespace VRFlyTravelSystemInternal
