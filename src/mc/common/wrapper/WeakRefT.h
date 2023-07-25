#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class WeakRefT {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEAKREFT
public:
    WeakRefT& operator=(WeakRefT const&) = delete;
    WeakRefT(WeakRefT const&)            = delete;
    WeakRefT()                           = delete;
#endif

public:
};
