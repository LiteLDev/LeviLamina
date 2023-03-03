/**
 * @file  NetworkChunkPublisher.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetworkChunkPublisher.
 *
 */
class NetworkChunkPublisher {

#define AFTER_EXTRA
// Add Member There
public:
    ChunkViewSource* getChunkViewSource() {
        // in function NetworkChunkPublisher::clearRegion
        // - Call ChunkViewSource::clear(ChunkViewSource* this);

        return *((ChunkViewSource**)((__int64)this + 0xE0));
    }
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKCHUNKPUBLISHER
public:
    class NetworkChunkPublisher& operator=(class NetworkChunkPublisher const &) = delete;
    NetworkChunkPublisher(class NetworkChunkPublisher const &) = delete;
    NetworkChunkPublisher() = delete;
#endif

public:
    /**
     * @symbol  ??0NetworkChunkPublisher\@\@QEAA\@AEAVLevel\@\@AEBVNetworkIdentifier\@\@W4SubClientId\@\@\@Z
     */
    MCAPI NetworkChunkPublisher(class Level &, class NetworkIdentifier const &, enum class SubClientId);
    /**
     * @symbol  ?clearRegion\@NetworkChunkPublisher\@\@QEAAXXZ
     */
    MCAPI void clearRegion();
    /**
     * @symbol  ?destroyRegion\@NetworkChunkPublisher\@\@QEAAXXZ
     */
    MCAPI void destroyRegion();
    /**
     * @symbol  ?getChunksSentSinceStart\@NetworkChunkPublisher\@\@QEBAHXZ
     */
    MCAPI int getChunksSentSinceStart() const;
    /**
     * @symbol  ?is2DPositionRelevant\@NetworkChunkPublisher\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool is2DPositionRelevant(class BlockPos const &) const;
    /**
     * @symbol  ?moveRegion\@NetworkChunkPublisher\@\@QEAAXAEBVBlockPos\@\@IAEBVVec3\@\@M\@Z
     */
    MCAPI void moveRegion(class BlockPos const &, unsigned int, class Vec3 const &, float);
    /**
     * @symbol  ?prepareRegion\@NetworkChunkPublisher\@\@QEAAXAEAVChunkSource\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI void prepareRegion(class ChunkSource &, class ChunkPos const &);
    /**
     * @symbol  ?resetInitialSpawn\@NetworkChunkPublisher\@\@QEAAXXZ
     */
    MCAPI void resetInitialSpawn();
    /**
     * @symbol  ?sendQueuedChunks\@NetworkChunkPublisher\@\@QEAAXXZ
     */
    MCAPI void sendQueuedChunks();
    /**
     * @symbol  ?setServerSettings\@NetworkChunkPublisher\@\@QEAAXAEAVNetworkHandler\@\@AEAVActiveTransfersManager\@Server\@ClientBlobCache\@\@\@Z
     */
    MCAPI void setServerSettings(class NetworkHandler &, class ClientBlobCache::Server::ActiveTransfersManager &);

//private:
    /**
     * @symbol  ?_isWaitingForFullyBuiltChunks\@NetworkChunkPublisher\@\@AEBA_NXZ
     */
    MCAPI bool _isWaitingForFullyBuiltChunks() const;
    /**
     * @symbol  ?_sendQueuedChunk\@NetworkChunkPublisher\@\@AEAA_NAEBUChunkPositionAndDimension\@\@PEAVTransferBuilder\@Server\@ClientBlobCache\@\@\@Z
     */
    MCAPI bool _sendQueuedChunk(struct ChunkPositionAndDimension const &, class ClientBlobCache::Server::TransferBuilder *);
    /**
     * @symbol  ?_serializeAndCache\@NetworkChunkPublisher\@\@AEAAXAEAVLevelChunkPacket\@\@AEAVTransferBuilder\@Server\@ClientBlobCache\@\@$$QEAV?$function\@$$A6AXAEAVVarIntDataOutput\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void _serializeAndCache(class LevelChunkPacket &, class ClientBlobCache::Server::TransferBuilder &, class std::function<void (class VarIntDataOutput &)> &&);

private:

};