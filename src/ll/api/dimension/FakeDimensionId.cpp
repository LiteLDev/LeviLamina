#include "FakeDimensionId.h"

#include "ll/api/Logger.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/GlobalService.h"
#include "ll/api/dimension/MoreDimensionManager.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/packet/ActorEventPacket.h"
#include "mc/network/packet/AddVolumeEntityPacket.h"
#include "mc/network/packet/ChangeDimensionPacket.h"
#include "mc/network/packet/ClientboundMapItemDataPacket.h"
#include "mc/network/packet/LevelChunkPacket.h"
#include "mc/network/packet/PlayerActionPacket.h"
#include "mc/network/packet/RemoveVolumeEntityPacket.h"
#include "mc/network/packet/RespawnPacket.h"
#include "mc/network/packet/SpawnParticleEffectPacket.h"
#include "mc/network/packet/StartGamePacket.h"
#include "mc/network/packet/SubChunkPacket.h"
#include "mc/network/packet/SubChunkRequestPacket.h"
#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/server/LoopbackPacketSender.h"
#include "mc/world/level/ChangeDimensionRequest.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/block/Block.h"
#include "mc/world/systems/NetworkSystem.h"
#include "mc/entity/systems/ServerPlayerMovementComponent.h"
#include "mc/server/ServerPlayer.h"
#include "mc/certificates/Certificate.h"


// ChangeDimensionPacket.java
// ClientboundMapItemDataPacket.java
// RemoveVolumeEntityPacket.java
// StartGamePacket.java
// AddVolumeEntityPacket.java
// SpawnParticleEffectPacket.java
// SubChunkPacket.java
// SubChunkRequestPacket.java

namespace {
ll::Logger logger("FakeDimensionId");

} // namespace

