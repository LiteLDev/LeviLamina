#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelChunkGarbageCollector {

    Dimension& mDimension; // this+0x0

    // MPMCQueue<std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>>
    char              mLevelChunksToDiscard[0x268]; // this+0x8
    std::atomic_ulong mPendingDeletes;              // this+0x270
public:
    // prevent constructor by default
    LevelChunkGarbageCollector& operator=(LevelChunkGarbageCollector const&);
    LevelChunkGarbageCollector(LevelChunkGarbageCollector const&);
    LevelChunkGarbageCollector();

public:
    // NOLINTBEGIN
    MCAPI explicit LevelChunkGarbageCollector(class Dimension& dim);

    MCAPI uint64 getPendingDeletesCount() const;

    MCAPI ~LevelChunkGarbageCollector();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void flush();

    // NOLINTEND
};
