#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"

class EventingRequestSystem {
public:
    // prevent constructor by default
    EventingRequestSystem& operator=(EventingRequestSystem const&);
    EventingRequestSystem(EventingRequestSystem const&);
    EventingRequestSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@EventingRequestSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_eventingRequestSystem@EventingRequestSystem@@CAXAEBVStrictEntityContext@@AEAUEventingRequestQueueComponent@@AEAVLevelComponent@@@Z
    MCAPI static void _eventingRequestSystem(
        class StrictEntityContext const&,
        struct EventingRequestQueueComponent&,
        class LevelComponent& levelComponent
    );

    // symbol:
    // ?_tickEventingRequestSystem@EventingRequestSystem@@CAXV?$ViewT@VStrictEntityContext@@UEventingRequestQueueComponent@@VLevelComponent@@@@@Z
    MCAPI static void _tickEventingRequestSystem(
        class ViewT<class StrictEntityContext, struct EventingRequestQueueComponent, class LevelComponent> view
    );

    // NOLINTEND
};
