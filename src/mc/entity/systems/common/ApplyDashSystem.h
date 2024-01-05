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
    // ?_tickApplyDashModifierSystem@ApplyDashSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UDashJump@@@@@@$$CBUTriggerJumpRequestComponent@@$$CBVDashComponent@@$$CBUAttributesComponent@@$$CBUActorRotationComponent@@$$CBUMobEffectsComponent@@UStateVectorComponent@@UJumpPendingScaleComponent@@USynchedActorDataComponent@@@@V?$EntityModifier@UDashCooldownTimerComponent@@@@@Z
    MCAPI static void _tickApplyDashModifierSystem(
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct DashJump>>,
            struct TriggerJumpRequestComponent const,
            class DashComponent const,
            struct AttributesComponent const,
            struct ActorRotationComponent const,
            struct MobEffectsComponent const,
            struct StateVectorComponent,
            struct JumpPendingScaleComponent,
            struct SynchedActorDataComponent>                   view,
        class EntityModifier<struct DashCooldownTimerComponent> mod
    );

    // symbol: ?create@ApplyDashSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // symbol:
    // ?doDash@ApplyDashSystem@@SAXAEBVStrictEntityContext@@AEBUJumpPreventionResult@@AEBVBaseAttributeMap@@AEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@MMMIAEAVVec3@@AEAMAEAVSynchedActorData@@AEAV?$EntityModifier@UDashCooldownTimerComponent@@@@@Z
    MCAPI static void doDash(
        class StrictEntityContext const& context,
        struct JumpPreventionResult const&,
        class BaseAttributeMap const&               attributes,
        std::vector<class MobEffectInstance> const& mobEffects,
        float,
        float,
        float,
        uint        cooldownTime,
        class Vec3& posDelta,
        float&,
        class SynchedActorData&                                  entityData,
        class EntityModifier<struct DashCooldownTimerComponent>& mod
    );

    // symbol:
    // ?tickApplyDashModifierSystem@ApplyDashSystem@@SAXAEBVStrictEntityContext@@AEBUTriggerJumpRequestComponent@@AEBVDashComponent@@AEBUAttributesComponent@@AEBUActorRotationComponent@@AEBUMobEffectsComponent@@AEAUStateVectorComponent@@AEAUJumpPendingScaleComponent@@AEAUSynchedActorDataComponent@@AEAV?$EntityModifier@UDashCooldownTimerComponent@@@@@Z
    MCAPI static void tickApplyDashModifierSystem(
        class StrictEntityContext const& context,
        struct TriggerJumpRequestComponent const&,
        class DashComponent const&,
        struct AttributesComponent const&,
        struct ActorRotationComponent const&,
        struct MobEffectsComponent const&,
        struct StateVectorComponent&,
        struct JumpPendingScaleComponent&,
        struct SynchedActorDataComponent&,
        class EntityModifier<struct DashCooldownTimerComponent>& mod
    );

    // NOLINTEND
};
