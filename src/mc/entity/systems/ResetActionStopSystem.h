#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActionOrStopComponent;
struct ActorMovementTickNeededComponent;
struct LocalPlayerComponent;
struct TickingSystemWithInfo;
// clang-format on

class ResetActionStopSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createResetActionStopSystem();

    MCAPI static void tickResetActionStopSystem(::ViewT<
                                                ::StrictEntityContext,
                                                ::Include<::ActorMovementTickNeededComponent, ::LocalPlayerComponent>,
                                                ::ActionOrStopComponent> view);
    // NOLINTEND
};
