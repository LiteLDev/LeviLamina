#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, int T1>
struct SPSCQueue {
public:
    // prevent constructor by default
    SPSCQueue& operator=(SPSCQueue const&);
    SPSCQueue(SPSCQueue const&);
    SPSCQueue();

    std::atomic<void*> mFrontBlock;          // this+0x0
    char               mCachelineFiller[56]; // this+0x8
    std::atomic<void*> mTailBlock;           // this+0x40
    uint64_t           mLargestBlockSize;    // this+0x48
};
