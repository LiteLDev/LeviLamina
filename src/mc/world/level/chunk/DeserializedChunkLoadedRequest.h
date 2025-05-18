#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkLoadedRequest.h"
#include "mc/world/level/chunk/ChunkRequestListType.h"

struct DeserializedChunkLoadedRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ChunkLoadedRequest> mChunkLoadedRequest;
    ::ll::TypedStorage<1, 1, ::ChunkRequestListType> mChunkRequestListType;
    // NOLINTEND

public:
    // prevent constructor by default
    DeserializedChunkLoadedRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DeserializedChunkLoadedRequest(
        ::ChunkLoadedRequest   chunkLoadedRequest,
        ::ChunkRequestListType chunkRequestListType
    );

    MCNAPI ~DeserializedChunkLoadedRequest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ChunkLoadedRequest chunkLoadedRequest, ::ChunkRequestListType chunkRequestListType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
