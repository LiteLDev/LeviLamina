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
    // symbol: ??0LevelChunkGarbageCollector@@QEAA@AEAVDimension@@@Z
    MCAPI explicit LevelChunkGarbageCollector(class Dimension& dim);

    // symbol:
    // ?acquireDiscardedChunk@LevelChunkGarbageCollector@@QEAAXV?$unique_ptr@VLevelChunk@@U?$default_delete@VLevelChunk@@@std@@@std@@@Z
    MCAPI void acquireDiscardedChunk(std::unique_ptr<class LevelChunk> discarded);

    // symbol: ?getPendingDeletesCount@LevelChunkGarbageCollector@@QEBA_KXZ
    MCAPI uint64 getPendingDeletesCount() const;

    // symbol: ??1LevelChunkGarbageCollector@@QEAA@XZ
    MCAPI ~LevelChunkGarbageCollector();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?flush@LevelChunkGarbageCollector@@IEAAXXZ
    MCAPI void flush();

    // NOLINTEND
};
