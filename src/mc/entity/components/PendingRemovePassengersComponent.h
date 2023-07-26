#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PendingRemovePassengersComponent {

public:
    // prevent constructor by default
    PendingRemovePassengersComponent& operator=(PendingRemovePassengersComponent const&) = delete;
    PendingRemovePassengersComponent(PendingRemovePassengersComponent const&)            = delete;
    PendingRemovePassengersComponent()                                                   = delete;
};
