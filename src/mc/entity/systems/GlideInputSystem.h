#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GlideInputSystem {
public:
    // prevent constructor by default
    GlideInputSystem& operator=(GlideInputSystem const&);
    GlideInputSystem(GlideInputSystem const&);
    GlideInputSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createGlideInputSystem@GlideInputSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createGlideInputSystem();

    // symbol:
    // ?doGlideInputSystem@GlideInputSystem@@SAXAEBUMovementAbilitiesComponent@@AEBUMoveInputComponent@@AEBUActorDataFlagComponent@@AEAUFallFlyTicksComponent@@AEAUStateVectorComponent@@@Z
    MCAPI static void
    doGlideInputSystem(struct MovementAbilitiesComponent const&, struct MoveInputComponent const&, struct ActorDataFlagComponent const&, struct FallFlyTicksComponent&, struct StateVectorComponent&);

    // NOLINTEND
};
