/**
 * @file  MC/NetworkChunkPublisher.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ChunkSource.hpp"

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
     * @hash   -1619332096
     * @symbol ??0NetworkChunkPublisher@@QEAA@AEAVLevel@@AEBVNetworkIdentifier@@W4SubClientId@@@Z
     */
    MCAPI NetworkChunkPublisher(class Level &, class NetworkIdentifier const &, enum SubClientId);
    /**
     * @hash   -1222344042
     * @symbol ?addSavedChunk@NetworkChunkPublisher@@QEAAXAEBVChunkPos@@@Z
     */
    MCAPI void addSavedChunk(class ChunkPos const &);
    /**
     * @hash   -1675935593
     * @symbol ?clearRegion@NetworkChunkPublisher@@QEAAXXZ
     */
    MCAPI void clearRegion();
    /**
     * @hash   1420053009
     * @symbol ?destroyRegion@NetworkChunkPublisher@@QEAAXXZ
     */
    MCAPI void destroyRegion();
    /**
     * @hash   -147863312
     * @symbol ?getChunksSentSinceStart@NetworkChunkPublisher@@QEBAHXZ
     */
    MCAPI int getChunksSentSinceStart() const;
    /**
     * @hash   -553952401
     * @symbol ?is2DPositionRelevant@NetworkChunkPublisher@@QEBA_NAEBVBlockPos@@@Z
     */
    MCAPI bool is2DPositionRelevant(class BlockPos const &) const;
    /**
     * @hash   -221893330
     * @symbol ?moveRegion@NetworkChunkPublisher@@QEAAXAEBVBlockPos@@IAEBVVec3@@W4ChunkSourceViewGenerateMode@ChunkSource@@M@Z
     */
    MCAPI void moveRegion(class BlockPos const &, unsigned int, class Vec3 const &, enum ChunkSource::ChunkSourceViewGenerateMode, float);
    /**
     * @hash   141490713
     * @symbol ?prepareRegion@NetworkChunkPublisher@@QEAAXAEAVChunkSource@@AEBVChunkPos@@@Z
     */
    MCAPI void prepareRegion(class ChunkSource &, class ChunkPos const &);
    /**
     * @hash   -1047572219
     * @symbol ?sendQueuedChunks@NetworkChunkPublisher@@QEAAXXZ
     */
    MCAPI void sendQueuedChunks();
    /**
     * @hash   1196754025
     * @symbol ?setServerSettings@NetworkChunkPublisher@@QEAAXAEAVNetworkHandler@@AEAVActiveTransfersManager@Server@ClientBlobCache@@@Z
     */
    MCAPI void setServerSettings(class NetworkHandler &, class ClientBlobCache::Server::ActiveTransfersManager &);

//private:
    /**
     * @hash   807100335
     * @symbol ?_sendQueuedChunk@NetworkChunkPublisher@@AEAA_NAEBVChunkPos@@PEAVTransferBuilder@Server@ClientBlobCache@@@Z
     */
    MCAPI bool _sendQueuedChunk(class ChunkPos const &, class ClientBlobCache::Server::TransferBuilder *);
    /**
     * @hash   2026795340
     * @symbol ?_serializeAndCache@NetworkChunkPublisher@@AEAAXAEAVLevelChunkPacket@@AEAVTransferBuilder@Server@ClientBlobCache@@$$QEAV?$function@$$A6AXAEAVVarIntDataOutput@@@Z@std@@@Z
     */
    MCAPI void _serializeAndCache(class LevelChunkPacket &, class ClientBlobCache::Server::TransferBuilder &, class std::function<void (class VarIntDataOutput &)> &&);

private:

};