#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkGenerationManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKGENERATIONMANAGER
public:
    ChunkGenerationManager& operator=(ChunkGenerationManager const&) = delete;
    ChunkGenerationManager(ChunkGenerationManager const&)            = delete;
#endif

public:
    /**
     * @symbol ??0ChunkGenerationManager\@\@QEAA\@XZ
     */
    MCAPI ChunkGenerationManager();
    /**
     * @symbol
     * ?addServerChunksToPacket\@ChunkGenerationManager\@\@QEAAXAEBVNetworkIdentifier\@\@W4SubClientId\@\@AEAVNetworkChunkPublisherUpdatePacket\@\@\@Z
     */
    MCAPI void
    addServerChunksToPacket(class NetworkIdentifier const&, enum class SubClientId, class NetworkChunkPublisherUpdatePacket&);
    /**
     * @symbol ?clearAllGenerationRequests\@ChunkGenerationManager\@\@QEAAXAEBVNetworkIdentifier\@\@W4SubClientId\@\@\@Z
     */
    MCAPI void clearAllGenerationRequests(class NetworkIdentifier const&, enum class SubClientId);
    /**
     * @symbol
     * ?hasPendingGenerationRequests\@ChunkGenerationManager\@\@QEBA_NAEBVNetworkIdentifier\@\@W4SubClientId\@\@\@Z
     */
    MCAPI bool hasPendingGenerationRequests(class NetworkIdentifier const&, enum class SubClientId) const;
    /**
     * @symbol
     * ?queueChunkGenerationRequest\@ChunkGenerationManager\@\@QEAAXAEBVNetworkIdentifier\@\@W4SubClientId\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI void
    queueChunkGenerationRequest(class NetworkIdentifier const&, enum class SubClientId, class ChunkPos const&);
    /**
     * @symbol ??1ChunkGenerationManager\@\@QEAA\@XZ
     */
    MCAPI ~ChunkGenerationManager();
};
