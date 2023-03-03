/**
 * @file  ServerNetworkHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "Social.hpp"
#include "Automation.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerNetworkHandler.
 *
 */
class ServerNetworkHandler {

#define AFTER_EXTRA
// Add Member There
#define ENABLE_VIRTUAL_FAKESYMBOL_SERVERNETWORKHANDLER

public:
    inline void onClientAuthenticated(class NetworkIdentifier const& a0, class Certificate const& a1)
    {
       return _onClientAuthenticated(a0, a1);
    }
    // Do not use _getServerPlayer directly
    inline class ServerPlayer* getServerPlayer(class NetworkIdentifier const& a0, char a1=0) {
        auto v3 = (ServerNetworkHandler*)((char*)this - 16);
        return v3->_getServerPlayer(a0, (SubClientId)a1);
    }

    inline int getActiveAndInProgressPlayerCount(class mce::UUID a1)
    {
        return _getActiveAndInProgressPlayerCount(a1);
    }
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERNETWORKHANDLER
public:
    class ServerNetworkHandler& operator=(class ServerNetworkHandler const &) = delete;
    ServerNetworkHandler(class ServerNetworkHandler const &) = delete;
    ServerNetworkHandler() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERNETWORKHANDLER
    /**
     * @symbol  ?_getServerPlayer\@ServerNetworkHandler\@\@EEAAPEAVServerPlayer\@\@AEBVNetworkIdentifier\@\@W4SubClientId\@\@\@Z
     */
    MCVAPI class ServerPlayer * _getServerPlayer(class NetworkIdentifier const &, enum class SubClientId);
    /**
     * @symbol  ?allowIncomingPacketId\@ServerNetworkHandler\@\@UEAA_NAEBVNetworkIdentifier\@\@W4MinecraftPacketIds\@\@\@Z
     */
    MCVAPI bool allowIncomingPacketId(class NetworkIdentifier const &, enum class MinecraftPacketIds);
    /**
     * @symbol  ?getGameSpecificNetEventCallback\@ServerNetworkHandler\@\@UEAAPEAVGameSpecificNetEventCallback\@\@XZ
     */
    MCVAPI class GameSpecificNetEventCallback * getGameSpecificNetEventCallback();
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVChangeMobPropertyPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ChangeMobPropertyPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPhotoTransferPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PhotoTransferPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCreatePhotoPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CreatePhotoPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVEditorNetworkPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EditorNetworkPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPurchaseReceiptPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PurchaseReceiptPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCompletedUsingItemPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CompletedUsingItemPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdatePlayerGameTypePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdatePlayerGameTypePacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@V?$shared_ptr\@VBlockActorDataPacket\@\@\@std\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class BlockActorDataPacket>);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVActorEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ActorEventPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVActorPickRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ActorPickRequestPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAnimatePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AnimatePacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAnvilDamagePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AnvilDamagePacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBlockPickRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BlockPickRequestPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBookEditPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BookEditPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBossEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BossEventPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVClientCacheBlobStatusPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientCacheBlobStatusPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVClientCacheStatusPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientCacheStatusPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVClientToServerHandshakePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientToServerHandshakePacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCodeBuilderSourcePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CodeBuilderSourcePacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCommandBlockUpdatePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CommandBlockUpdatePacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCommandRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CommandRequestPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVContainerClosePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ContainerClosePacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCraftingEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CraftingEventPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVDebugInfoPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class DebugInfoPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVDisconnectPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class DisconnectPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVEmoteListPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EmoteListPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVEmotePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EmotePacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVFilterTextPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class FilterTextPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVGameTestRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class GameTestRequestPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVInteractPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class InteractPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVInventoryTransactionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class InventoryTransactionPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVItemFrameDropItemPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ItemFrameDropItemPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVItemStackRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ItemStackRequestPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLabTablePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LabTablePacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLecternUpdatePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LecternUpdatePacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLevelSoundEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLevelSoundEventPacketV2\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacketV2 const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLevelSoundEventPacketV1\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacketV1 const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLoginPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LoginPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMapCreateLockedCopyPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MapCreateLockedCopyPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMapInfoRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MapInfoRequestPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMobEquipmentPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MobEquipmentPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVModalFormResponsePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ModalFormResponsePacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMoveActorAbsolutePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MoveActorAbsolutePacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMovePlayerPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MovePlayerPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMultiplayerSettingsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MultiplayerSettingsPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVNetworkStackLatencyPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class NetworkStackLatencyPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVNpcRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class NpcRequestPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPassengerJumpPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PassengerJumpPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerActionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerActionPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerAuthInputPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerAuthInputPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerHotbarPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerHotbarPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerInputPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerInputPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerSkinPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerSkinPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPositionTrackingDBClientRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PositionTrackingDBClientRequestPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRequestAbilityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestAbilityPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRequestChunkRadiusPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestChunkRadiusPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRequestNetworkSettingsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestNetworkSettingsPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRequestPermissionsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestPermissionsPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackChunkRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackChunkRequestPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRespawnPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RespawnPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVScriptMessagePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ScriptMessagePacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetDefaultGameTypePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetDefaultGameTypePacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetDifficultyPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetDifficultyPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetLocalPlayerAsInitializedPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetLocalPlayerAsInitializedPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetPlayerGameTypePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetPlayerGameTypePacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSettingsCommandPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SettingsCommandPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVShowCreditsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ShowCreditsPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSimpleEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SimpleEventPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSpawnExperienceOrbPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SpawnExperienceOrbPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVStructureBlockUpdatePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class StructureBlockUpdatePacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVStructureTemplateDataRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class StructureTemplateDataRequestPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSubChunkRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SubChunkRequestPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSubClientLoginPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SubClientLoginPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVTextPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class TextPacket const &);
    /**
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVTickSyncPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class TickSyncPacket const &);
    /**
     * @symbol  ?onDisconnect\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N1\@Z
     */
    MCVAPI void onDisconnect(class NetworkIdentifier const &, std::string const &, bool, std::string const &);
    /**
     * @symbol  ?onInvalidPlayerJoinedLobby\@ServerNetworkHandler\@\@UEAAXAEBVUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onInvalidPlayerJoinedLobby(class mce::UUID const &, std::string const &);
    /**
     * @symbol  ?onPlayerReady\@ServerNetworkHandler\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void onPlayerReady(class Player &);
    /**
     * @symbol  ?onTextFilterSkipped\@ServerNetworkHandler\@\@EEAAXAEBVNetworkIdentifier\@\@W4SubClientId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onTextFilterSkipped(class NetworkIdentifier const &, enum class SubClientId, std::string const &);
    /**
     * @symbol  ?onTick\@ServerNetworkHandler\@\@UEAAXXZ
     */
    MCVAPI void onTick();
    /**
     * @symbol  ?onTransferRequest\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCVAPI void onTransferRequest(class NetworkIdentifier const &, std::string const &, int);
    /**
     * @symbol  ?onWebsocketRequest\@ServerNetworkHandler\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0V?$function\@$$A6AXXZ\@3\@\@Z
     */
    MCVAPI void onWebsocketRequest(std::string const &, std::string const &, class std::function<void (void)>);
    /**
     * @symbol  ?onXboxUserBlocked\@ServerNetworkHandler\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onXboxUserBlocked(std::string const &);
    /**
     * @symbol  ?onXboxUserUnblocked\@ServerNetworkHandler\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onXboxUserUnblocked(std::string const &);
    /**
     * @symbol  ?sendServerLegacyParticle\@ServerNetworkHandler\@\@UEAAXW4ParticleType\@\@AEBVVec3\@\@1H\@Z
     */
    MCVAPI void sendServerLegacyParticle(enum class ParticleType, class Vec3 const &, class Vec3 const &, int);
    /**
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~ServerNetworkHandler();
#endif
    /**
     * @symbol  ??0ServerNetworkHandler\@\@QEAA\@AEAVGameCallbacks\@\@AEBV?$NonOwnerPointer\@VILevel\@\@\@Bedrock\@\@AEAVNetworkHandler\@\@AEAVPrivateKeyManager\@\@AEAVServerLocator\@\@AEAVPacketSender\@\@AEAVAllowList\@\@PEAVPermissionsFile\@\@AEBVUUID\@mce\@\@H_NAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HAEAVMinecraftCommands\@\@AEAVIMinecraftApp\@\@AEBV?$unordered_map\@UPackIdVersion\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@UPackIdVersion\@\@\@3\@U?$equal_to\@UPackIdVersion\@\@\@3\@V?$allocator\@U?$pair\@$$CBUPackIdVersion\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@AEAVScheduler\@\@V?$NonOwnerPointer\@VTextFilteringProcessor\@\@\@3\@V?$optional_ref\@VMinecraftGameTest\@\@\@\@V?$ServiceReference\@VAppConfigs\@\@\@\@V?$ServiceReference\@VMultiplayerServiceManager\@Social\@\@\@\@9\@Z
     */
    MCAPI ServerNetworkHandler(class GameCallbacks &, class Bedrock::NonOwnerPointer<class ILevel> const &, class NetworkHandler &, class PrivateKeyManager &, class ServerLocator &, class PacketSender &, class AllowList &, class PermissionsFile *, class mce::UUID const &, int, bool, std::vector<std::string> const &, std::string, int, class MinecraftCommands &, class IMinecraftApp &, class std::unordered_map<struct PackIdVersion, std::string, struct std::hash<struct PackIdVersion>, struct std::equal_to<struct PackIdVersion>, class std::allocator<struct std::pair<struct PackIdVersion const, std::string>>> const &, class Scheduler &, class Bedrock::NonOwnerPointer<class TextFilteringProcessor>, class optional_ref<class MinecraftGameTest>, class ServiceReference<class AppConfigs>, class ServiceReference<class Social::MultiplayerServiceManager>, bool);
    /**
     * @symbol  ?activateAllowList\@ServerNetworkHandler\@\@QEAAXXZ
     */
    MCAPI void activateAllowList();
    /**
     * @symbol  ?addToDenyList\@ServerNetworkHandler\@\@QEAAXAEBVUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addToDenyList(class mce::UUID const &, std::string const &);
    /**
     * @symbol  ?allowIncomingConnections\@ServerNetworkHandler\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void allowIncomingConnections(std::string const &, bool);
    /**
     * @symbol  ?createNewPlayer\@ServerNetworkHandler\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEBVNetworkIdentifier\@\@AEBVConnectionRequest\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> createNewPlayer(class NetworkIdentifier const &, class ConnectionRequest const &);
    /**
     * @symbol  ?createSimulatedPlayer\@ServerNetworkHandler\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> createSimulatedPlayer(std::string const &, std::string const &);
    /**
     * @symbol  ?disallowIncomingConnections\@ServerNetworkHandler\@\@QEAAXXZ
     */
    MCAPI void disallowIncomingConnections();
    /**
     * @symbol  ?disconnectClient\@ServerNetworkHandler\@\@QEAAXAEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void disconnectClient(class NetworkIdentifier const &, std::string const &, bool);
    /**
     * @symbol  ?disconnectClient\@ServerNetworkHandler\@\@QEAAXAEBVNetworkIdentifier\@\@W4SubClientId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void disconnectClient(class NetworkIdentifier const &, enum class SubClientId, std::string const &, bool);
    /**
     * @symbol  ?engineCancelResponseHelper\@ServerNetworkHandler\@\@QEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackClientResponsePacket\@\@\@Z
     */
    MCAPI void engineCancelResponseHelper(class NetworkIdentifier const &, class ResourcePackClientResponsePacket const &);
    /**
     * @symbol  ?engineDownloadingFinishedResponseHelper\@ServerNetworkHandler\@\@QEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackClientResponsePacket\@\@\@Z
     */
    MCAPI void engineDownloadingFinishedResponseHelper(class NetworkIdentifier const &, class ResourcePackClientResponsePacket const &);
    /**
     * @symbol  ?engineDownloadingResponseHelper\@ServerNetworkHandler\@\@QEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackClientResponsePacket\@\@\@Z
     */
    MCAPI void engineDownloadingResponseHelper(class NetworkIdentifier const &, class ResourcePackClientResponsePacket const &);
    /**
     * @symbol  ?fetchConnectionRequest\@ServerNetworkHandler\@\@QEAAAEBVConnectionRequest\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI class ConnectionRequest const & fetchConnectionRequest(class NetworkIdentifier const &);
    /**
     * @symbol  ?isDedicatedServer\@ServerNetworkHandler\@\@QEAA_NXZ
     */
    MCAPI bool isDedicatedServer();
    /**
     * @symbol  ?isHost\@ServerNetworkHandler\@\@QEAA_NAEAVServerPlayer\@\@\@Z
     */
    MCAPI bool isHost(class ServerPlayer &);
    /**
     * @symbol  ?onReady_ClientGeneration\@ServerNetworkHandler\@\@QEAAXAEAVPlayer\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI void onReady_ClientGeneration(class Player &, class NetworkIdentifier const &);
    /**
     * @symbol  ?onStartShutdown\@ServerNetworkHandler\@\@QEAAXXZ
     */
    MCAPI void onStartShutdown();
    /**
     * @symbol  ?persistPlayerPermissionsToDisk\@ServerNetworkHandler\@\@QEAAXAEBVUserEntityIdentifierComponent\@\@W4PlayerPermissionLevel\@\@\@Z
     */
    MCAPI void persistPlayerPermissionsToDisk(class UserEntityIdentifierComponent const &, enum class PlayerPermissionLevel);
    /**
     * @symbol  ?sendLoginMessageLocal\@ServerNetworkHandler\@\@QEAAXAEBVNetworkIdentifier\@\@AEBVConnectionRequest\@\@AEAVServerPlayer\@\@\@Z
     */
    MCAPI void sendLoginMessageLocal(class NetworkIdentifier const &, class ConnectionRequest const &, class ServerPlayer &);
    /**
     * @symbol  ?setAutomationClient\@ServerNetworkHandler\@\@QEAAXV?$NonOwnerPointer\@VAutomationClient\@Automation\@\@\@Bedrock\@\@\@Z
     */
    MCAPI void setAutomationClient(class Bedrock::NonOwnerPointer<class Automation::AutomationClient>);
    /**
     * @symbol  ?setMaxNumPlayers\@ServerNetworkHandler\@\@QEAAHH\@Z
     */
    MCAPI int setMaxNumPlayers(int);
    /**
     * @symbol  ?setNewPlayerPermissions\@ServerNetworkHandler\@\@QEAAXAEAVServerPlayer\@\@\@Z
     */
    MCAPI void setNewPlayerPermissions(class ServerPlayer &);
    /**
     * @symbol  ?trytLoadPlayer\@ServerNetworkHandler\@\@QEAA_NAEAVServerPlayer\@\@AEBVConnectionRequest\@\@\@Z
     */
    MCAPI bool trytLoadPlayer(class ServerPlayer &, class ConnectionRequest const &);
    /**
     * @symbol  ?updateServerAnnouncement\@ServerNetworkHandler\@\@QEAAXXZ
     */
    MCAPI void updateServerAnnouncement();

