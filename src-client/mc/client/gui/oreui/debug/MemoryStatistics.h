#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct MemoryStatistics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mTotalSize;
    ::ll::TypedStorage<8, 8, uint64> mAllocatedSize;
    ::ll::TypedStorage<8, 8, uint64> mDeallocatedSize;
    ::ll::TypedStorage<8, 8, uint64> mTotalVirtualReservedSize;
    ::ll::TypedStorage<8, 8, uint64> mTotalVirtualCommittedSize;
    ::ll::TypedStorage<8, 8, uint64> mTotalCount;
    ::ll::TypedStorage<8, 8, uint64> mAllocationsCount;
    ::ll::TypedStorage<8, 8, uint64> mDeallocationsCount;
    // NOLINTEND
};

} // namespace OreUI
