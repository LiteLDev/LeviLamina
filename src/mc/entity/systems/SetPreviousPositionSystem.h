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
    // prevent constructor by default
    SetPreviousPositionSystem& operator=(SetPreviousPositionSystem const&);
    SetPreviousPositionSystem(SetPreviousPositionSystem const&);
    SetPreviousPositionSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _doSetPreviousPositionSystem(::StrictEntityContext const&, ::StateVectorComponent& stateVectorComponent);

    MCAPI static void _tickSetPreviousPositionSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent, ::NeedSetPreviousPositionFlagComponent>,
            ::StateVectorComponent> view
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
