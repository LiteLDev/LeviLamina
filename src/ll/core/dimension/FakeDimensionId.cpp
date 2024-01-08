#include "FakeDimensionId.h"

#include "ll/api/Logger.h"
#include "ll/api/dimension/CustomDimensionManager.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/Bedrock.h"

#include "mc/entity/systems/ServerPlayerMovementComponent.h"
#include "mc/entity/utilities/ActorDataIDs.h"
#include "mc/network/NetworkIdentifierWithSubId.h"
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
#include "mc/server/LoopbackPacketSender.h"
#include "mc/server/ServerPlayer.h"
#include "mc/world/actor/SynchedActorDataEntityWrapper.h"
#include "mc/world/level/ChangeDimensionRequest.h"
#include "mc/world/level/Level.h"


// ChangeDimensionPacket.java
// ClientboundMapItemDataPacket.java
// RemoveVolumeEntityPacket.java
// StartGamePacket.java
// AddVolumeEntityPacket.java
// SpawnParticleEffectPacket.java
// SubChunkPacket.java
// SubChunkRequestPacket.java

namespace ll::dimension {

static ll::Logger logger("FakeDimensionId");

namespace CustomDimensionHookList {

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
    auto player = ll::service::getServerNetworkHandler()->_getServerPlayer(netId, subId);
    if (player && player->getDimensionId().id >= 3 && packet.getId() != MinecraftPacketIds::ChangeDimension
        && packet.getId() != MinecraftPacketIds::PlayerAction
        && packet.getId() != MinecraftPacketIds::SpawnParticleEffect) {
        packet = FakeDimensionId::changePacketDimension(packet);
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
    auto player = ll::service::getServerNetworkHandler()->_getServerPlayer(comp->mNetworkId, comp->mClientSubId);
    if (!player) return origin(comp, packet);
    auto uuid = player->getUuid();
    if (player && player->getDimensionId().id >= 3 && packet.getId() != MinecraftPacketIds::ChangeDimension
        && packet.getId() != MinecraftPacketIds::PlayerAction
        && packet.getId() != MinecraftPacketIds::SpawnParticleEffect) {
        packet = FakeDimensionId::changePacketDimension(packet);
    }

    // 屏蔽死亡回主世界时的改维度包
    if (FakeDimensionId::getInstance().isNeedRemove(uuid) && packet.getId() == MinecraftPacketIds::ChangeDimension) {
        return;
    }
    // 移除通用事件包。其中，事件id时9801，对应LevelEvent是SleepingPlayers
    if (packet.getId() == MinecraftPacketIds::LevelEventGeneric && FakeDimensionId::getInstance().isNeedRemove(uuid)) {
        return;
    }
    // 屏蔽死亡回主世界时发送的成功转维度的事件包
    if (FakeDimensionId::getInstance().isNeedRemove(uuid) && packet.getId() == MinecraftPacketIds::PlayerAction) {
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
    if (packet.getId() == MinecraftPacketIds::RemoveVolumeEntityPacket
        || packet.getId() == MinecraftPacketIds::AddVolumeEntityPacket) {
        for (auto& subId : subIds) {
            auto player =
                ll::service::getServerNetworkHandler()->_getServerPlayer(subId.id, SubClientId::PrimaryClient);
            if (player && player->getDimensionId().id >= 3) {
                FakeDimensionId::changePacketDimension(packet);
            }
            packet.sendToClient(subId.id, subId.subClientId);
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
    void*                         itemRegistryRef,
    LevelSettings const&          levelSettings,
    ActorUniqueID                 uniqueId,
    ActorRuntimeID                runtimeId,
    ::GameType                    gameType,
    bool                          unk,
    Vec3 const&                   pos,
    Vec2 const&                   ros,
    std::string const&            levelId,
    std::string const&            levelName,
    ContentIdentity const&        contentIdentity,
    std::string const&            unk1,
    BlockDefinitionGroup const&   blockDefinitionGroup,
    bool                          unk2,
    CompoundTag                   compoundTag,
    PlayerMovementSettings const& moveSetting,
    std::string const&            unk3,
    mce::UUID const&              uuid,
    uint64                        unk4,
    int                           unk5,
    uint64                        unk6
) {
    if (levelSettings.mSpawnSettings.dimension.id >= 3) {
        const_cast<LevelSettings&>(levelSettings).mSpawnSettings.dimension.id = FakeDimensionId::fakeDim;
    }
    return origin(
        itemRegistryRef,
        levelSettings,
        uniqueId,
        runtimeId,
        gameType,
        unk,
        pos,
        ros,
        levelId,
        levelName,
        contentIdentity,
        unk1,
        blockDefinitionGroup,
        unk2,
        std::move(compoundTag),
        moveSetting,
        unk3,
        uuid,
        unk4,
        unk5,
        unk6
    );
}

// ChangeDimensionPacket
LL_TYPED_STATIC_HOOK(
    ChangeDimensionPacketHandler,
    HookPriority::Normal,
    ChangeDimensionPacket,
    "??0ChangeDimensionPacket@@QEAA@V?$AutomaticID@VDimension@@H@@VVec3@@_N@Z",
    ChangeDimensionPacket,
    DimensionType dimId,
    Vec3          pos,
    bool          respawn
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
    NetworkIdentifier const&     networkIdentifier,
    ServerPlayer const*          serverPlayer,
    SubChunkRequestPacket const& subChunkRequestPacket,
    SubChunkPacket&              subChunkPacket,
    uint                         count,
    bool                         isCacheEnabled
) {
    auto inDim = serverPlayer->getDimensionId();
    if (inDim >= 3) {
        const_cast<SubChunkRequestPacket&>(subChunkRequestPacket).mDimensionType = inDim;
        // dimensionType value of subChunkPacket is not read in this function, so it is changed together.
        subChunkPacket.mDimensionType = FakeDimensionId::fakeDim;
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
    Vec3 const&                      pos,
    std::string const&               particle_name,
    uchar                            dimId,
    std::optional<MolangVariableMap> molang
) {
    if (dimId >= 3) {
        dimId = FakeDimensionId::fakeDim;
    }
    return origin(pos, particle_name, dimId, std::move(molang));
}

} // namespace sendpackethook

LL_TYPED_INSTANCE_HOOK(
    PlayerdieHandler,
    HookPriority::Normal,
    Player,
    "?die@Player@@UEAAXAEBVActorDamageSource@@@Z",
    void,
    ActorDamageSource const& a1
) {
    if (getDimensionId().id >= 3) {
        logger.debug("Remove set true");
        FakeDimensionId::getInstance().setNeedRemove(getUuid(), true);
    }
    return origin(a1);
}

namespace receivepackethook {

// when player in overworld and custom dimension will need
LL_TYPED_INSTANCE_HOOK(
    ServerNetworkHandlerPlayerActionPacketHandler,
    HookPriority::Normal,
    ServerNetworkHandler,
    "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerActionPacket@@@Z",
    void,
    NetworkIdentifier const& netId,
    PlayerActionPacket&      packet
) {
    auto  player          = getServerPlayer(netId, packet.mClientSubId);
    auto  uuid            = player->getUuid();
    auto& fakeDimensionId = FakeDimensionId::getInstance();
    if (packet.mAction == PlayerActionType::ChangeDimensionAck) {
        // second teleport player, this will go target dimension
        if (fakeDimensionId.getBackDimensionCallback(uuid)) {
            fakeDimensionId.getBackDimensionCallback(uuid)();
            logger.debug("go more dimension!");
            return origin(netId, packet);
        }
    }
    if (packet.mAction == PlayerActionType::Respawn) {
        // when player go overworld with die
        if (!fakeDimensionId.isNeedRemove(uuid)) {
            return origin(netId, packet);
        }
        fakeDimensionId.setNeedRemove(uuid, false);
        auto moveComp = player->getEntityContext().tryGetComponent<ServerPlayerMovementComponent>();
        if (moveComp) {
            moveComp->mServerHasMovementAuthority = false;
        }
        fakeDimensionId.onPlayerLeftCustomDimension(uuid, true);
        // flash player bounding box
        player->getEntityData().markDirty(std::to_underlying(ActorDataIDs::Width));
        player->getEntityData().markDirty(std::to_underlying(ActorDataIDs::Height));
    }
    return origin(netId, packet);
};
} // namespace receivepackethook

LL_TYPED_INSTANCE_HOOK(
    LevelentityChangeDimensionHandler,
    HookPriority::Normal,
    Level,
    "?entityChangeDimension@Level@@UEAAXAEAVActor@@V?$AutomaticID@VDimension@@H@@V?$optional@VVec3@@@std@@@Z",
    void,
    Actor&              entity,
    DimensionType       toId,
    std::optional<Vec3> entityPos
) {
    logger.debug("tp hook, {}", entity.getTypeName());
    if (entity.getTypeName() != "minecraft:player") {
        return origin(entity, toId, entityPos);
    }
    auto inId = entity.getDimensionId();
    if (toId == 1 || toId == 2 || inId == 1 || inId == 2) {
        return origin(entity, toId, entityPos);
    }
    FakeDimensionId::getInstance().teleportToCustomDimension((ServerPlayer&)entity, toId, entityPos.value());
}

LL_TYPED_INSTANCE_HOOK(
    LevelrequestPlayerChangeDimensionHandler,
    HookPriority::Normal,
    Level,
    "?requestPlayerChangeDimension@Level@@UEAAXAEAVPlayer@@V?$unique_ptr@VChangeDimensionRequest@@U?$default_delete@"
    "VChangeDimensionRequest@@@std@@@std@@@Z",
    void,
    Player&                                 player,
    std::unique_ptr<ChangeDimensionRequest> changeRequest
) {
    auto inId = player.getDimensionId();
    if (changeRequest->mToDimensionId == 1 || changeRequest->mToDimensionId == 2 || inId == 1 || inId == 2
        || player.isDead()) {
        return origin(player, std::move(changeRequest));
    }
    FakeDimensionId::getInstance()
        .teleportToCustomDimension((ServerPlayer&)player, changeRequest->mToDimensionId, changeRequest->mToPosition);
}

void EnableHook() {
    sendpackethook::LoopbackPacketSendersendToClientHandler1::hook();
    sendpackethook::LoopbackPacketSendersendToClientHandler2::hook();
    sendpackethook::LoopbackPacketSendersendToClientsHandler::hook();
    sendpackethook::SubChunkPacketHandler::hook();
    sendpackethook::SpawnParticleEffectPacketHandler::hook();
    sendpackethook::StartGamePacketHandler::hook();
    sendpackethook::ChangeDimensionPacketHandler::hook();
    PlayerdieHandler::hook();
    LevelentityChangeDimensionHandler::hook();
    LevelrequestPlayerChangeDimensionHandler::hook();

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
    LevelentityChangeDimensionHandler::unhook();
    LevelrequestPlayerChangeDimensionHandler::unhook();

    receivepackethook::ServerNetworkHandlerPlayerActionPacketHandler::unhook();
}
} // namespace CustomDimensionHookList

FakeDimensionId::FakeDimensionId() { CustomDimensionHookList::EnableHook(); }

FakeDimensionId::~FakeDimensionId() { CustomDimensionHookList::DisableHook(); }

FakeDimensionId& FakeDimensionId::getInstance() {
    return *CustomDimensionManager::getInstance().fakeDimensionIdInstance;
}

Packet& FakeDimensionId::changePacketDimension(Packet& packet) {
    auto packId = packet.getId();
    switch (packId) {
    case MinecraftPacketIds::RemoveVolumeEntityPacket: {
        auto& tempP             = (RemoveVolumeEntityPacket&)packet;
        tempP.mDimensionType.id = fakeDim;
        logger.debug("MinecraftPacketIds::RemoveVolumeEntityPacket: dimId change to {}", fakeDim);
        return tempP;
    }
    case MinecraftPacketIds::AddVolumeEntityPacket: {
        auto& tempP             = (AddVolumeEntityPacket&)packet;
        tempP.mDimensionType.id = fakeDim;
        logger.debug("MinecraftPacketIds::AddVolumeEntityPacket: dimId change to {}", fakeDim);
        return tempP;
    }
    default:
        return packet;
    }
}

void FakeDimensionId::setNeedRemove(mce::UUID uuid, bool needRemove) {
    if (mSettingMap.count(uuid)) {
        mSettingMap.at(uuid).needRemovePacket = needRemove;
    } else {
        mSettingMap.emplace(uuid, CustomDimensionIdSetting{needRemove, nullptr});
    }
}

bool FakeDimensionId::isNeedRemove(mce::UUID uuid) {
    if (mSettingMap.count(uuid)) {
        return mSettingMap.at(uuid).needRemovePacket;
    };
    return false;
}

void FakeDimensionId::onPlayerGoCustomDimension(mce::UUID uuid, std::function<void()> backDimCallback) {
    if (mSettingMap.count(uuid)) {
        mSettingMap.at(uuid).backDimensionCallback = std::move(backDimCallback);
    } else {
        std::lock_guard lockGuard{mMapMutex};
        mSettingMap.emplace(uuid, CustomDimensionIdSetting{false, std::move(backDimCallback)});
    }
}

void FakeDimensionId::onPlayerLeftCustomDimension(mce::UUID uuid, bool isRespawn) {
    std::lock_guard lockGuard{mMapMutex};
    if (mSettingMap.count(uuid)) {
        if (isRespawn) {
            mSettingMap.at(uuid).needRemovePacket      = false;
            mSettingMap.at(uuid).backDimensionCallback = nullptr;
        } else {
            mSettingMap.erase(uuid);
        }
    }
}

std::function<void()> FakeDimensionId::getBackDimensionCallback(mce::UUID uuid) {
    if (mSettingMap.count(uuid)) {
        return mSettingMap.at(uuid).backDimensionCallback;
    } else {
        return nullptr;
    }
}
bool FakeDimensionId::teleportToCustomDimension(ServerPlayer& player, DimensionType dimensionType, Vec3& pos) {
    auto inId = player.getDimensionId();
    if (inId == dimensionType) {
        logger.warn("player->{} already at this id->{} dimension!", player.getNameTag(), dimensionType.id);
        return false;
    }
    if (dimensionType < 3) {
        logger.debug("This Dimension Id->{} is not More dimension id!!!", dimensionType.id);
        return false;
    }
    if (inId >= 3 || inId == fakeDim) {
        player.teleport(pos, temporaryDimId);
        auto uuid = player.getUuid();
        onPlayerGoCustomDimension(uuid, [uuid, pos, dimensionType]() {
            ll::service::getLevel()->getPlayer(uuid)->teleport(pos, dimensionType);
        });
        return true;
    }
    return false;
}
} // namespace ll::dimension
