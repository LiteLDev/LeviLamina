#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class MPMCQueue {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MPMCQUEUE
public:
    MPMCQueue& operator=(MPMCQueue const&) = delete;
    MPMCQueue(MPMCQueue const&)            = delete;
    MPMCQueue()                            = delete;
#endif

public:
};
