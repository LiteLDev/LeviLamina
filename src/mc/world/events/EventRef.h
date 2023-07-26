#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class EventRef {

public:
    // prevent constructor by default
    EventRef& operator=(EventRef const&) = delete;
    EventRef(EventRef const&)            = delete;
    EventRef()                           = delete;
};
