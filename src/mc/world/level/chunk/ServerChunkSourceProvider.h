#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerChunkSourceProvider {

public:
    // prevent constructor by default
    ServerChunkSourceProvider& operator=(ServerChunkSourceProvider const&) = delete;
    ServerChunkSourceProvider(ServerChunkSourceProvider const&)            = delete;
    ServerChunkSourceProvider()                                            = delete;
};
