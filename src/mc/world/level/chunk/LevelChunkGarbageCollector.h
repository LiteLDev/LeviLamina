#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/MPMCQueue.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class LevelChunk;
struct LevelChunkFinalDeleter;
// clang-format on

class LevelChunkGarbageCollector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&> mDimension;
    ::ll::TypedStorage<8, 616, ::MPMCQueue<::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter>>>
                                                    mLevelChunksToDiscard;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>> mPendingDeletes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LevelChunkGarbageCollector(::Dimension& dim);

    MCAPI void flush();

    MCAPI uint64 getPendingDeletesCount() const;

    MCAPI ~LevelChunkGarbageCollector();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Dimension& dim);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
