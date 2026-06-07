#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct JumpRidingScaleComponent;
struct TickingSystemWithInfo;
struct VanillaClientGameplayComponent;
// clang-format on

class ResetJumpRidingScaleSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _doResetJumpRidingScaleSystem(
        ::StrictEntityContext const& jumpRidingScaleComponent,
        ::JumpRidingScaleComponent&  vanillaClientGameplayComponent,
        ::VanillaClientGameplayComponent&
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
