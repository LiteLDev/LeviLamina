#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct TickingSystemWithInfo;
struct WaterAnimalFlagComponent;
// clang-format on

class WaterAnimalPreAIStepSystem {
public:
    // prevent constructor by default
    WaterAnimalPreAIStepSystem& operator=(WaterAnimalPreAIStepSystem const&);
    WaterAnimalPreAIStepSystem(WaterAnimalPreAIStepSystem const&);
    WaterAnimalPreAIStepSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _doWaterAnimalPreAIStepSystem(::StrictEntityContext const&, ::ActorOwnerComponent& actorOwnerComponent);

    MCAPI static void
    _tickWaterAnimalPreAIStepSystem(::ViewT<
                                    ::StrictEntityContext,
                                    ::Include<::ActorMovementTickNeededComponent, ::WaterAnimalFlagComponent>,
                                    ::ActorOwnerComponent> view);

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
