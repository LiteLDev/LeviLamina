#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sigslot {

template <typename T0, typename T1>
class signal_with_thread_policy {
public:
    // prevent constructor by default
    signal_with_thread_policy& operator=(signal_with_thread_policy const&);
    signal_with_thread_policy(signal_with_thread_policy const&);
    signal_with_thread_policy();
};

}; // namespace sigslot
