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

    MCAPI static void doGlideInputSystem(
        struct MovementAbilitiesComponent const& abilitiesComponent,
        struct MoveInputComponent const&         moveInputComponent,
        struct ActorDataFlagComponent const&     synchedActorDataComponent,
        struct FallFlyTicksComponent&            fallFlyTicksComponent,
        struct StateVectorComponent&             stateVectorComponent
    );

    // NOLINTEND
};
