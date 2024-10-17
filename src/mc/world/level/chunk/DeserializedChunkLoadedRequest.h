#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DeserializedChunkLoadedRequest {
public:
    // prevent constructor by default
    DeserializedChunkLoadedRequest& operator=(DeserializedChunkLoadedRequest const&);
    DeserializedChunkLoadedRequest(DeserializedChunkLoadedRequest const&);
    DeserializedChunkLoadedRequest();

public:
    // NOLINTBEGIN
    MCAPI ~DeserializedChunkLoadedRequest();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
