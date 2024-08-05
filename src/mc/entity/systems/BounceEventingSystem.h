#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class BounceEventingSystem {
public:
    // prevent constructor by default
    BounceEventingSystem& operator=(BounceEventingSystem const&);
    BounceEventingSystem(BounceEventingSystem const&);
    BounceEventingSystem();

public:
    // NOLINTBEGIN
    MCAPI static void _tickBounceEventingSystem(class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct PlayerComponentFlag>>, struct StateVectorComponent const, struct ActorUniqueIDComponent const, struct EventingDispatcherComponent const, struct BounceComponent> view, class ViewT<class StrictEntityContext, struct EventingRequestQueueComponent>);

    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void
    _doBounceEventingSystem(class StrictEntityContext const&, struct StateVectorComponent const&, struct ActorUniqueIDComponent const&, struct EventingDispatcherComponent const&, struct BounceComponent&, class ViewT<class StrictEntityContext, struct EventingRequestQueueComponent>);

    // NOLINTEND
};
