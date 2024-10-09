#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class ResetActionStopSystem {
public:
    // prevent constructor by default
    ResetActionStopSystem& operator=(ResetActionStopSystem const&);
    ResetActionStopSystem(ResetActionStopSystem const&);
    ResetActionStopSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createResetActionStopSystem();

    MCAPI static void tickResetActionStopSystem(class ViewT<
                                                class StrictEntityContext,
                                                struct Include<
                                                    class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                    class FlagComponent<struct LocalPlayerComponentFlag>>,
                                                struct ActionOrStopComponent> view);

    // NOLINTEND
};
