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

    MCAPI static void tickApplyJumpModifierSystem(
        class StrictEntityContext const&,
        struct TriggerJumpRequestComponent const& triggerJumpRequestComponent,
        struct ActorRotationComponent const&      actorRotationComponent,
        struct MovementAttributesComponent const& attributesComponent,
        struct MobEffectsComponent const&         mobEffectsComponent,
        struct MobTravelComponent const&          mobTravelComponent,
        struct JumpPendingScaleComponent&         jumpPendingScaleComponent,
        struct StateVectorComponent&              stateVectorComponent
    );

    // NOLINTEND
};
