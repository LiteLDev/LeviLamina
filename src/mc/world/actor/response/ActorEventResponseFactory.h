#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorEventResponseFactory {

public:
    // prevent constructor by default
    ActorEventResponseFactory& operator=(ActorEventResponseFactory const&) = delete;
    ActorEventResponseFactory(ActorEventResponseFactory const&)            = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTOREVENTRESPONSEFACTORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorEventResponseFactory();
#endif
    /**
     * @symbol ??0ActorEventResponseFactory\@\@QEAA\@XZ
     */
    MCAPI ActorEventResponseFactory();
    /**
     * @symbol ?initSchema\@ActorEventResponseFactory\@\@QEAAXXZ
     */
    MCAPI void initSchema();
    /**
     * @symbol ?initializeFactory\@ActorEventResponseFactory\@\@QEAAXAEBVExperiments\@\@\@Z
     */
    MCAPI void initializeFactory(class Experiments const&);
    // NOLINTEND
};