//private:
    /**
     * @symbol  ?_buildSubChunkPacketData\@ServerNetworkHandler\@\@AEAAXAEBVNetworkIdentifier\@\@PEBVServerPlayer\@\@AEBVSubChunkRequestPacket\@\@AEAVSubChunkPacket\@\@I_N\@Z
     */
    MCAPI void _buildSubChunkPacketData(class NetworkIdentifier const &, class ServerPlayer const *, class SubChunkRequestPacket const &, class SubChunkPacket &, unsigned int, bool);
    /**
     * @symbol  ?_createNewPlayer\@ServerNetworkHandler\@\@AEAAAEAVServerPlayer\@\@AEBVNetworkIdentifier\@\@AEBVSubClientConnectionRequest\@\@W4SubClientId\@\@\@Z
     */
    MCAPI class ServerPlayer & _createNewPlayer(class NetworkIdentifier const &, class SubClientConnectionRequest const &, enum class SubClientId);
    /**
     * @symbol  ?_displayGameMessage\@ServerNetworkHandler\@\@AEAAXAEBVPlayer\@\@AEAUChatEvent\@\@\@Z
     */
    MCAPI void _displayGameMessage(class Player const &, struct ChatEvent &);
    /**
     * @symbol  ?_getActiveAndInProgressPlayerCount\@ServerNetworkHandler\@\@AEBAHVUUID\@mce\@\@\@Z
     */
    MCAPI int _getActiveAndInProgressPlayerCount(class mce::UUID) const;
    /**
     * @symbol  ?_getDisplayName\@ServerNetworkHandler\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCertificate\@\@_NAEBV23\@\@Z
     */
    MCAPI std::string _getDisplayName(class Certificate const &, bool, std::string const &) const;
    /**
     * @symbol  ?_handleCommandBlockUpdatePacket\@ServerNetworkHandler\@\@AEAAXAEBVServerPlayer\@\@AEBVNetworkIdentifier\@\@AEBVCommandBlockUpdatePacket\@\@\@Z
     */
    MCAPI void _handleCommandBlockUpdatePacket(class ServerPlayer const &, class NetworkIdentifier const &, class CommandBlockUpdatePacket const &);
    /**
     * @symbol  ?_handleSetDifficulty\@ServerNetworkHandler\@\@AEBAXAEBVServerPlayer\@\@AEBVSetDifficultyPacket\@\@\@Z
     */
    MCAPI void _handleSetDifficulty(class ServerPlayer const &, class SetDifficultyPacket const &) const;
    /**
     * @symbol  ?_loadNewPlayer\@ServerNetworkHandler\@\@AEAA_NAEAVServerPlayer\@\@_N\@Z
     */
    MCAPI bool _loadNewPlayer(class ServerPlayer &, bool);
    /**
     * @symbol  ?_onClientAuthenticated\@ServerNetworkHandler\@\@AEAAXAEBVNetworkIdentifier\@\@AEBVCertificate\@\@\@Z
     */
    MCAPI void _onClientAuthenticated(class NetworkIdentifier const &, class Certificate const &);
    /**
     * @symbol  ?_onPlayerLeft\@ServerNetworkHandler\@\@AEAAXPEAVServerPlayer\@\@_N\@Z
     */
    MCAPI void _onPlayerLeft(class ServerPlayer *, bool);
    /**
     * @symbol  ?_onSubClientAuthenticated\@ServerNetworkHandler\@\@AEAAXAEBVNetworkIdentifier\@\@AEBVCertificate\@\@AEBVSubClientLoginPacket\@\@\@Z
     */
    MCAPI void _onSubClientAuthenticated(class NetworkIdentifier const &, class Certificate const &, class SubClientLoginPacket const &);
    /**
     * @symbol  ?_sendAdditionalLevelData\@ServerNetworkHandler\@\@AEAAXAEAVServerPlayer\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI void _sendAdditionalLevelData(class ServerPlayer &, class NetworkIdentifier const &);
    /**
     * @symbol  ?_sendLevelData\@ServerNetworkHandler\@\@AEAAXAEAVServerPlayer\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI void _sendLevelData(class ServerPlayer &, class NetworkIdentifier const &);
    /**
     * @symbol  ?_updatePermissions\@ServerNetworkHandler\@\@AEAA_NAEBVServerPlayer\@\@AEBVRequestPermissionsPacket\@\@AEAVAbilities\@\@AEAVPermissionsHandler\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI bool _updatePermissions(class ServerPlayer const &, class RequestPermissionsPacket const &, class Abilities &, class PermissionsHandler &, class Player *);

private:

};