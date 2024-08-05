#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/SubClientId.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace ClientBlobCache::Server { class TransferBuilder; }
// clang-format on

class NetworkChunkPublisher {
public:
    // prevent constructor by default
    NetworkChunkPublisher& operator=(NetworkChunkPublisher const&);
    NetworkChunkPublisher(NetworkChunkPublisher const&);
    NetworkChunkPublisher();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkChunkPublisher() = default;

    MCAPI NetworkChunkPublisher(class Level& level, class NetworkIdentifier const& owner, ::SubClientId subClientId);

    MCAPI void clearRegion();

    MCAPI void destroyRegion();

    MCAPI int getChunksSentSinceStart() const;

    MCAPI bool is2DPositionRelevant(class BlockPos const& position) const;

    MCAPI void
    moveRegion(class BlockPos const& position, uint blockRadius, class Vec3 const& direction, float minDistance);

    MCAPI void prepareRegion(class ChunkSource& mainChunkSource, class ChunkPos const& center);

    MCAPI void resetInitialSpawn();

    MCAPI void sendQueuedChunks();

    MCAPI void
    setServerSettings(class ServerNetworkSystem& network, class ClientBlobCache::Server::ActiveTransfersManager&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _isWaitingForFullyBuiltChunks() const;

    MCAPI bool _sendQueuedChunk(
        struct ChunkPositionAndDimension const&         queuedChunk,
        class ClientBlobCache::Server::TransferBuilder* cachedTransfer
    );

    MCAPI void _serializeAndCache(
        class LevelChunkPacket&                         packet,
        class ClientBlobCache::Server::TransferBuilder& transfer,
        std::function<void(class VarIntDataOutput&)>&&  serialize
    );

    // NOLINTEND
};
