/**
 * @file  EventingRequest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure EventingRequest.
 *
 */
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
     * @symbol  ??1EventingRequest\@\@QEAA\@XZ
     */
    MCAPI ~EventingRequest();
    /**
     * @symbol  ?addPersonaEmotePlayed\@EventingRequest\@\@SA?AU1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NH\@Z
     */
    MCAPI static struct EventingRequest addPersonaEmotePlayed(std::string const &, bool, int);
    /**
     * @symbol  ?addPlayerBounced\@EventingRequest\@\@SA?AU1\@AEBUActorUniqueID\@\@AEBVBlock\@\@H\@Z
     */
    MCAPI static struct EventingRequest addPlayerBounced(struct ActorUniqueID const &, class Block const &, int);

};