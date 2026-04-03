#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct HorseFlagComponent;
struct HorseLandedOnGroundFlagComponent;
struct HorseStandCounterComponent;
struct InterpolateMovementNeededComponent;
// clang-format on

namespace HorsePostTravelSystem {
// functions
// NOLINTBEGIN
MCNAPI void _doPostTravelSystem(
    ::entt::type_list<::Include<::InterpolateMovementNeededComponent, ::HorseFlagComponent>>,
    ::StrictEntityContext const&                         context,
    ::HorseStandCounterComponent&                        horseStandCounter,
    ::ActorDataFlagComponent&                            actorDataFlag,
    ::ActorDataDirtyFlagsComponent&                      dirtyFlags,
    ::Optional<::HorseLandedOnGroundFlagComponent>       horseLandedOnGround,
    ::EntityModifier<::HorseLandedOnGroundFlagComponent> modifier
);
// NOLINTEND

} // namespace HorsePostTravelSystem
