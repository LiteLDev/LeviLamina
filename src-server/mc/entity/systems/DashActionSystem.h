#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class MobEffectInstance;
class StrictEntityContext;
class Vec3;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorRotationComponent;
struct DashActionComponent;
struct DashCooldownTimerComponent;
struct JumpPendingScaleComponent;
struct JumpPreventionResult;
struct MobEffectsComponent;
struct MovementAttributesComponent;
struct PlayerComponent;
struct StateVectorComponent;
struct TriggerJumpRequestComponent;
struct VehicleComponent;
// clang-format on

namespace DashActionSystem {
// functions
// NOLINTBEGIN
MCNAPI ::Vec3 dashForwardCamera(::Vec3 const& momentum, ::ActorRotationComponent const& cameraRotation);

MCNAPI ::Vec3 dashForwardPassengerCamera(
    ::Vec3 const&                                                                                momentum,
    ::VehicleComponent const&                                                                    vehicleComponent,
    ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::ActorRotationComponent const> playerPassengerView
);

MCNAPI void doDash(
    ::StrictEntityContext const&                                                                 context,
    ::JumpPreventionResult const&                                                                jumpPreventionResult,
    ::MovementAttributesComponent const&                                                         attributes,
    ::std::vector<::MobEffectInstance> const&                                                    mobEffects,
    ::DashActionComponent const&                                                                 dashAction,
    ::ActorRotationComponent const&                                                              actorRotationComponent,
    ::Optional<::VehicleComponent const>                                                         vehicleComponent,
    ::Vec3&                                                                                      posDelta,
    float&                                                                                       jumpPendingScale,
    ::ActorDataFlagComponent&                                                                    actorDataFlag,
    ::ActorDataDirtyFlagsComponent&                                                              dirtyFlags,
    ::EntityModifier<::DashCooldownTimerComponent>&                                              mod,
    ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::ActorRotationComponent const> passengerView
);

MCNAPI void tickApplyDashModifierSystem(
    ::StrictEntityContext const&                    context,
    ::TriggerJumpRequestComponent const&            triggerJumpRequestComponent,
    ::DashActionComponent const&                    dashComponent,
    ::MovementAttributesComponent const&            attributesComponent,
    ::ActorRotationComponent const&                 actorRotationComponent,
    ::MobEffectsComponent const&                    mobEffectsComponent,
    ::Optional<::VehicleComponent const>            vehicleComponent,
    ::StateVectorComponent&                         stateVectorComponent,
    ::JumpPendingScaleComponent&                    jumpPendingScaleComponent,
    ::ActorDataFlagComponent&                       actorDataFlagComponent,
    ::ActorDataDirtyFlagsComponent&                 dirtyFlagsComponent,
    ::EntityModifier<::DashCooldownTimerComponent>& mod,
    ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::ActorRotationComponent const> passengerView
);
// NOLINTEND

} // namespace DashActionSystem
