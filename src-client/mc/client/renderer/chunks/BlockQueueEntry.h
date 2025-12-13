#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockQueueEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnke42923;
    ::ll::UntypedStorage<8, 8>  mUnk5390c0;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockQueueEntry& operator=(BlockQueueEntry const&);
    BlockQueueEntry(BlockQueueEntry const&);
    BlockQueueEntry();
};
