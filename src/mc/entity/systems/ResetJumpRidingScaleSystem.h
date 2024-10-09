#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResetJumpRidingScaleSystem {
public:
    // prevent constructor by default
    ResetJumpRidingScaleSystem& operator=(ResetJumpRidingScaleSystem const&);
    ResetJumpRidingScaleSystem(ResetJumpRidingScaleSystem const&);
    ResetJumpRidingScaleSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _doResetJumpRidingScaleSystem(
        class StrictEntityContext const&,
        struct JumpRidingScaleComponent&       jumpRidingScaleComponent,
        struct VanillaClientGameplayComponent& vanillaClientGameplayComponent
    );

    // NOLINTEND
};
