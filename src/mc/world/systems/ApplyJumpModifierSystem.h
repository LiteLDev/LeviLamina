#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class ApplyJumpModifierSystem {

public:
    // prevent constructor by default
    ApplyJumpModifierSystem& operator=(ApplyJumpModifierSystem const&) = delete;
    ApplyJumpModifierSystem(ApplyJumpModifierSystem const&)            = delete;
    ApplyJumpModifierSystem()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_tickApplyJumpModifierSystem\@ApplyJumpModifierSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UOnGroundFlag\@\@\@\@V?$FlagComponent\@UPowerJump\@\@\@\@\@\@U?$Exclude\@V?$FlagComponent\@UMobIsJumpingFlag\@\@\@\@\@\@$$CBUTriggerJumpRequestComponent\@\@$$CBUActorRotationComponent\@\@$$CBUAttributesComponent\@\@$$CBUMobEffectsComponent\@\@$$CBUMobTravelComponent\@\@UJumpPendingScaleComponent\@\@UStateVectorComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickApplyJumpModifierSystem(class ViewT<
                                                   class StrictEntityContext,
                                                   class EntityRegistryBase,
                                                   struct Include<
                                                       class FlagComponent<struct OnGroundFlag>,
                                                       class FlagComponent<struct PowerJump>>,
                                                   struct Exclude<class FlagComponent<struct MobIsJumpingFlag>>,
                                                   struct TriggerJumpRequestComponent const,
                                                   struct ActorRotationComponent const,
                                                   struct AttributesComponent const,
                                                   struct MobEffectsComponent const,
                                                   struct MobTravelComponent const,
                                                   struct JumpPendingScaleComponent,
                                                   struct StateVectorComponent>);
    /**
     * @symbol ?createApplyJumpModifierSystem\@ApplyJumpModifierSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createApplyJumpModifierSystem();
    /**
     * @symbol
     * ?tickApplyJumpModifierSystem\@ApplyJumpModifierSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUTriggerJumpRequestComponent\@\@AEBUActorRotationComponent\@\@AEBUAttributesComponent\@\@AEBUMobEffectsComponent\@\@AEBUMobTravelComponent\@\@AEAUJumpPendingScaleComponent\@\@AEAUStateVectorComponent\@\@\@Z
     */
    MCAPI static void
    tickApplyJumpModifierSystem(class StrictEntityContext const&, struct TriggerJumpRequestComponent const&, struct ActorRotationComponent const&, struct AttributesComponent const&, struct MobEffectsComponent const&, struct MobTravelComponent const&, struct JumpPendingScaleComponent&, struct StateVectorComponent&);
    // NOLINTEND
};
