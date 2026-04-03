#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/MemoryCategory.h"

namespace Memory {

struct MemoryCategoryCounter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Memory::MemoryCategory> mCategory;
    ::ll::TypedStorage<8, 8, uint64>                   mCurrentBytes;
    struct {
        ::ll::TypedStorage<8, 8, uint64> mTotalAllocationCount;
        ::ll::TypedStorage<4, 4, uint>   mCurrentAllocationCount;
        ::ll::TypedStorage<4, 4, uint>   mMaxAllocationCount;
        ::ll::TypedStorage<8, 8, uint64> mMaxBytes;
    } detailed;
    // NOLINTEND
};

} // namespace Memory
