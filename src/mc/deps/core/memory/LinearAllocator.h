#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/memory/AllocatorData.h"

template <typename T0>
class LinearAllocator {
public:
    using value_type = T0;
    std::shared_ptr<AllocatorData> mData;

public:
#ifdef LL_PLAT_C
    MCAPI T0* allocate(size_t n);
#endif
};
