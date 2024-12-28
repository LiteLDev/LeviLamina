#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

template <typename T0>
class WeakPtr {
public:
    // prevent constructor by default
    WeakPtr& operator=(WeakPtr const&);
    WeakPtr(WeakPtr const&);
    WeakPtr();
};

} // namespace rtc
