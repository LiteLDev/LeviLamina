#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkGenerationManager {

public:
    // prevent constructor by default
    ChunkGenerationManager& operator=(ChunkGenerationManager const&) = delete;
    ChunkGenerationManager(ChunkGenerationManager const&)            = delete;

public:
    /**
     * @symbol ??0ChunkGenerationManager\@\@QEAA\@XZ
     */
    MCAPI ChunkGenerationManager(); // NOLINT
    /**
     * @symbol
     * ?addServerChunksToPacket\@ChunkGenerationManager\@\@QEAAXAEBVNetworkIdentifier\@\@W4SubClientId\@\@AEAVNetworkChunkPublisherUpdatePacket\@\@\@Z
     */
    MCAPI void
    addServerChunksToPacket(class NetworkIdentifier const&, enum class SubClientId, class NetworkChunkPublisherUpdatePacket&); // NOLINT
    /**
     * @symbol ?clearAllGenerationRequests\@ChunkGenerationManager\@\@QEAAXAEBVNetworkIdentifier\@\@W4SubClientId\@\@\@Z
     */
    MCAPI void clearAllGenerationRequests(class NetworkIdentifier const&, enum class SubClientId); // NOLINT
    /**
     * @symbol
     * ?hasPendingGenerationRequests\@ChunkGenerationManager\@\@QEBA_NAEBVNetworkIdentifier\@\@W4SubClientId\@\@\@Z
     */
    MCAPI bool hasPendingGenerationRequests(class NetworkIdentifier const&, enum class SubClientId) const; // NOLINT
    /**
     * @symbol
     * ?queueChunkGenerationRequest\@ChunkGenerationManager\@\@QEAAXAEBVNetworkIdentifier\@\@W4SubClientId\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI void
    queueChunkGenerationRequest(class NetworkIdentifier const&, enum class SubClientId, class ChunkPos const&); // NOLINT
    /**
     * @symbol ??1ChunkGenerationManager\@\@QEAA\@XZ
     */
    MCAPI ~ChunkGenerationManager(); // NOLINT
};
