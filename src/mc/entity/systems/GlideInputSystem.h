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
    // ?doGlideInputSystem@GlideInputSystem@@SAXAEBUAbilitiesComponent@@AEBUMoveInputComponent@@AEBUSynchedActorDataComponent@@AEAUFallFlyTicksComponent@@AEAUStateVectorComponent@@@Z
    MCAPI static void
    doGlideInputSystem(struct AbilitiesComponent const&, struct MoveInputComponent const&, struct SynchedActorDataComponent const&, struct FallFlyTicksComponent&, struct StateVectorComponent&);

    // NOLINTEND
};
