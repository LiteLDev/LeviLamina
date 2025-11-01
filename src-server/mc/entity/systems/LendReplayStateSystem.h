#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
class ReplayStateComponent;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct PassengerComponent;
struct PlayerComponent;
struct ReplayStateLenderFlagComponent;
struct TickingSystemWithInfo;
struct VehicleInputIntentComponent;
// clang-format on

namespace LendReplayStateSystem {
// functions
// NOLINTBEGIN
MCNAPI void _addReplayStateIfNoLongerRidingClientPredictedVehicle(::StrictEntityContext const& player, ::PassengerComponent const& passengerComponent, ::std::function<::ReplayStateComponent()> const& createReplayState, ::EntityModifier<::ReplayStateComponent, ::ReplayStateLenderFlagComponent>& mod, ::ViewT<::StrictEntityContext, ::VehicleInputIntentComponent const>& vehicleView);

MCNAPI void _cleanupLingeringReplayStateComponentsSystem(::entt::type_list<::Include<::ActorMovementTickNeededComponent, ::ReplayStateComponent>, ::Exclude<::PlayerComponent>>, ::StrictEntityContext const& entity, ::Optional<::VehicleInputIntentComponent const> vehicleInputIntent, ::ViewT<::StrictEntityContext, ::ReplayStateComponent> passengerView, ::EntityModifier<::ReplayStateComponent, ::ReplayStateLenderFlagComponent>& mod);

MCNAPI void _createAndAddReplayStateComponent(::StrictEntityContext const& entity, ::std::function<::ReplayStateComponent()> const& createReplayState, ::EntityModifier<::ReplayStateComponent, ::ReplayStateLenderFlagComponent>& mod);

MCNAPI void _lendReplayStateToVehicle(::StrictEntityContext const& vehicle, ::VehicleInputIntentComponent const& vehicleInputIntentComponent, ::ViewT<::StrictEntityContext, ::ReplayStateComponent>& passengerView, ::std::function<::ReplayStateComponent()> const& createReplayState, ::EntityModifier<::ReplayStateComponent, ::ReplayStateLenderFlagComponent>& mod);

MCNAPI ::TickingSystemWithInfo createAddBackToPlayerSystem(bool isClientSide);

MCNAPI ::TickingSystemWithInfo createLendToVehicleSystem(bool isClientSide);

MCNAPI void registerSystems(::EntitySystems& systemRegistry, bool isClientSide);
// NOLINTEND

}
