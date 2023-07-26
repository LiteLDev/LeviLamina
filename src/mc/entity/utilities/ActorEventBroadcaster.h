#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorEventBroadcaster {

public:
    // prevent constructor by default
    ActorEventBroadcaster& operator=(ActorEventBroadcaster const&) = delete;
    ActorEventBroadcaster(ActorEventBroadcaster const&)            = delete;
    ActorEventBroadcaster()                                        = delete;

public:
    /**
     * @symbol ?broadcastActorEvent\@ActorEventBroadcaster\@\@QEBAXAEAVActor\@\@W4ActorEvent\@\@HAEAVDimension\@\@\@Z
     */
    MCAPI void broadcastActorEvent(class Actor&, enum class ActorEvent, int, class Dimension&) const; // NOLINT
};
