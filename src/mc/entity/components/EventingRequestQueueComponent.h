#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EventingRequestQueueComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EVENTINGREQUESTQUEUECOMPONENT
public:
    EventingRequestQueueComponent& operator=(EventingRequestQueueComponent const&) = delete;
    EventingRequestQueueComponent(EventingRequestQueueComponent const&)            = delete;
    EventingRequestQueueComponent()                                                = delete;
#endif

public:
    /**
     * @symbol ??0EventingRequestQueueComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI EventingRequestQueueComponent(struct EventingRequestQueueComponent&&);
};
