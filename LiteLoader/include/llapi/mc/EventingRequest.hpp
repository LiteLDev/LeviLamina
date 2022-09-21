/**
 * @file  MC/EventingRequest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct EventingRequest {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EVENTINGREQUEST
public:
    struct EventingRequest& operator=(struct EventingRequest const &) = delete;
    EventingRequest(struct EventingRequest const &) = delete;
    EventingRequest() = delete;
#endif

public:
    /**
     * @symbol ??1EventingRequest@@QEAA@XZ
     */
    MCAPI ~EventingRequest();
    /**
     * @symbol ?addPlayerBounced@EventingRequest@@SA?AU1@AEBUActorUniqueID@@AEBVBlock@@H@Z
     */
    MCAPI static struct EventingRequest addPlayerBounced(struct ActorUniqueID const &, class Block const &, int);

};