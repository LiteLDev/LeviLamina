#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkRequestListType.h"

// auto generated forward declare list
// clang-format off
class ChunkLoadedRequest;
// clang-format on

struct DeserializedChunkLoadedRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ChunkLoadedRequest> mChunkLoadedRequest;
    ::ll::TypedStorage<1, 1, ::ChunkRequestListType> mChunkRequestListType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DeserializedChunkLoadedRequest(
        ::ChunkLoadedRequest   chunkLoadedRequest,
        ::ChunkRequestListType chunkRequestListType
    );

    MCAPI ~DeserializedChunkLoadedRequest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ChunkLoadedRequest chunkLoadedRequest, ::ChunkRequestListType chunkRequestListType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
