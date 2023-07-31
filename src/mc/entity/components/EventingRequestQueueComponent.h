#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EventingRequestQueueComponent {

public:
    // prevent constructor by default
    EventingRequestQueueComponent& operator=(EventingRequestQueueComponent const&) = delete;
    EventingRequestQueueComponent(EventingRequestQueueComponent const&)            = delete;
    EventingRequestQueueComponent()                                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0EventingRequestQueueComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI EventingRequestQueueComponent(struct EventingRequestQueueComponent&&);
    // NOLINTEND
};
