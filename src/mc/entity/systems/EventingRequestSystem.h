#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"

class EventingRequestSystem {

public:
    // prevent constructor by default
    EventingRequestSystem& operator=(EventingRequestSystem const&) = delete;
    EventingRequestSystem(EventingRequestSystem const&)            = delete;
    EventingRequestSystem()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@EventingRequestSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_eventingRequestSystem\@EventingRequestSystem\@\@CAXAEBVStrictEntityContext\@\@AEAUEventingRequestQueueComponent\@\@AEAVLevelComponent\@\@\@Z
     */
    MCAPI static void
    _eventingRequestSystem(class StrictEntityContext const&, struct EventingRequestQueueComponent&, class LevelComponent&);
    /**
     * @symbol
     * ?_tickEventingRequestSystem\@EventingRequestSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@UEventingRequestQueueComponent\@\@VLevelComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickEventingRequestSystem(class ViewT<
                                                 class StrictEntityContext,
                                                 class EntityRegistryBase,
                                                 struct EventingRequestQueueComponent,
                                                 class LevelComponent>);
    // NOLINTEND
};
