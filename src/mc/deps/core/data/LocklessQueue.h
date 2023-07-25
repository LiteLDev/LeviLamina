#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class LocklessQueue {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOCKLESSQUEUE
public:
    LocklessQueue& operator=(LocklessQueue const&) = delete;
    LocklessQueue(LocklessQueue const&)            = delete;
    LocklessQueue()                                = delete;
#endif

public:
};
