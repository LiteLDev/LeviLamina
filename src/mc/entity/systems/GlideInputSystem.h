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
    MCAPI static struct TickingSystemWithInfo createGlideInputSystem();

    MCAPI static void
    doGlideInputSystem(struct MovementAbilitiesComponent const&, struct MoveInputComponent const&, struct ActorDataFlagComponent const&, struct FallFlyTicksComponent&, struct StateVectorComponent&);

    // NOLINTEND
};
