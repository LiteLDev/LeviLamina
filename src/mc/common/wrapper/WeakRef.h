#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class WeakRef {
public:
    // prevent constructor by default
    WeakRef& operator=(WeakRef const&);
    WeakRef(WeakRef const&);
    WeakRef();
};
