#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class RideableComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorIsBeingDestroyedFlagComponent;
struct ActorSetPositionRequestComponent;
struct DoesServerAuthOnlyDismountFlagComponent;
struct ExitFromPassengerFlagComponent;
struct IsBeingTeleportedFlagComponent;
struct OffsetsComponent;
struct PassengerComponent;
struct PlayerComponent;
struct StopRidingRequestComponent;
struct SwitchingVehiclesFlagComponent;
struct TeleportToRequestComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

namespace ExitVehicleOnTopCenterSystem {
// functions
// NOLINTBEGIN
MCNAPI ::TickingSystemWithInfo createMakeNonPlayerPassengerExitSystem();

MCNAPI ::TickingSystemWithInfo createMakePlayerPassengerExitSystem();

MCNAPI void makeNonPlayerPassengerExit(::StrictEntityContext const& entity, ::PassengerComponent const& passengerComponent, ::OffsetsComponent const& offsetsComponent, ::ViewT<::StrictEntityContext, ::Include<::VehicleComponent, ::DoesServerAuthOnlyDismountFlagComponent>, ::RideableComponent const, ::AABBShapeComponent const> vehicleView, ::EntityModifier<::ActorSetPositionRequestComponent>& modifier);

MCNAPI void makePlayerPassengerExit(::StrictEntityContext const& entity, ::PassengerComponent const& passengerComponent, ::ViewT<::StrictEntityContext, ::Include<::VehicleComponent, ::DoesServerAuthOnlyDismountFlagComponent>, ::RideableComponent const, ::AABBShapeComponent const> vehicleView, ::EntityModifier<::TeleportToRequestComponent>& modifier);

MCNAPI void tickNonPlayerPassengerSystem(::ViewT<::StrictEntityContext, ::Include<::StopRidingRequestComponent, ::ExitFromPassengerFlagComponent>, ::Exclude<::PlayerComponent, ::ActorIsBeingDestroyedFlagComponent, ::SwitchingVehiclesFlagComponent, ::IsBeingTeleportedFlagComponent>, ::PassengerComponent const, ::OffsetsComponent const> passengerView, ::ViewT<::StrictEntityContext, ::Include<::VehicleComponent, ::DoesServerAuthOnlyDismountFlagComponent>, ::RideableComponent const, ::AABBShapeComponent const> vehicleView, ::EntityModifier<::ActorSetPositionRequestComponent> modifier);

MCNAPI void tickPlayerPassengerSystem(::ViewT<::StrictEntityContext, ::Include<::StopRidingRequestComponent, ::ExitFromPassengerFlagComponent, ::PlayerComponent>, ::Exclude<::ActorIsBeingDestroyedFlagComponent, ::SwitchingVehiclesFlagComponent, ::IsBeingTeleportedFlagComponent>, ::PassengerComponent const> passengerView, ::ViewT<::StrictEntityContext, ::Include<::VehicleComponent, ::DoesServerAuthOnlyDismountFlagComponent>, ::RideableComponent const, ::AABBShapeComponent const> vehicleView, ::EntityModifier<::TeleportToRequestComponent> modifier);
// NOLINTEND

}
