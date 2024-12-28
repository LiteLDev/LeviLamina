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
struct TickingSystemWithInfo;
struct WasInWaterFlagComponent;
// clang-format on

class WaterSinkInputSystem {
public:
    // prevent constructor by default
    WaterSinkInputSystem& operator=(WaterSinkInputSystem const&);
    WaterSinkInputSystem(WaterSinkInputSystem const&);
    WaterSinkInputSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createWaterSinkInputSystem();

    MCAPI static void doInWaterSinkInputSystem(
        ::MovementAbilitiesComponent const& abilitiesComponent,
        ::MoveInputComponent const&         moveInputComponent,
        ::StateVectorComponent&             stateVectorComponent
    );

    MCAPI static void tickWaterSinkInputSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent, ::PlayerInputRequestComponent, ::WasInWaterFlagComponent>,
            ::MovementAbilitiesComponent const,
            ::MoveInputComponent const,
            ::StateVectorComponent> view
    );
    // NOLINTEND
};
