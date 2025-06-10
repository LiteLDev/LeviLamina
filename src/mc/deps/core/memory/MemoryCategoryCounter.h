#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Memory {

struct MemoryCategoryCounter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, char const*> mCategoryName;
    ::ll::TypedStorage<8, 8, uint64>      mCurrentBytes;
    struct {
        ::ll::TypedStorage<8, 8, uint64> mTotalAllocationCount;
        ::ll::TypedStorage<4, 4, uint>   mCurrentAllocationCount;
        ::ll::TypedStorage<4, 4, uint>   mMaxAllocationCount;
        ::ll::TypedStorage<8, 8, uint64> mMaxBytes;
    } detailed;
    // NOLINTEND
};

} // namespace Memory
