#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EventingRequestQueueComponent {
public:
    // prevent constructor by default
    EventingRequestQueueComponent& operator=(EventingRequestQueueComponent const&);
    EventingRequestQueueComponent(EventingRequestQueueComponent const&);
    EventingRequestQueueComponent();

public:
    // NOLINTBEGIN
    MCAPI EventingRequestQueueComponent(struct EventingRequestQueueComponent&&);

    // NOLINTEND
};
