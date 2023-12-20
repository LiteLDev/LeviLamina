#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::Utils {

template <typename T0>
class ThreadSafe {
public:
    class View;

    // prevent constructor by default
    ThreadSafe& operator=(ThreadSafe const&);
    ThreadSafe(ThreadSafe const&);
    ThreadSafe();
};

}; // namespace NetherNet::Utils
