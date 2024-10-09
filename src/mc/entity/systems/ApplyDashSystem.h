#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

class ApplyDashSystem {
public:
    // prevent constructor by default
    ApplyDashSystem& operator=(ApplyDashSystem const&);
    ApplyDashSystem(ApplyDashSystem const&);
    ApplyDashSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo create();

    MCAPI static void doDash(
        class StrictEntityContext const&                         context,
        struct JumpPreventionResult const&                       jumpPreventionResult,
        struct MovementAttributesComponent const&                attributes,
        std::vector<class MobEffectInstance> const&              mobEffects,
        float                                                    yRotationDegrees,
        float                                                    verticalMomentumMultiplier,
        float                                                    horizontalMomentumMultiplier,
        uint                                                     cooldownTime,
        class Vec3&                                              posDelta,
        float&                                                   jumpPendingScale,
        struct ActorDataFlagComponent&                           actorDataFlag,
        struct ActorDataDirtyFlagsComponent&                     dirtyFlags,
        class EntityModifier<struct DashCooldownTimerComponent>& mod
    );

    MCAPI static void tickApplyDashModifierSystem(
        class StrictEntityContext const&                         context,
        struct TriggerJumpRequestComponent const&                triggerJumpRequestComponent,
        class DashComponent const&                               dashComponent,
        struct MovementAttributesComponent const&                attributesComponent,
        struct ActorRotationComponent const&                     actorRotationComponent,
        struct MobEffectsComponent const&                        mobEffectsComponent,
        struct StateVectorComponent&                             stateVectorComponent,
        struct JumpPendingScaleComponent&                        jumpPendingScaleComponent,
        struct ActorDataFlagComponent&                           actorDataFlagComponent,
        struct ActorDataDirtyFlagsComponent&                     dirtyFlagsComponent,
        class EntityModifier<struct DashCooldownTimerComponent>& mod
    );

    // NOLINTEND
};
