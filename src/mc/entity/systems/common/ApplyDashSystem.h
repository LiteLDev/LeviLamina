#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class ApplyDashSystem {
public:
    // prevent constructor by default
    ApplyDashSystem& operator=(ApplyDashSystem const&);
    ApplyDashSystem(ApplyDashSystem const&);
    ApplyDashSystem();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_tickApplyDashModifierSystem@ApplyDashSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UDashJump@@@@@@$$CBUTriggerJumpRequestComponent@@$$CBVDashComponent@@$$CBUMovementAttributesComponent@@$$CBUActorRotationComponent@@$$CBUMobEffectsComponent@@UStateVectorComponent@@UJumpPendingScaleComponent@@UActorDataFlagComponent@@UActorDataDirtyFlagsComponent@@@@V?$EntityModifier@UDashCooldownTimerComponent@@@@@Z
    MCAPI static void _tickApplyDashModifierSystem(
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct DashJump>>,
            struct TriggerJumpRequestComponent const,
            class DashComponent const,
            struct MovementAttributesComponent const,
            struct ActorRotationComponent const,
            struct MobEffectsComponent const,
            struct StateVectorComponent,
            struct JumpPendingScaleComponent,
            struct ActorDataFlagComponent,
            struct ActorDataDirtyFlagsComponent>                view,
        class EntityModifier<struct DashCooldownTimerComponent> mod
    );

    // symbol: ?create@ApplyDashSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // symbol:
    // ?doDash@ApplyDashSystem@@SAXAEBVStrictEntityContext@@AEBUJumpPreventionResult@@AEBUMovementAttributesComponent@@AEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@MMMIAEAVVec3@@AEAMAEAUActorDataFlagComponent@@AEAUActorDataDirtyFlagsComponent@@AEAV?$EntityModifier@UDashCooldownTimerComponent@@@@@Z
    MCAPI static void
    doDash(class StrictEntityContext const&, struct JumpPreventionResult const&, struct MovementAttributesComponent const&, std::vector<class MobEffectInstance> const&, float, float, float, uint, class Vec3&, float&, struct ActorDataFlagComponent&, struct ActorDataDirtyFlagsComponent&, class EntityModifier<struct DashCooldownTimerComponent>&);

    // symbol:
    // ?tickApplyDashModifierSystem@ApplyDashSystem@@SAXAEBVStrictEntityContext@@AEBUTriggerJumpRequestComponent@@AEBVDashComponent@@AEBUMovementAttributesComponent@@AEBUActorRotationComponent@@AEBUMobEffectsComponent@@AEAUStateVectorComponent@@AEAUJumpPendingScaleComponent@@AEAUActorDataFlagComponent@@AEAUActorDataDirtyFlagsComponent@@AEAV?$EntityModifier@UDashCooldownTimerComponent@@@@@Z
    MCAPI static void
    tickApplyDashModifierSystem(class StrictEntityContext const&, struct TriggerJumpRequestComponent const&, class DashComponent const&, struct MovementAttributesComponent const&, struct ActorRotationComponent const&, struct MobEffectsComponent const&, struct StateVectorComponent&, struct JumpPendingScaleComponent&, struct ActorDataFlagComponent&, struct ActorDataDirtyFlagsComponent&, class EntityModifier<struct DashCooldownTimerComponent>&);

    // NOLINTEND
};
