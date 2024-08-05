#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/SubClientId.h"

class ChunkGenerationManager {
public:
    // prevent constructor by default
    ChunkGenerationManager& operator=(ChunkGenerationManager const&);
    ChunkGenerationManager(ChunkGenerationManager const&);
    ChunkGenerationManager();

public:
    // NOLINTBEGIN
    MCAPI void
    addServerChunksToPacket(class NetworkIdentifier const&, ::SubClientId, class NetworkChunkPublisherUpdatePacket&);

    MCAPI ~ChunkGenerationManager();

    // NOLINTEND
};
