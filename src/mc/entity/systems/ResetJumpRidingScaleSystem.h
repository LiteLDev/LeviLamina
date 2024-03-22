#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class ResetJumpRidingScaleSystem {
public:
    // prevent constructor by default
    ResetJumpRidingScaleSystem& operator=(ResetJumpRidingScaleSystem const&);
    ResetJumpRidingScaleSystem(ResetJumpRidingScaleSystem const&);
    ResetJumpRidingScaleSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@ResetJumpRidingScaleSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // symbol:
    // ?tick@ResetJumpRidingScaleSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@UPlayerInputRequestComponent@@@@UJumpRidingScaleComponent@@UVanillaClientGameplayComponent@@@@@Z
    MCAPI static void
    tick(class ViewT<
         class StrictEntityContext,
         struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, struct PlayerInputRequestComponent>,
         struct JumpRidingScaleComponent,
         struct VanillaClientGameplayComponent> view);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doResetJumpRidingScaleSystem@ResetJumpRidingScaleSystem@@CAXAEBVStrictEntityContext@@AEAUJumpRidingScaleComponent@@AEAUVanillaClientGameplayComponent@@@Z
    MCAPI static void
    _doResetJumpRidingScaleSystem(class StrictEntityContext const&, struct JumpRidingScaleComponent&, struct VanillaClientGameplayComponent&);

    // NOLINTEND
};