namespace moredimension::hooklist {

namespace sendpackethook {
LL_TYPED_INSTANCE_HOOK(
    LoopbackPacketSendersendToClientHandler1,
    HookPriority::Normal,
    LoopbackPacketSender,
    "?sendToClient@LoopbackPacketSender@@UEAAXAEBVNetworkIdentifier@@AEBVPacket@@W4SubClientId@@@Z",
    void,
    NetworkIdentifier const& netId,
    Packet&                  packet,
    ::SubClientId            subId
) {
    auto player = ll::Global<ServerNetworkHandler>->_getServerPlayer(netId, subId);
    if (player && player->getDimensionId().id >= 3 && packet.getId() != MinecraftPacketIds::ChangeDimension
        && packet.getId() != MinecraftPacketIds::PlayerAction
        && packet.getId() != MinecraftPacketIds::SpawnParticleEffect) {
        packet = MoreDimensionManager::getInstance().fakeDimensionIdInstance->changePacketDimension(packet);
    }
    return origin(netId, packet, subId);
};

LL_TYPED_INSTANCE_HOOK(
    LoopbackPacketSendersendToClientHandler2,
    HookPriority::Normal,
    LoopbackPacketSender,
    "?sendToClient@LoopbackPacketSender@@UEAAXPEBVUserEntityIdentifierComponent@@AEBVPacket@@@Z",
    void,
    UserEntityIdentifierComponent const* comp,
    Packet&                              packet
) {
    auto player = ll::Global<ServerNetworkHandler>->_getServerPlayer(comp->mNetworkId, comp->mClientSubId);
    auto uuid = player->getUserEntityIdentifier().mClientUUID;
    if (player && player->getDimensionId().id >= 3 && packet.getId() != MinecraftPacketIds::ChangeDimension
        && packet.getId() != MinecraftPacketIds::PlayerAction
        && packet.getId() != MinecraftPacketIds::SpawnParticleEffect) {
        packet = MoreDimensionManager::getInstance().fakeDimensionIdInstance->changePacketDimension(packet);
    }

    // 屏蔽死亡回主世界时的改维度包
    if (MoreDimensionManager::getInstance().fakeDimensionIdInstance->isNeedRemove(uuid)
        && packet.getId() == MinecraftPacketIds::ChangeDimension) {
        return;
    }
    // 移除通用事件包。其中，事件id时9801，对应LevelEvent是SleepingPlayers
    if (packet.getId() == MinecraftPacketIds::LevelEventGeneric &&
        MoreDimensionManager::getInstance().fakeDimensionIdInstance->isNeedRemove(uuid)) {
        return;
    }
    // 屏蔽死亡回主世界时发送的成功转维度的事件包
    if (MoreDimensionManager::getInstance().fakeDimensionIdInstance->isNeedRemove(uuid)
        && packet.getId() == MinecraftPacketIds::PlayerAction) {
        auto& actionPacket = (PlayerActionPacket&)packet;
        if (actionPacket.mAction == PlayerActionType::ChangeDimensionAck) {
            return;
        }
    }
    return origin(comp, packet);
};

LL_TYPED_INSTANCE_HOOK(
    LoopbackPacketSendersendToClientsHandler,
    HookPriority::Normal,
    LoopbackPacketSender,
    "?sendToClients@LoopbackPacketSender@@UEAAXAEBV?$vector@UNetworkIdentifierWithSubId@@V?$allocator@"
    "UNetworkIdentifierWithSubId@@@std@@@std@@AEBVPacket@@@Z",
    void,
    std::vector<NetworkIdentifierWithSubId> const& subIds,
    Packet&                                        packet
) {
    if (packet.getId() == MinecraftPacketIds::RemoveVolumeEntityPacket ||
        packet.getId() == MinecraftPacketIds::AddVolumeEntityPacket) {
        for (auto& subId : subIds) {
            auto player = ll::Global<ServerNetworkHandler>->_getServerPlayer(subId.id, SubClientId::PrimaryClient);
            if (player && player->getDimensionId().id >= 3) {
                auto& tempP = MoreDimensionManager::getInstance().fakeDimensionIdInstance->changePacketDimension(packet);
                ll::Global<NetworkSystem>->send(subId.id, tempP, SubClientId::PrimaryClient);
            } else {
                ll::Global<NetworkSystem>->send(subId.id, packet, SubClientId::PrimaryClient);
            }
        }
        return;
    }
    return origin(subIds, packet);
};

// StartGamePacket
LL_TYPED_STATIC_HOOK(
    StartGamePacketHandler,
    HookPriority::Normal,
    StartGamePacket,
    "??0StartGamePacket@@QEAA@VItemRegistryRef@@AEBVLevelSettings@@UActorUniqueID@@VActorRuntimeID@@W4GameType@"
    "@_NAEBVVec3@@AEBVVec2@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@8AEBVContentIdentity@"
    "@8AEBVBlockDefinitionGroup@@5VCompoundTag@@AEBUPlayerMovementSettings@@8AEBVUUID@mce@@_KH_K@Z",
    StartGamePacket,
    void* itemRegistryRef,
    LevelSettings const& levelSettings,
    ActorUniqueID uniqueId,
    ActorRuntimeID runtimeId,
    ::GameType gameType,
    bool unk,
    Vec3 const& pos,
    Vec2 const& ros,
    std::string const& levelId,
    std::string const& levelName,
    ContentIdentity const& contentIdentity,
    std::string const& unk1,
    BlockDefinitionGroup const& blockDefinitionGroup,
    bool unk2,
    CompoundTag compoundTag,
    PlayerMovementSettings const& moveSetting,
    std::string const& unk3,
    mce::UUID const& uuid,
    uint64 unk4,
    int unk5,
    uint64 unk6) {
    if (levelSettings.mSpawnSettings.dimension.id >= 3) {
        const_cast<LevelSettings&>(levelSettings).mSpawnSettings.dimension.id = MoreDimensionManager::getInstance().fakeDimensionIdInstance->getFakeDimensionId();
    }
    return origin(itemRegistryRef, levelSettings, uniqueId, runtimeId, gameType, unk, pos, ros, levelId, levelName,
                  contentIdentity, unk1, blockDefinitionGroup, unk2, std::move(compoundTag), moveSetting, unk3, uuid, unk4, unk5, unk6);
}

// ChangeDimensionPacket
LL_TYPED_STATIC_HOOK(
    ChangeDimensionPacketHandler,
    HookPriority::Normal,
    ChangeDimensionPacket,
    "??0ChangeDimensionPacket@@QEAA@V?$AutomaticID@VDimension@@H@@VVec3@@_N@Z",
    ChangeDimensionPacket,
    DimensionType dimId,
    Vec3 pos,
    bool respawn
) {
    if (dimId.id > 2) {
        dimId.id = 0;
    }
    return origin(dimId, pos, respawn);
}

// SubChunkPacket and SubChunkRequestPacket
LL_TYPED_INSTANCE_HOOK(
    SubChunkPacketHandler,
    HookPriority::Normal,
    ServerNetworkHandler,
    &ServerNetworkHandler::_buildSubChunkPacketData,
    void,
    NetworkIdentifier const& networkIdentifier,
    ServerPlayer const* serverPlayer,
    SubChunkRequestPacket const& subChunkRequestPacket,
    SubChunkPacket& subChunkPacket,
    uint count,
    bool isCacheEnabled) {
    if (serverPlayer->getDimensionId().id >= 3) {
        auto inDim = serverPlayer->getDimensionId();
        const_cast<SubChunkRequestPacket&>(subChunkRequestPacket).mDimensionType = inDim;
        // dimensionType value of subChunkPacket is not read in this function, so it is changed together.
        subChunkPacket.mDimensionType = MoreDimensionManager::getInstance().fakeDimensionIdInstance->getFakeDimensionId();
    };
    return origin(networkIdentifier, serverPlayer, subChunkRequestPacket, subChunkPacket, count, isCacheEnabled);
}

// SpawnParticleEffectPacket
LL_TYPED_STATIC_HOOK(
    SpawnParticleEffectPacketHandler,
    HookPriority::Normal,
    SpawnParticleEffectPacket,
    "??0SpawnParticleEffectPacket@@QEAA@AEBVVec3@@AEBV?$basic_string@DU?$char_traits@D@std@"
    "@V?$allocator@D@2@@std@@EV?$optional@VMolangVariableMap@@@3@@Z",
    SpawnParticleEffectPacket,
    Vec3 const& pos,
    std::string const& particle_name,
    uchar dimId,
    std::optional<MolangVariableMap> molang) {
    if (dimId >= 3) {
        dimId = MoreDimensionManager::getInstance().fakeDimensionIdInstance->getFakeDimensionId();
    }
    return origin(pos, particle_name, dimId, std::move(molang));
}

}

LL_TYPED_INSTANCE_HOOK(
    PlayerdieHandler,
    HookPriority::Normal,
    Player,
    "?die@Player@@UEAAXAEBVActorDamageSource@@@Z",
    void,
    ActorDamageSource const& a1
) {
    if (this->getDimensionId().id >= 3) {
        logger.debug("Remove set true");
        MoreDimensionManager::getInstance().fakeDimensionIdInstance->setNeedRemove(this->getUserEntityIdentifier().mClientUUID,true);
    }
    return origin(a1);
}

namespace receivepackethook {

// 处理在主世界传去More dimension时中转
LL_TYPED_INSTANCE_HOOK(
    ServerNetworkHandlerPlayerActionPacketHandler,
    HookPriority::Normal,
    ServerNetworkHandler,
    "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerActionPacket@@@Z",
    void,
    NetworkIdentifier const& netId,
    PlayerActionPacket&      packet
) {
    auto  player          = this->getServerPlayer(netId, packet.mClientSubId);
    auto  uuid   = player->getUserEntityIdentifier().mClientUUID;
    auto& fakeDimensionId = MoreDimensionManager::getInstance().fakeDimensionIdInstance;
    if (packet.mAction == PlayerActionType::ChangeDimensionAck) {
        // 处理中转第二次传目的维度
        if (fakeDimensionId->getBackDimensionCallback(uuid)) {
            fakeDimensionId->getBackDimensionCallback(uuid)();
            logger.debug("go more dimension!");
            return origin(netId, packet);
        }
    }
    if (packet.mAction == PlayerActionType::Respawn) {
        // 处理复活回主世界
        if (!fakeDimensionId->isNeedRemove(uuid))
            return origin(netId, packet);
        fakeDimensionId->setNeedRemove(uuid, false);
        auto moveComp = player->getEntityContext().tryGetComponent<ServerPlayerMovementComponent>();
        if (moveComp) {
            moveComp->mServerHasMovementAuthority = false;
        }
        fakeDimensionId->onPlayerLeftMoreDimension(uuid, true);
    }
    return origin(netId, packet);
};
}
void EnableHook(){
sendpackethook::LoopbackPacketSendersendToClientHandler1::hook();
sendpackethook::LoopbackPacketSendersendToClientHandler2::hook();
sendpackethook::LoopbackPacketSendersendToClientsHandler::hook();
sendpackethook::SubChunkPacketHandler::hook();
sendpackethook::SpawnParticleEffectPacketHandler::hook();
sendpackethook::StartGamePacketHandler::hook();
sendpackethook::ChangeDimensionPacketHandler::hook();
PlayerdieHandler::hook();

receivepackethook::ServerNetworkHandlerPlayerActionPacketHandler::hook();
};

void DisableHook() {
sendpackethook::LoopbackPacketSendersendToClientHandler1::unhook();
sendpackethook::LoopbackPacketSendersendToClientHandler2::unhook();
sendpackethook::LoopbackPacketSendersendToClientsHandler::unhook();
sendpackethook::SubChunkPacketHandler::unhook();
sendpackethook::SpawnParticleEffectPacketHandler::unhook();
sendpackethook::StartGamePacketHandler::unhook();
sendpackethook::ChangeDimensionPacketHandler::unhook();
PlayerdieHandler::unhook();

receivepackethook::ServerNetworkHandlerPlayerActionPacketHandler::unhook();
}
}

