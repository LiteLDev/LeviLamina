#ifdef LL_DEBUG

#include "ll/api/Logger.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/GlobalService.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/packet/AddVolumeEntityPacket.h"
#include "mc/network/packet/ChangeDimensionPacket.h"
#include "mc/network/packet/ClientboundMapItemDataPacket.h"
#include "mc/network/packet/RemoveVolumeEntityPacket.h"
#include "mc/network/packet/SpawnParticleEffectPacket.h"
#include "mc/network/packet/StartGamePacket.h"
#include "mc/network/packet/SubChunkPacket.h"
#include "mc/network/packet/SubChunkRequestPacket.h"
#include "mc/server/LoopbackPacketSender.h"


// ChangeDimensionPacket.java
// ClientboundMapItemDataPacket.java
// RemoveVolumeEntityPacket.java
// StartGamePacket.java
// AddVolumeEntityPacket.java
// SpawnParticleEffectPacket.java
// SubChunkPacket.java
// SubChunkRequestPacket.java

namespace {
ll::Logger logger("Packet");
bool       needChange             = false;
bool       netherMoreHeight       = false;
bool       netherMoreHeightChange = false;
int        fakeDimension          = 0; // Overworld, Make the client think of the dimension
int        realDimension          = 3; // test dimension, real dimension
int        temporaryID            = 2; // TheEnd, Dimensions of transit

Packet& changePacketDimension(Packet& packet, int id, NetworkIdentifier const& netId) {
    auto packId = packet.getId();
    switch (packId) {
    case MinecraftPacketIds::ChangeDimension: {
        auto& tempP = (ChangeDimensionPacket&)packet;
        logger.debug("ChangeDimension Call id: {}", id);
        if (tempP.mDimensionId.id == realDimension) {
            tempP.mDimensionId.id = fakeDimension;
            logger.debug("MinecraftPacketIds::ChangeDimension: change to {}", fakeDimension);
            needChange = true;
            return tempP;
        } else if (tempP.mDimensionId.id == fakeDimension) {
            needChange = false;
        }
        if (tempP.mDimensionId.id == 1 && netherMoreHeight) {
            tempP.mDimensionId.id  = temporaryID;
            netherMoreHeightChange = true;
        }
        return tempP;
    }
    case MinecraftPacketIds::RemoveVolumeEntityPacket: {
        auto& tempP = (RemoveVolumeEntityPacket&)packet;
        logger.debug("RemoveVolumeEntityPacket Call id: {}", id);
        if (tempP.mDimensionType.id == realDimension) {
            tempP.mDimensionType.id = fakeDimension;
            logger.debug("MinecraftPacketIds::RemoveVolumeEntityPacket: change to {}", fakeDimension);
            return tempP;
        }
        if (tempP.mDimensionType.id == 1 && netherMoreHeightChange) {
            tempP.mDimensionType.id = temporaryID;
            return tempP;
        }
    }
    case MinecraftPacketIds::StartGame: {
        auto& tempP = (StartGamePacket&)packet;
        logger.debug("StartGamePacket Call id: {}", id);
        if (tempP.mSettings.mSpawnSettings.dimension.id == realDimension) {
            tempP.mSettings.mSpawnSettings.dimension.id = fakeDimension;
            needChange                                  = true;
            logger.debug("MinecraftPacketIds::StartGame: change to {}", fakeDimension);
            return tempP;
        } else if (tempP.mSettings.mSpawnSettings.dimension.id == fakeDimension) {
            needChange = false;
        }
        if (tempP.mSettings.mSpawnSettings.dimension.id == 1 && netherMoreHeight) {
            tempP.mSettings.mSpawnSettings.dimension.id = temporaryID;
            netherMoreHeightChange                      = true;
            return tempP;
        }
    }
    case MinecraftPacketIds::AddVolumeEntityPacket: {
        auto& tempP = (AddVolumeEntityPacket&)packet;
        logger.debug("AddVolumeEntityPacket Call id: {}", id);
        if (tempP.mDimensionType.id == realDimension) {
            tempP.mDimensionType.id = fakeDimension;
            logger.debug("MinecraftPacketIds::AddVolumeEntityPacket: change to {}", fakeDimension);
            return tempP;
        }
        if (tempP.mDimensionType.id == 1 && netherMoreHeightChange) {
            tempP.mDimensionType.id = temporaryID;
            return tempP;
        }
    }
    case MinecraftPacketIds::SpawnParticleEffect: {
        auto& tempP = (SpawnParticleEffectPacket&)packet;
        logger.debug("SpawnParticleEffect Call id: {}", id);
        if (tempP.mVanillaDimensionId == realDimension) {
            tempP.mVanillaDimensionId = fakeDimension;
            logger.debug("MinecraftPacketIds::SpawnParticleEffect: change to {}", fakeDimension);
            return tempP;
        }
        if (tempP.mVanillaDimensionId == 1 && netherMoreHeightChange) {
            tempP.mVanillaDimensionId = temporaryID;
            return tempP;
        }
    }
    case MinecraftPacketIds::SubChunkPacket: {
        auto& tempP = (SubChunkPacket&)packet;
        logger.debug("SubChunkPacket Call id: {}, dim: {}", id, tempP.mDimensionType.id);
        if (tempP.mDimensionType.id == realDimension) {
            tempP.mDimensionType.id = fakeDimension;
            logger.debug("MinecraftPacketIds::SubChunkPacket: change to {}", fakeDimension);
            return tempP;
        }
        if (tempP.mDimensionType.id == 1 && netherMoreHeightChange) {
            tempP.mDimensionType.id = temporaryID;
            return tempP;
        }
    }
    default:
        return packet;
    }
}

} // namespace

