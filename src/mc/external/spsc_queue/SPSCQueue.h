#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, int T1>
struct SPSCQueue {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPSCQUEUE
public:
    SPSCQueue& operator=(SPSCQueue const&) = delete;
    SPSCQueue(SPSCQueue const&)            = delete;
    SPSCQueue()                            = delete;
#endif

public:
};
