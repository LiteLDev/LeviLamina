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
    MCNAPI void _generateChunkInfo();

    MCNAPI void reset(uint64 totalSize, uint chunkSize);
    // NOLINTEND
};
