

#include "DimensionUtils.h"
#include "mc/network/packet/ChangeDimensionPacket.h"
#include "mc/network/packet/LevelChunkPacket.h"
#include "mc/network/packet/PlayerActionPacket.h"
#include "mc/network/packet/UpdateBlockPacket.h"

#include "ll/api/dimension/CustomDimensionManager.h"
#include "ll/api/service/Bedrock.h"

#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/packet/ChangeDimensionPacket.h"
#include "mc/network/packet/LevelChunkPacket.h"
#include "mc/network/packet/PlayerActionPacket.h"
#include "mc/network/packet/UpdateBlockPacket.h"
#include "mc/server/LoopbackPacketSender.h"
#include "mc/util/VarIntDataOutput.h"
#include "mc/world/level/Level.h"



namespace ll::dimension {

void sendEmptyChunk(const NetworkIdentifier& netId, int chunkX, int chunkZ, bool forceUpdate) {
    std::array<uchar, 4096> biome{};
    LevelChunkPacket        levelChunkPacket;
    BinaryStream            binaryStream{levelChunkPacket.mSerializedChunk, false};
    VarIntDataOutput        varIntDataOutput(&binaryStream);

    varIntDataOutput.writeBytes(&biome, 4096); // write void biome
    for (int i = 1; i < 8; i++) {
        varIntDataOutput.writeByte((127 << 1) | 1);
    }
    varIntDataOutput.mStream->writeUnsignedChar(0); // write border blocks

    levelChunkPacket.mPos.x          = chunkX;
    levelChunkPacket.mPos.z          = chunkZ;
    levelChunkPacket.mCacheEnabled   = false;
    levelChunkPacket.mSubChunksCount = 0;

    ll::service::getLevel()->getPacketSender()->sendToClient(netId, levelChunkPacket, SubClientId::PrimaryClient);

    if (forceUpdate) {
        NetworkBlockPosition pos{chunkX << 4, 80, chunkZ << 4};
        UpdateBlockPacket    blockPacket;
        blockPacket.mPos         = pos;
        blockPacket.mLayer       = UpdateBlockPacket::BlockLayer::Standard;
        blockPacket.mUpdateFlags = BlockUpdateFlag::Neighbors;
        ll::service::getLevel()->getPacketSender()->sendToClient(netId, blockPacket, SubClientId::PrimaryClient);
    }
}

void DimensionUtils::sendEmptyChunks(
    const NetworkIdentifier& netId,
    const Vec3&              position,
    int                      radius,
    bool                     forceUpdate
) {
    int chunkX = (int)(position.x) >> 4;
    int chunkZ = (int)(position.z) >> 4;
    for (int x = -radius; x <= radius; x++) {
        for (int z = -radius; z <= radius; z++) {
            sendEmptyChunk(netId, chunkX + x, chunkZ + z, forceUpdate);
        }
    }
}

void DimensionUtils::fakeChangeDimension(
    const NetworkIdentifier& netId,
    ActorRuntimeID           runtimeId,
    DimensionType            fakeDimId,
    const Vec3&              pos
) {
    ChangeDimensionPacket changeDimensionPacket{fakeDimId, pos, true};
    ll::service::getLevel()->getPacketSender()->sendToClient(netId, changeDimensionPacket, SubClientId::PrimaryClient);
    PlayerActionPacket playerActionPacket{PlayerActionType::ChangeDimensionAck, runtimeId};
    ll::service::getLevel()->getPacketSender()->sendToClient(netId, playerActionPacket, SubClientId::PrimaryClient);
    sendEmptyChunks(netId, pos, 3, true);
}

} // namespace ll::dimension