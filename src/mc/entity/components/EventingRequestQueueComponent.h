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
    // symbol: ??0EventingRequestQueueComponent@@QEAA@$$QEAU0@@Z
    MCAPI EventingRequestQueueComponent(struct EventingRequestQueueComponent&&);

    // NOLINTEND
};
