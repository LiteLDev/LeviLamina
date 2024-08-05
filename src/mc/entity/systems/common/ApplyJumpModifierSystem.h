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
    MCAPI static struct TickingSystemWithInfo createApplyJumpModifierSystem();

    MCAPI static void
    tickApplyJumpModifierSystem(class StrictEntityContext const&, struct TriggerJumpRequestComponent const&, struct ActorRotationComponent const&, struct MovementAttributesComponent const&, struct MobEffectsComponent const&, struct MobTravelComponent const&, struct JumpPendingScaleComponent&, struct StateVectorComponent&);

    // NOLINTEND
};
