#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class EventCoordinator {
public:
    // prevent constructor by default
    EventCoordinator& operator=(EventCoordinator const&);
    EventCoordinator(EventCoordinator const&);
    EventCoordinator();
};
