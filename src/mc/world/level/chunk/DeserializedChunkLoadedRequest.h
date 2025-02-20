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
    ::ll::UntypedStorage<8, 128> mUnkd56883;
    ::ll::UntypedStorage<1, 1>   mUnk8c13bb;
    // NOLINTEND

public:
    // prevent constructor by default
    DeserializedChunkLoadedRequest& operator=(DeserializedChunkLoadedRequest const&);
    DeserializedChunkLoadedRequest(DeserializedChunkLoadedRequest const&);
    DeserializedChunkLoadedRequest();

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
