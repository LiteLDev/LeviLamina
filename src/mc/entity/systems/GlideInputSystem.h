#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorDataFlagComponent;
struct FallFlyTicksComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class GlideInputSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createGlideInputSystem();

    MCAPI static void doGlideInputSystem(
        ::MovementAbilitiesComponent const& abilitiesComponent,
        ::MoveInputComponent const&         moveInputComponent,
        ::ActorDataFlagComponent const&     synchedActorDataComponent,
        ::FallFlyTicksComponent&            fallFlyTicksComponent,
        ::StateVectorComponent&             stateVectorComponent
    );
    // NOLINTEND
};
