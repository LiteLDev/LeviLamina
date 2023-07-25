#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorEventBroadcaster {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTOREVENTBROADCASTER
public:
    ActorEventBroadcaster& operator=(ActorEventBroadcaster const&) = delete;
    ActorEventBroadcaster(ActorEventBroadcaster const&)            = delete;
    ActorEventBroadcaster()                                        = delete;
#endif

public:
    /**
     * @symbol ?broadcastActorEvent\@ActorEventBroadcaster\@\@QEBAXAEAVActor\@\@W4ActorEvent\@\@HAEAVDimension\@\@\@Z
     */
    MCAPI void broadcastActorEvent(class Actor&, enum class ActorEvent, int, class Dimension&) const;
};
