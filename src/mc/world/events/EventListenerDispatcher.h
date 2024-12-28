#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class EventListenerDispatcher {
public:
    // prevent constructor by default
    EventListenerDispatcher& operator=(EventListenerDispatcher const&);
    EventListenerDispatcher(EventListenerDispatcher const&);
    EventListenerDispatcher();
};
