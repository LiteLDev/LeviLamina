#include "mc/client/network/ClientNetworkHandler.h"

#include "mc/client/game/IClientInstance.h"
#include "mc/client/game/IMinecraftGame.h"
#include "mc/client/player/LocalPlayer.h"
#include "mc/deps/voxel_shapes/VoxelShapeRegistry.h"
#include "mc/network/ClientNetworkSystem.h"
#include "mc/network/NetworkConnection.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/ChunkPos.h"
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
