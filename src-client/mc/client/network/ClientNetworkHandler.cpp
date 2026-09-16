#include "mc/client/network/ClientNetworkHandler.h"

#include "ll/api/service/Bedrock.h"
#include "ll/api/service/TargetedBedrock.h"
#include "mc/client/game/ClientInstance.h"
#include "mc/client/game/IClientInstance.h"
#include "mc/client/game/MinecraftGame.h"
#include "mc/client/multiplayer/ClientLevel.h"
#include "mc/client/network/SubChunkPacketHandler.h"
#include "mc/client/network/blob_cache/client_blob_cache/Cache.h"
#include "mc/client/player/LocalPlayer.h"
#include "mc/deps/core/threading/BackgroundTask.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/threading/TaskResult.h"
#include "mc/deps/core/threading/TaskStartInfo.h"
#include "mc/deps/voxel_shapes/VoxelShapeRegistry.h"
#include "mc/network/ClientNetworkSystem.h"
#include "mc/network/NetworkConnection.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/chunk/LevelChunk.h"
#include "mc/world/level/chunk/SubChunk.h"
#include "mc/world/level/chunk/SubChunkRequestTrackingData.h"
#include "mc/world/level/dimension/Dimension.h"

void ClientNetworkHandler::_disconnectFromServer(::NetworkIdentifier const& source) {
    mClient.getMinecraftGame_DEPRECATED().onClientLevelExit(mClient, 5);

    if (mClient.isPrimaryClient()) {
        mClient.getClientNetworkSystem().closeConnection(source, Connection::DisconnectFailReason::BadPacket, "");
    } else {
        this->onDisconnect(
            source,
            Connection::DisconnectFailReason::BadPacket,
            Connection::DisconnectionStage::Unknown,
            "",
            "",
            false,
            "DisconnectPacket"
        );
    }
}

void ClientNetworkHandler::onChunkHandleCompleted(
    ::NetworkIdentifier const& source,
    ::ChunkPos const&          chunkPos,
    ::Dimension const&         dimension
) {
    ChunkKey key{&dimension, chunkPos};

    auto it = mPendingChunks->find(key);
    if (it != mPendingChunks->end() && --it->second == 0) {
        mPendingChunks->erase(it);

        ChunkCallbackKey callbackKey{source, &dimension, chunkPos};

        auto cbIt = mConnectionPausedCallbacks->find(callbackKey);
        if (cbIt != mConnectionPausedCallbacks->end()) {
            if (auto* player = mClient.getLocalPlayer()) {
                auto& blockSource = player->getDimensionBlockSource();
                if (blockSource.getDimension().getDimensionId() == dimension.getDimensionId()) {
                    if (cbIt->second) {
                        cbIt->second(blockSource);
                    }
                }
            }

            mConnectionPausedCallbacks->erase(cbIt);

            if (auto* connection = mNetwork.getConnectionFromId(source)) {
                connection->setChannelPaused(0, false);
            }
        }
    }
}

void ClientNetworkHandler::_ensureVoxelShapeRegistryExists(::Experiments const& experiments) {
    if (!mVoxelShapeRegistry) {
        mVoxelShapeRegistry = std::make_unique<VoxelShapes::VoxelShapeRegistry>();
        if (experiments.isExperimentEnabled(AllExperiments::VoxelShapes)) {
            mVoxelShapeRegistry->initialize();
        }
    }
}

