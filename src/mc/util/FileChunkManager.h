#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/MovePriorityQueue.h"

// auto generated forward declare list
// clang-format off
struct FileChunk;
struct FileChunkInfo;
// clang-format on

class FileChunkManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                                                      mTotalSize;
    ::ll::TypedStorage<4, 4, uint>                                                        mChunkSize;
    ::ll::TypedStorage<8, 8, uint64>                                                      mTotalNbChunks;
    ::ll::TypedStorage<8, 8, uint64>                                                      mRequestedChunks;
    ::ll::TypedStorage<8, 8, uint64>                                                      mReceivedChunks;
    ::ll::TypedStorage<8, 8, uint64>                                                      mWrittenChunks;
    ::ll::TypedStorage<8, 24, ::std::vector<::FileChunkInfo>>                             mChunkInfo;
    ::ll::TypedStorage<8, 24, ::MovePriorityQueue<::FileChunk, ::std::less<::FileChunk>>> mChunkQueue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileChunkManager();

    MCNAPI void _generateChunkInfo();

#ifdef LL_PLAT_C
    MCNAPI bool canWriteChunk() const;

    MCNAPI ::FileChunk dequeueChunk();

    MCNAPI int getAndIncrementNextChunk();
#endif

    MCNAPI ::FileChunkInfo getChunkInfo(int chunkID) const;

    MCNAPI ::std::vector<::FileChunkInfo> const& getChunks() const;

#ifdef LL_PLAT_C
    MCNAPI uint64 getDownloadedBytes() const;

    MCNAPI float getProgress() const;
#endif

    MCNAPI int getTotalNumberOfChunks();

#ifdef LL_PLAT_C
    MCNAPI void queueReceivedChunk(::FileChunk&& chunk);

    MCNAPI bool requestedAllChunks() const;

    MCNAPI void reset();
#endif

    MCNAPI void reset(uint64 totalSize, uint chunkSize);

#ifdef LL_PLAT_C
    MCNAPI bool writtenAllChunks() const;

    MCNAPI ~FileChunkManager();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
