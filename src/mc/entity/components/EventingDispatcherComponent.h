#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EventingDispatcherComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EVENTINGDISPATCHERCOMPONENT
public:
    EventingDispatcherComponent& operator=(EventingDispatcherComponent const&) = delete;
    EventingDispatcherComponent(EventingDispatcherComponent const&)            = delete;
    EventingDispatcherComponent()                                              = delete;
#endif

public:
};
