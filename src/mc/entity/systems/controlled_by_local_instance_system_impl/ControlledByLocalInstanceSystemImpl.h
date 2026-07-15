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
struct ControlledByLocalInstanceComponent;
struct LocalPlayerComponent;
struct PlayerComponent;
// clang-format on

namespace ControlledByLocalInstanceSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void setControlledByLocalInstanceClient(
    ::StrictEntityContext const&                           entity,
    ::EntityModifier<::ControlledByLocalInstanceComponent> modifier
);

MCAPI void setControlledByLocalInstanceServer(
    ::StrictEntityContext const&                           entity,
    ::EntityModifier<::ControlledByLocalInstanceComponent> modifier
);

MCAPI void setVehicleControlledByLocalInstanceClient(
    ::StrictEntityContext const&                  entity,
    ::std::optional<::StrictEntityContext> const& controllingPlayer,
    ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::Optional<::LocalPlayerComponent>> const& playerView,
    ::EntityModifier<::ControlledByLocalInstanceComponent>                                                  modifier
);

MCAPI void setVehicleControlledByLocalInstanceServer(
    ::StrictEntityContext const&                  entity,
    ::std::optional<::StrictEntityContext> const& controllingPlayer,
    ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::Optional<::LocalPlayerComponent>> const& playerView,
    ::EntityModifier<::ControlledByLocalInstanceComponent>                                                  modifier
);
// NOLINTEND

} // namespace ControlledByLocalInstanceSystemImpl
