#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace ClientBlobCache::Server { class TransferBuilder; }
// clang-format on

class NetworkChunkPublisher {

public:
    // prevent constructor by default
    NetworkChunkPublisher& operator=(NetworkChunkPublisher const&) = delete;
    NetworkChunkPublisher(NetworkChunkPublisher const&)            = delete;
    NetworkChunkPublisher()                                        = delete;

public:
    /**
     * @symbol ??0NetworkChunkPublisher\@\@QEAA\@AEAVLevel\@\@AEBVNetworkIdentifier\@\@W4SubClientId\@\@\@Z
     */
    MCAPI NetworkChunkPublisher(class Level&, class NetworkIdentifier const&, enum class SubClientId); // NOLINT
    /**
     * @symbol ?clearRegion\@NetworkChunkPublisher\@\@QEAAXXZ
     */
    MCAPI void clearRegion(); // NOLINT
    /**
     * @symbol ?destroyRegion\@NetworkChunkPublisher\@\@QEAAXXZ
     */
    MCAPI void destroyRegion(); // NOLINT
    /**
     * @symbol ?getChunksSentSinceStart\@NetworkChunkPublisher\@\@QEBAHXZ
     */
    MCAPI int getChunksSentSinceStart() const; // NOLINT
    /**
     * @symbol ?is2DPositionRelevant\@NetworkChunkPublisher\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool is2DPositionRelevant(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?moveRegion\@NetworkChunkPublisher\@\@QEAAXAEBVBlockPos\@\@IAEBVVec3\@\@M\@Z
     */
    MCAPI void moveRegion(class BlockPos const&, unsigned int, class Vec3 const&, float); // NOLINT
    /**
     * @symbol ?prepareRegion\@NetworkChunkPublisher\@\@QEAAXAEAVChunkSource\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI void prepareRegion(class ChunkSource&, class ChunkPos const&); // NOLINT
    /**
     * @symbol ?resetInitialSpawn\@NetworkChunkPublisher\@\@QEAAXXZ
     */
    MCAPI void resetInitialSpawn(); // NOLINT
    /**
     * @symbol ?sendQueuedChunks\@NetworkChunkPublisher\@\@QEAAXXZ
     */
    MCAPI void sendQueuedChunks(); // NOLINT
    /**
     * @symbol
     * ?setServerSettings\@NetworkChunkPublisher\@\@QEAAXAEAVNetworkSystem\@\@AEAVActiveTransfersManager\@Server\@ClientBlobCache\@\@\@Z
     */
    MCAPI void
    setServerSettings(class NetworkSystem&, class ClientBlobCache::Server::ActiveTransfersManager&); // NOLINT

    // private:
    /**
     * @symbol ?_isWaitingForFullyBuiltChunks\@NetworkChunkPublisher\@\@AEBA_NXZ
     */
    MCAPI bool _isWaitingForFullyBuiltChunks() const; // NOLINT
    /**
     * @symbol
     * ?_sendQueuedChunk\@NetworkChunkPublisher\@\@AEAA_NAEBUChunkPositionAndDimension\@\@PEAVTransferBuilder\@Server\@ClientBlobCache\@\@\@Z
     */
    MCAPI bool
    _sendQueuedChunk(struct ChunkPositionAndDimension const&, class ClientBlobCache::Server::TransferBuilder*); // NOLINT
    /**
     * @symbol
     * ?_serializeAndCache\@NetworkChunkPublisher\@\@AEAAXAEAVLevelChunkPacket\@\@AEAVTransferBuilder\@Server\@ClientBlobCache\@\@$$QEAV?$function\@$$A6AXAEAVVarIntDataOutput\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void
    _serializeAndCache(class LevelChunkPacket&, class ClientBlobCache::Server::TransferBuilder&, class std::function<void(class VarIntDataOutput&)>&&); // NOLINT

private:
};
