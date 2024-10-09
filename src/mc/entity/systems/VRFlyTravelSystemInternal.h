#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

namespace VRFlyTravelSystemInternal {
// NOLINTBEGIN
MCAPI void _prePlayerTravelSystem(
    class StrictEntityContext const&                                 context,
    struct PlayerInputModeComponent const&                           inputMode,
    struct MobTravelComponent&                                       mobTravel,
    struct MovementAbilitiesComponent&                               abilitiesComponent,
    class EntityModifier<struct LocalPlayerPrePlayerTravelComponent> mod
);
// NOLINTEND

}; // namespace VRFlyTravelSystemInternal