FakeDimensionId::FakeDimensionId() {
    moredimension::hooklist::EnableHook();
};

FakeDimensionId::~FakeDimensionId() {
    moredimension::hooklist::DisableHook();
}

//FakeDimensionId& FakeDimensionId::getInstance() {
//    static FakeDimensionId instance{};
//    return instance;
//}

Packet& FakeDimensionId::changePacketDimension(Packet& packet) {
    auto packId = packet.getId();
    switch (packId) {
    case MinecraftPacketIds::RemoveVolumeEntityPacket: {
        auto& tempP = (RemoveVolumeEntityPacket&)packet;
        tempP.mDimensionType.id = this->fake_dimension_;
        logger.debug("MinecraftPacketIds::RemoveVolumeEntityPacket: dimId change to {}", this->fake_dimension_);
        return tempP;
    }
    case MinecraftPacketIds::AddVolumeEntityPacket: {
        auto& tempP = (AddVolumeEntityPacket&)packet;
        tempP.mDimensionType.id = this->fake_dimension_;
        logger.debug("MinecraftPacketIds::AddVolumeEntityPacket: dimId change to {}", this->fake_dimension_);
        return tempP;
    }
    default:
        return packet;
    }
}

int FakeDimensionId::getFakeDimensionId() const {
    return this->fake_dimension_;
}

