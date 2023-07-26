#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorEventResponseFactory {

public:
    // prevent constructor by default
    ActorEventResponseFactory& operator=(ActorEventResponseFactory const&) = delete;
    ActorEventResponseFactory(ActorEventResponseFactory const&)            = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTOREVENTRESPONSEFACTORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorEventResponseFactory(); // NOLINT
#endif
    /**
     * @symbol ??0ActorEventResponseFactory\@\@QEAA\@XZ
     */
    MCAPI ActorEventResponseFactory(); // NOLINT
    /**
     * @symbol ?initSchema\@ActorEventResponseFactory\@\@QEAAXXZ
     */
    MCAPI void initSchema(); // NOLINT
    /**
     * @symbol ?initializeFactory\@ActorEventResponseFactory\@\@QEAAXAEBVExperiments\@\@\@Z
     */
    MCAPI void initializeFactory(class Experiments const&); // NOLINT
};
