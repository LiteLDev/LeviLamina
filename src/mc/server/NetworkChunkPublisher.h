#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace ClientBlobCache::Server { class TransferBuilder; }
// clang-format on

class NetworkChunkPublisher {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKCHUNKPUBLISHER
public:
    NetworkChunkPublisher& operator=(NetworkChunkPublisher const&) = delete;
    NetworkChunkPublisher(NetworkChunkPublisher const&)            = delete;
    NetworkChunkPublisher()                                        = delete;
#endif

public:
    /**
     * @symbol ??0NetworkChunkPublisher\@\@QEAA\@AEAVLevel\@\@AEBVNetworkIdentifier\@\@W4SubClientId\@\@\@Z
     */
    MCAPI NetworkChunkPublisher(class Level&, class NetworkIdentifier const&, enum class SubClientId);
    /**
     * @symbol ?clearRegion\@NetworkChunkPublisher\@\@QEAAXXZ
     */
    MCAPI void clearRegion();
    /**
     * @symbol ?destroyRegion\@NetworkChunkPublisher\@\@QEAAXXZ
     */
    MCAPI void destroyRegion();
    /**
     * @symbol ?getChunksSentSinceStart\@NetworkChunkPublisher\@\@QEBAHXZ
     */
    MCAPI int getChunksSentSinceStart() const;
    /**
     * @symbol ?is2DPositionRelevant\@NetworkChunkPublisher\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool is2DPositionRelevant(class BlockPos const&) const;
    /**
     * @symbol ?moveRegion\@NetworkChunkPublisher\@\@QEAAXAEBVBlockPos\@\@IAEBVVec3\@\@M\@Z
     */
    MCAPI void moveRegion(class BlockPos const&, unsigned int, class Vec3 const&, float);
    /**
     * @symbol ?prepareRegion\@NetworkChunkPublisher\@\@QEAAXAEAVChunkSource\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI void prepareRegion(class ChunkSource&, class ChunkPos const&);
    /**
     * @symbol ?resetInitialSpawn\@NetworkChunkPublisher\@\@QEAAXXZ
     */
    MCAPI void resetInitialSpawn();
    /**
     * @symbol ?sendQueuedChunks\@NetworkChunkPublisher\@\@QEAAXXZ
     */
    MCAPI void sendQueuedChunks();
    /**
     * @symbol
     * ?setServerSettings\@NetworkChunkPublisher\@\@QEAAXAEAVNetworkSystem\@\@AEAVActiveTransfersManager\@Server\@ClientBlobCache\@\@\@Z
     */
    MCAPI void setServerSettings(class NetworkSystem&, class ClientBlobCache::Server::ActiveTransfersManager&);

    // private:
    /**
     * @symbol ?_isWaitingForFullyBuiltChunks\@NetworkChunkPublisher\@\@AEBA_NXZ
     */
    MCAPI bool _isWaitingForFullyBuiltChunks() const;
    /**
     * @symbol
     * ?_sendQueuedChunk\@NetworkChunkPublisher\@\@AEAA_NAEBUChunkPositionAndDimension\@\@PEAVTransferBuilder\@Server\@ClientBlobCache\@\@\@Z
     */
    MCAPI bool
    _sendQueuedChunk(struct ChunkPositionAndDimension const&, class ClientBlobCache::Server::TransferBuilder*);
    /**
     * @symbol
     * ?_serializeAndCache\@NetworkChunkPublisher\@\@AEAAXAEAVLevelChunkPacket\@\@AEAVTransferBuilder\@Server\@ClientBlobCache\@\@$$QEAV?$function\@$$A6AXAEAVVarIntDataOutput\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void
    _serializeAndCache(class LevelChunkPacket&, class ClientBlobCache::Server::TransferBuilder&, class std::function<void(class VarIntDataOutput&)>&&);

private:
};