LL_AUTO_TYPED_INSTANCE_HOOK(
    LoopbackPacketSendersendToClientHook1,
    HookPriority::Normal,
    LoopbackPacketSender,
    "?sendToClient@LoopbackPacketSender@@UEAAXAEBVNetworkIdentifier@@AEBVPacket@@W4SubClientId@@@Z",
    void,
    NetworkIdentifier const& netId,
    Packet&                  packet,
    ::SubClientId            subId
) {
    auto& tempP = changePacketDimension(packet, 1, netId);

    return origin(netId, tempP, subId);
};

LL_AUTO_TYPED_INSTANCE_HOOK(
    LoopbackPacketSendersendToClientHook2,
    HookPriority::Normal,
    LoopbackPacketSender,
    "?sendToClient@LoopbackPacketSender@@UEAAXPEBVUserEntityIdentifierComponent@@AEBVPacket@@@Z",
    void,
    UserEntityIdentifierComponent const* comp,
    Packet&                              packet
) {
    auto& tempP = changePacketDimension(packet, 2, comp->mNetworkId);
    return origin(comp, tempP);
};

LL_AUTO_TYPED_INSTANCE_HOOK(
    LoopbackPacketSendersendToClientsHook,
    HookPriority::Normal,
    LoopbackPacketSender,
    "?sendToClients@LoopbackPacketSender@@UEAAXAEBV?$vector@UNetworkIdentifierWithSubId@@V?$allocator@"
    "UNetworkIdentifierWithSubId@@@std@@@std@@AEBVPacket@@@Z",
    void,
    std::vector<NetworkIdentifierWithSubId> const& subIds,
    Packet&                                        packet
) {
    auto& tempP = changePacketDimension(packet, 3, NetworkIdentifier::INVALID_ID);

    return origin(subIds, tempP);
};

LL_AUTO_TYPED_INSTANCE_HOOK(
    ServerNetworkHandlerSubChunkRequestPacketHook,
    HookPriority::Normal,
    ServerNetworkHandler,
    "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSubChunkRequestPacket@@@Z",
    void,
    NetworkIdentifier const& netId,
    SubChunkRequestPacket&   packet
) {
    // Since the client is requesting fake dimension subChunk,
    // it needs to be modified to allow BDS to obtain the correct subChunk.
    auto& tempP = (SubChunkRequestPacket&)packet;
    logger.debug("SubChunkRequestPacket Call dim: {}", tempP.mDimensionType.id);
    if (tempP.mDimensionType.id == fakeDimension && needChange) {
        tempP.mDimensionType.id = realDimension;
        logger.debug("MinecraftPacketIds::SubChunkRequestPacket: change to {}", realDimension);
        return origin(netId, tempP);
    };
    if (tempP.mDimensionType.id == temporaryID && netherMoreHeightChange) {
        tempP.mDimensionType.id = 1;
        logger.debug("MinecraftPacketIds::SubChunkRequestPacket: Nether change to {}", realDimension);
        return origin(netId, tempP);
    };

    return origin(netId, packet);
};

#endif // LL_DEBUG