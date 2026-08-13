#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct PlayerPreMobTravelComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace PlayerPreMobTravelSystem {
// functions
// NOLINTBEGIN
MCAPI void copyOriginalPlayerValues(
    ::StrictEntityContext&                          context,
    ::StateVectorComponent const&                   stateVectorComponent,
    ::EntityModifier<::PlayerPreMobTravelComponent> mod
);

MCAPI ::TickingSystemWithInfo createStorePositionSystem();
// NOLINTEND

} // namespace PlayerPreMobTravelSystem
