#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataControllingSeatIndexComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct AttributeRequestComponent;
struct CanVehicleSprintFlagComponent;
struct ItemUseSlowdownModifierComponent;
struct MobEffectsComponent;
struct MobIsJumpingFlagComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct MovementAttributesComponent;
struct OnGroundFlagComponent;
struct PassengerComponent;
struct PlayerActionComponent;
struct PlayerInputModeComponent;
struct PlayerInputRequestComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct VanillaClientGameplayComponent;
struct VehicleComponent;
struct WasInWaterFlagComponent;
// clang-format on

namespace SprintTriggerSystem {
// functions
// NOLINTBEGIN
MCNAPI ::TickingSystemWithInfo createActionSystem();

MCNAPI ::TickingSystemWithInfo createIntentSystem();

MCNAPI ::TickingSystemWithInfo createSetRequestSystem();

MCNAPI void doIntentTick(::Optional<::ItemUseSlowdownModifierComponent const> slowedByItemInUse, ::Optional<::MobIsJumpingFlagComponent const> isJumping, ::Optional<::OnGroundFlagComponent const> const& onGround, ::Optional<::WasInWaterFlagComponent const> const& wasInWater, ::MovementAbilitiesComponent const& abilities, ::MobEffectsComponent const& mobEffects, ::MoveInputComponent const& moveInput, ::PlayerInputModeComponent const& playerInputMode, ::StateVectorComponent const& stateVector, ::ActorDataFlagComponent const& synchedActorData, ::PlayerInputRequestComponent& playerInputRequest, ::VanillaClientGameplayComponent& vanillaClientGameplay, ::PlayerActionComponent& playerAction);

MCNAPI void doSetRequestTick(::StrictEntityContext const& entity, ::Optional<::PassengerComponent const> const& passenger, ::MovementAttributesComponent const& attributes, ::PlayerInputRequestComponent& playerInputRequest, ::ViewT<::StrictEntityContext, ::VehicleComponent, ::ActorDataControllingSeatIndexComponent const, ::Optional<::CanVehicleSprintFlagComponent>> const& vehicleView);

MCNAPI void setSprinting(::StrictEntityContext const& entityContext, ::EntityModifier<::AttributeRequestComponent>& modifier, ::ActorDataFlagComponent& actorData, ::ActorDataDirtyFlagsComponent& dirtyFlags, bool shouldSprint);
// NOLINTEND

}
