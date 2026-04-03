#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class SharedMemoryTracker {
public:
    // SharedMemoryTracker inner types declare
    // clang-format off
    class SharedMemoryTrackerBase;
    template<typename T0> class SharedMemoryTrackerImpl;
    // clang-format on

    // SharedMemoryTracker inner types define
    class SharedMemoryTrackerBase {};

    template <typename T0>
    class SharedMemoryTrackerImpl {};
};

} // namespace Core
