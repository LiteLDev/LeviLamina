#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/SubClientId.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlobCache::Server { class TransferBuilder; }
// clang-format on

class ChunkViewSource;

class NetworkChunkPublisher {
public:
    [[nodiscard]] constexpr class optional_ref<ChunkViewSource> getChunkViewSource() const {
        // in function NetworkChunkPublisher::clearRegion
        // - Call ChunkViewSource::clear(ChunkViewSource* this);
        return ll::memory::dAccess<std::unique_ptr<ChunkViewSource>>(this, 0xE0).get();
    }

    // prevent constructor by default
    NetworkChunkPublisher&
    operator=(NetworkChunkPublisher const&);
    NetworkChunkPublisher(NetworkChunkPublisher const&);
    NetworkChunkPublisher();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~NetworkChunkPublisher() = default;

    // symbol: ??0NetworkChunkPublisher@@QEAA@AEAVLevel@@AEBVNetworkIdentifier@@W4SubClientId@@@Z
    MCAPI NetworkChunkPublisher(class Level&, class NetworkIdentifier const&, ::SubClientId);

    // symbol: ?clearRegion@NetworkChunkPublisher@@QEAAXXZ
    MCAPI void clearRegion();

    // symbol: ?destroyRegion@NetworkChunkPublisher@@QEAAXXZ
    MCAPI void destroyRegion();

    // symbol: ?is2DPositionRelevant@NetworkChunkPublisher@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool is2DPositionRelevant(class BlockPos const&) const;

    // symbol: ?moveRegion@NetworkChunkPublisher@@QEAAXAEBVBlockPos@@IAEBVVec3@@M@Z
    MCAPI void moveRegion(class BlockPos const&, uint, class Vec3 const&, float);

    // symbol: ?prepareRegion@NetworkChunkPublisher@@QEAAXAEAVChunkSource@@AEBVChunkPos@@@Z
    MCAPI void prepareRegion(class ChunkSource&, class ChunkPos const&);

    // symbol: ?resetInitialSpawn@NetworkChunkPublisher@@QEAAXXZ
    MCAPI void resetInitialSpawn();

    // symbol: ?sendQueuedChunks@NetworkChunkPublisher@@QEAAXXZ
    MCAPI void sendQueuedChunks();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isWaitingForFullyBuiltChunks@NetworkChunkPublisher@@AEBA_NXZ
    MCAPI bool _isWaitingForFullyBuiltChunks() const;

    // symbol:
    // ?_sendQueuedChunk@NetworkChunkPublisher@@AEAA_NAEBUChunkPositionAndDimension@@PEAVTransferBuilder@Server@ClientBlobCache@@@Z
    MCAPI bool
    _sendQueuedChunk(struct ChunkPositionAndDimension const&, class ClientBlobCache::Server::TransferBuilder*);

    // symbol:
    // ?_serializeAndCache@NetworkChunkPublisher@@AEAAXAEAVLevelChunkPacket@@AEAVTransferBuilder@Server@ClientBlobCache@@$$QEAV?$function@$$A6AXAEAVVarIntDataOutput@@@Z@std@@@Z
    MCAPI void
    _serializeAndCache(class LevelChunkPacket&, class ClientBlobCache::Server::TransferBuilder&, std::function<void(class VarIntDataOutput&)>&&);

    // NOLINTEND
};
