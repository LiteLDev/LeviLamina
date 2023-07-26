#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EventingDispatcherComponent {

public:
    // prevent constructor by default
    EventingDispatcherComponent& operator=(EventingDispatcherComponent const&) = delete;
    EventingDispatcherComponent(EventingDispatcherComponent const&)            = delete;
    EventingDispatcherComponent()                                              = delete;
};
