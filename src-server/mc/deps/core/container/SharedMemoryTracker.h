#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

struct SharedMemoryTracker {
public:
    // SharedMemoryTracker inner types declare
    // clang-format off
    struct SharedMemoryTrackerBase;
    template<typename T0> class SharedMemoryTrackerImpl;
    // clang-format on

    // SharedMemoryTracker inner types define
    struct SharedMemoryTrackerBase {};

    template <typename T0>
    class SharedMemoryTrackerImpl {};
};

} // namespace Core
