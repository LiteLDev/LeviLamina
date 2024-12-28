#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class EventCoordinatorNoTracking {
public:
    // prevent constructor by default
    EventCoordinatorNoTracking& operator=(EventCoordinatorNoTracking const&);
    EventCoordinatorNoTracking(EventCoordinatorNoTracking const&);
    EventCoordinatorNoTracking();
};
