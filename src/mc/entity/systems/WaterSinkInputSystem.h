#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct PlayerInputRequestComponent;
struct StateVectorComponent;
struct WasInWaterFlagComponent;
// clang-format on

class WaterSinkInputSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void doInWaterSinkInputSystem(
        ::MovementAbilitiesComponent const& abilitiesComponent,
        ::MoveInputComponent const&         moveInputComponent,
        ::StateVectorComponent&             stateVectorComponent
    );

    MCNAPI static void tickWaterSinkInputSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent, ::PlayerInputRequestComponent, ::WasInWaterFlagComponent>,
            ::MovementAbilitiesComponent const,
            ::MoveInputComponent const,
            ::StateVectorComponent> view
    );
    // NOLINTEND
};
