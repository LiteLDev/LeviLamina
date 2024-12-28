#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

template <typename T0>
class MemoryPool {
public:
    // prevent constructor by default
    MemoryPool& operator=(MemoryPool const&);
    MemoryPool(MemoryPool const&);
    MemoryPool();
};

} // namespace DataStructures
