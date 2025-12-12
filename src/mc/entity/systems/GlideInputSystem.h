#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct FallFlyTicksComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct PlayerInputRequestComponent;
struct StateVectorComponent;
// clang-format on

class GlideInputSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void doGlideInputSystem(
        ::MovementAbilitiesComponent const& abilitiesComponent,
        ::MoveInputComponent const&         moveInputComponent,
        ::ActorDataFlagComponent const&     synchedActorDataComponent,
        ::FallFlyTicksComponent&            fallFlyTicksComponent,
        ::StateVectorComponent&             stateVectorComponent
    );

    MCNAPI static void tickGlideInputSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent, ::PlayerInputRequestComponent>,
            ::MovementAbilitiesComponent const,
            ::MoveInputComponent const,
            ::ActorDataFlagComponent const,
            ::FallFlyTicksComponent,
            ::StateVectorComponent> view
    );
    // NOLINTEND
};
