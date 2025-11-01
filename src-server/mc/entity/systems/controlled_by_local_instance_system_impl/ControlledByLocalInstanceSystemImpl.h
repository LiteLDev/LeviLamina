#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ControlledByLocalInstanceComponent;
struct LocalPlayerComponent;
struct PlayerComponent;
struct VehicleComponent;
// clang-format on

namespace ControlledByLocalInstanceSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void _calculateBoatControlledByLocalInstanceSystem(
    ::StrictEntityContext const& entity,
    ::VehicleComponent const&    vehicleComponent,
    ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::Optional<::LocalPlayerComponent>> const& players,
    ::EntityModifier<::ControlledByLocalInstanceComponent>                                                  modifier,
    void (*setCBLI)(
        ::StrictEntityContext const&,
        ::std::optional<::StrictEntityContext> const&,
        ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::Optional<::LocalPlayerComponent>> const&,
        ::EntityModifier<::ControlledByLocalInstanceComponent>
    )
);

MCNAPI void _calculateHorseControlledByLocalInstanceSystem(
    ::StrictEntityContext const&    entity,
    ::VehicleComponent const&       vehicleComponent,
    ::ActorDataFlagComponent const& actorData,
    ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::Optional<::LocalPlayerComponent>> const& players,
    ::EntityModifier<::ControlledByLocalInstanceComponent>                                                  modifier,
    void (*setCBLI)(
        ::StrictEntityContext const&,
        ::std::optional<::StrictEntityContext> const&,
        ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::Optional<::LocalPlayerComponent>> const&,
        ::EntityModifier<::ControlledByLocalInstanceComponent>
    )
);

MCNAPI void setControlledByLocalInstanceClient(
    ::StrictEntityContext const&                           entity,
    ::EntityModifier<::ControlledByLocalInstanceComponent> modifier
);

MCNAPI void setControlledByLocalInstanceServer(
    ::StrictEntityContext const&                           entity,
    ::EntityModifier<::ControlledByLocalInstanceComponent> modifier
);

MCNAPI void setVehicleControlledByLocalInstanceClient(
    ::StrictEntityContext const&                  entity,
    ::std::optional<::StrictEntityContext> const& controllingPlayer,
    ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::Optional<::LocalPlayerComponent>> const& playerView,
    ::EntityModifier<::ControlledByLocalInstanceComponent>                                                  modifier
);

MCNAPI void setVehicleControlledByLocalInstanceServer(
    ::StrictEntityContext const&                  entity,
    ::std::optional<::StrictEntityContext> const& controllingPlayer,
    ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::Optional<::LocalPlayerComponent>> const& playerView,
    ::EntityModifier<::ControlledByLocalInstanceComponent>                                                  modifier
);
// NOLINTEND

} // namespace ControlledByLocalInstanceSystemImpl
