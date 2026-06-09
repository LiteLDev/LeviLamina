#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

class VirtualAllocatorStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>> mTotalReservations;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>> mTotalCommits;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>> mReservedMemory;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>> mCommittedMemory;
    // NOLINTEND
};

} // namespace Bedrock::Memory
