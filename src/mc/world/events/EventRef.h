#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class EventRef {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EVENTREF
public:
    EventRef& operator=(EventRef const&) = delete;
    EventRef(EventRef const&)            = delete;
    EventRef()                           = delete;
#endif

public:
};
