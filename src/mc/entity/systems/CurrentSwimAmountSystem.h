#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

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
    MCAPI static void
    _doCurrentSwimAmountSystem(class StrictEntityContext const&, struct SwimAmountComponent&, struct ActorDataFlagComponent const&);

    // NOLINTEND
};