int FakeDimensionId::getTemporaryId() const {
    return this->temporary_id_;
}

void FakeDimensionId::setNeedRemove(mce::UUID uuid, bool needRemove) {
    if (this->setting_map_.count(uuid)) {
        this->setting_map_.at(uuid).needRemovePacket = needRemove;
    } else {
        this->setting_map_.emplace(uuid, MoreDimensionIdSetting{needRemove, nullptr});
    }
}

bool FakeDimensionId::isNeedRemove(mce::UUID uuid) {
    if (this->setting_map_.count(uuid)) {
        return this->setting_map_.at(uuid).needRemovePacket;
    };
    return false;
}

void FakeDimensionId::onPlayerGoMoreDimension(mce::UUID uuid, std::function<void()> backDimCallback) {
    if (this->setting_map_.count(uuid)) {
        this->setting_map_.at(uuid).backDimensionCallback = std::move(backDimCallback);
    } else {
        std::lock_guard lockGuard{this->map_mutex_};
        this->setting_map_.emplace(uuid, MoreDimensionIdSetting{false, std::move(backDimCallback)});
    }
}

void FakeDimensionId::onPlayerLeftMoreDimension(mce::UUID uuid, bool isRespawn) {
    std::lock_guard lockGuard{this->map_mutex_};
    if (this->setting_map_.count(uuid)) {
        if (isRespawn) {
            this->setting_map_.at(uuid).needRemovePacket = false;
            this->setting_map_.at(uuid).backDimensionCallback = nullptr;
        } else {
            this->setting_map_.erase(uuid);
        }
    }
}

std::function<void()> FakeDimensionId::getBackDimensionCallback(mce::UUID uuid) {
    if (this->setting_map_.count(uuid)) {
        return this->setting_map_.at(uuid).backDimensionCallback;
    } else {
        return nullptr;
    }
}
bool FakeDimensionId::teleportToMoreDimension(ServerPlayer* player, DimensionType dimensionType, Vec3 &pos) {
    if (dimensionType < 3) {
        logger.warn("This Dimension Id->{} is not More dimension id!!!", dimensionType.id);
        return false;
    }
    if (player->getDimensionId().id >= 3 ||
        player->getDimensionId().id == this->fake_dimension_) {
        player->teleport(pos, this->temporary_id_);
        auto uuid = player->getUserEntityIdentifier().mClientUUID;
        this->onPlayerGoMoreDimension(uuid, [uuid, pos, dimensionType](){
            ll::Global<Level>->getPlayer(uuid)->teleport(pos, dimensionType);
        });
        return true;
    }
    if (player->getDimensionId().id != this->fake_dimension_ &&
        player->getDimensionId().id < 3) {
        player->teleport(pos, dimensionType);
    }
    return true;
}