/**
 * @file  ActorEventBroadcaster.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ActorEventBroadcaster {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTOREVENTBROADCASTER
public:
    class ActorEventBroadcaster& operator=(class ActorEventBroadcaster const &) = delete;
    ActorEventBroadcaster(class ActorEventBroadcaster const &) = delete;
    ActorEventBroadcaster() = delete;
#endif

public:
    /**
     * @symbol ?broadcastActorEvent\@ActorEventBroadcaster\@\@QEBAXAEAVActor\@\@W4ActorEvent\@\@HAEAVDimension\@\@\@Z
     */
    MCAPI void broadcastActorEvent(class Actor &, enum class ActorEvent, int, class Dimension &) const;

};
