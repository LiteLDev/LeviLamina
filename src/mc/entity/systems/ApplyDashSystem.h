#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class MobEffectInstance;
class StrictEntityContext;
class Vec3;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorRotationComponent;
struct DashComponent;
struct DashCooldownTimerComponent;
struct JumpPendingScaleComponent;
struct JumpPreventionResult;
struct MobEffectsComponent;
struct MovementAttributesComponent;
struct StateVectorComponent;
struct TriggerJumpRequestComponent;
// clang-format on

struct ApplyDashSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void doDash(
        ::StrictEntityContext const&                    context,
        ::JumpPreventionResult const&                   jumpPreventionResult,
        ::MovementAttributesComponent const&            attributes,
        ::std::vector<::MobEffectInstance> const&       mobEffects,
        float                                           yRotationDegrees,
        float                                           verticalMomentumMultiplier,
        float                                           horizontalMomentumMultiplier,
        uint                                            cooldownTime,
        ::Vec3&                                         posDelta,
        float&                                          jumpPendingScale,
        ::ActorDataFlagComponent&                       actorDataFlag,
        ::ActorDataDirtyFlagsComponent&                 dirtyFlags,
        ::EntityModifier<::DashCooldownTimerComponent>& mod
    );

    MCNAPI static void tickApplyDashModifierSystem(
        ::StrictEntityContext const&                    context,
        ::TriggerJumpRequestComponent const&            triggerJumpRequestComponent,
        ::DashComponent const&                          dashComponent,
        ::MovementAttributesComponent const&            attributesComponent,
        ::ActorRotationComponent const&                 actorRotationComponent,
        ::MobEffectsComponent const&                    mobEffectsComponent,
        ::StateVectorComponent&                         stateVectorComponent,
        ::JumpPendingScaleComponent&                    jumpPendingScaleComponent,
        ::ActorDataFlagComponent&                       actorDataFlagComponent,
        ::ActorDataDirtyFlagsComponent&                 dirtyFlagsComponent,
        ::EntityModifier<::DashCooldownTimerComponent>& mod
    );
    // NOLINTEND
};
