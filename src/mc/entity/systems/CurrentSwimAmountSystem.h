#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class CurrentSwimAmountSystem {
public:
    // prevent constructor by default
    CurrentSwimAmountSystem& operator=(CurrentSwimAmountSystem const&);
    CurrentSwimAmountSystem(CurrentSwimAmountSystem const&);
    CurrentSwimAmountSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    MCAPI static void tick(class ViewT<
                           class StrictEntityContext,
                           struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
                           struct SwimAmountComponent,
                           struct ActorDataFlagComponent const> view);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _doCurrentSwimAmountSystem(
        class StrictEntityContext const&,
        struct SwimAmountComponent&          swimAmountComponent,
        struct ActorDataFlagComponent const& synchedActorDataComponent
    );

    // NOLINTEND
};
