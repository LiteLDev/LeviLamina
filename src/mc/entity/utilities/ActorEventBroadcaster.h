#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/ActorEvent.h"

class ActorEventBroadcaster {

public:
    // prevent constructor by default
    ActorEventBroadcaster& operator=(ActorEventBroadcaster const&) = delete;
    ActorEventBroadcaster(ActorEventBroadcaster const&)            = delete;
    ActorEventBroadcaster()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?broadcastActorEvent\@ActorEventBroadcaster\@\@QEBAXAEAVActor\@\@W4ActorEvent\@\@HAEAVDimension\@\@\@Z
     */
    MCAPI void broadcastActorEvent(class Actor&, enum class ActorEvent, int32_t, class Dimension&) const;
    // NOLINTEND
};
