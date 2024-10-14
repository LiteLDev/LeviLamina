#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"

class ChunkGenerationManager {
public:
    // prevent constructor by default
    ChunkGenerationManager& operator=(ChunkGenerationManager const&);
    ChunkGenerationManager(ChunkGenerationManager const&);
    ChunkGenerationManager();

public:
    // NOLINTBEGIN
    MCAPI void addServerChunksToPacket(
        class NetworkIdentifier const&           player,
        ::SubClientId                            clientId,
        class NetworkChunkPublisherUpdatePacket& updatePacket
    );

    MCAPI ~ChunkGenerationManager();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
