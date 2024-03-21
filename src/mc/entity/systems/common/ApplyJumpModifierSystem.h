#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ApplyJumpModifierSystem {
public:
    // prevent constructor by default
    ApplyJumpModifierSystem& operator=(ApplyJumpModifierSystem const&);
    ApplyJumpModifierSystem(ApplyJumpModifierSystem const&);
    ApplyJumpModifierSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createApplyJumpModifierSystem@ApplyJumpModifierSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createApplyJumpModifierSystem();

    // symbol:
    // ?tickApplyJumpModifierSystem@ApplyJumpModifierSystem@@SAXAEBVStrictEntityContext@@AEBUTriggerJumpRequestComponent@@AEBUActorRotationComponent@@AEBUMovementAttributesComponent@@AEBUMobEffectsComponent@@AEBUMobTravelComponent@@AEAUJumpPendingScaleComponent@@AEAUStateVectorComponent@@@Z
    MCAPI static void
    tickApplyJumpModifierSystem(class StrictEntityContext const&, struct TriggerJumpRequestComponent const&, struct ActorRotationComponent const&, struct MovementAttributesComponent const&, struct MobEffectsComponent const&, struct MobTravelComponent const&, struct JumpPendingScaleComponent&, struct StateVectorComponent&);

    // NOLINTEND
};
