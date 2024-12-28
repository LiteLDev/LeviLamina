#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class EventHandlerDispatcher {
public:
    // prevent constructor by default
    EventHandlerDispatcher& operator=(EventHandlerDispatcher const&);
    EventHandlerDispatcher(EventHandlerDispatcher const&);
    EventHandlerDispatcher();
};
