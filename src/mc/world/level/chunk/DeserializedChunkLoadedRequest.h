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
};