void ClientNetworkHandler::_respondBlobCacheStatusForSubChunk(::SubChunkPacket::SubChunkPacketData const& data) {
    // The blob is only worth reporting once there is a level to feed it to; without one nothing will
    // ever consume the cache entry, so it counts as a miss straight away.
    if (mLevel->get() == nullptr) {
        if (mCacheMisses) {
            mCacheMisses->enqueue(data.mBlobId->value());
        }
        return;
    }

    ::TaskStartInfo startInfo{};
    startInfo.name              = "deserialize SubChunkPacket";
    startInfo.priority          = 1;
    startInfo.priorityBackDown  = -1;
    startInfo.mLinkCancellation = false;

    mIOTaskGroup->_queueInternal(::BackgroundTask<::TaskResult, void>::create(
        mIOTaskGroup.get(),
        startInfo,
        ::Bedrock::Threading::Async<void>{},
        mIOTaskGroup->_workerPoolIsAsync(),
        [blobId = data.mBlobId->value(),
         cache  = mBlobCache,
         misses = mCacheMisses,
         hits   = mCacheHits]() -> ::TaskResult {
            if (cache != nullptr && cache->doesBlobExist(blobId)) {
                hits->enqueue(blobId);
                if (auto client = ll::service::getClientInstance()) {
                    if (auto tracking = client->mUnke2a76f.as<MinecraftGame*>()
                                            ->mUnke45c86.as<std::unique_ptr<SubChunkRequestTrackingData>>()
                                            .get()) {
                        ++*tracking->mClientSubChunksReusedFromCache;
                    }
                }
            } else {
                misses->enqueue(blobId);
            }
            return ::TaskResult::Done();
        }
    ));
}

void ClientNetworkHandler::_handleSubChunkData(
    ::NetworkIdentifier const&                  source,
    ::SubChunkPacket const&                     packet,
    ::SubChunkPacket::SubChunkPacketData const& data,
    ::LocalPlayer const*                        player,
    bool                                        processResponse
) {
    if (data.mBlobId->has_value()) {
        _respondBlobCacheStatusForSubChunk(data);
    }

    if (!processResponse) {
        return;
    }

    // The packet only carries the offset; the absolute subchunk position is the centre plus it.
    // The game reaches this with a single paddd over the three components.
    auto const&   offset = data.mSubChunkPosOffset;
    ::SubChunkPos subChunkPos{
        packet.mCenterPos->x + offset->mX,
        packet.mCenterPos->y + offset->mY,
        packet.mCenterPos->z + offset->mZ,
    };

    using RequestResult = ::SubChunkPacketPayload::SubChunkRequestResult;
    if (data.mResult != RequestResult::Success && data.mResult != RequestResult::SuccessAllAir) {
        return;
    }

    ::Dimension const& dimension = player->getDimension();
    auto               chunk     = dimension.getChunkSource().getAvailableChunk({subChunkPos.x, subChunkPos.z});
    if (!chunk) {
        return;
    }

    ::SubChunk* subChunk = chunk->getSubChunk(static_cast<short>(subChunkPos.y));
    if (subChunk == nullptr) {
        // Not in memory yet: count it so the request manager can retry this subchunk later.
        if (auto client = ll::service::getClientInstance()) {
            if (auto tracking = client->mUnke2a76f.as<MinecraftGame*>()
                                    ->mUnke45c86.as<std::unique_ptr<SubChunkRequestTrackingData>>()
                                    .get()) {
                ++*tracking->mClientSubChunksNotProcessed;
            }
        }
        return;
    }

    {
        // The state transition is all the lock guards; the handler is built after it is released.
        std::lock_guard lock(subChunk->mWriteLock.get());
        if (subChunk->mSubChunkState != ::SubChunk::SubChunkState::NeedsRequest) {
            return;
        }
        subChunk->mSubChunkState = ::SubChunk::SubChunkState::ReceivedResponseFromServer;
    }

    std::shared_ptr<::ClientBlobCache::Cache> cache;
    if (packet.mCacheEnabled) {
        cache = mBlobCache;
    }

    auto handler = std::make_shared<::SubChunkPacketHandler>(
        data,
        std::move(cache),
        packet.mDimensionType,
        packet.mCenterPos.get()
    );

    if (auto* level = mLevel->get()) {
        if (auto* clientLevel = level->asClientLevel()) {
            clientLevel->addSubChunkPacketHandler(std::move(handler));
        }
    }
}
