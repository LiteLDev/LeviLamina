#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class WeakPtr {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEAKPTR
public:
    WeakPtr& operator=(WeakPtr const&) = delete;
    WeakPtr(WeakPtr const&)            = delete;
    WeakPtr()                          = delete;
#endif

public:
};
