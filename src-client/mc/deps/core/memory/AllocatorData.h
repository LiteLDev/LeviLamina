#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MemBlock;
// clang-format on

struct AllocatorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                          mTotalBlocks;
    ::ll::TypedStorage<8, 8, uint64>                          mTotalCapacity;
    ::ll::TypedStorage<8, 8, uint64>                          mTotalSize;
    ::ll::TypedStorage<8, 8, ::std::forward_list<::MemBlock>> mBlocks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addBlock(uint64 bytes);
    // NOLINTEND
};
