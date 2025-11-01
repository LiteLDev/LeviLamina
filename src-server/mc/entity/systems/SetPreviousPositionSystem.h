#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct NeedSetPreviousPositionFlagComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class SetPreviousPositionSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _doSetPreviousPositionSystem(::StrictEntityContext const&, ::StateVectorComponent& stateVectorComponent);

    MCNAPI static void _tickSetPreviousPositionSystem(::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent, ::NeedSetPreviousPositionFlagComponent>, ::StateVectorComponent> view);

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND

};
