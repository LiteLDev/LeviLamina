#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class WeakPtr {
public:
    // prevent constructor by default
    WeakPtr& operator=(WeakPtr const&);
    WeakPtr(WeakPtr const&);
    WeakPtr();
};
