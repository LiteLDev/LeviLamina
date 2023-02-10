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
     * @hash   -1800729655
     * @symbol  ?_getServerPlayer\@ServerNetworkHandler\@\@EEAAPEAVServerPlayer\@\@AEBVNetworkIdentifier\@\@W4SubClientId\@\@\@Z
     */
    MCVAPI class ServerPlayer * _getServerPlayer(class NetworkIdentifier const &, enum class SubClientId);
    /**
     * @hash   1907791611
     * @symbol  ?allowIncomingPacketId\@ServerNetworkHandler\@\@UEAA_NAEBVNetworkIdentifier\@\@W4MinecraftPacketIds\@\@\@Z
     */
    MCVAPI bool allowIncomingPacketId(class NetworkIdentifier const &, enum class MinecraftPacketIds);
    /**
     * @hash   750955316
     * @symbol  ?getGameSpecificNetEventCallback\@ServerNetworkHandler\@\@UEAAPEAVGameSpecificNetEventCallback\@\@XZ
     */
    MCVAPI class GameSpecificNetEventCallback * getGameSpecificNetEventCallback();
    /**
     * @hash   -469168838
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVChangeMobPropertyPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ChangeMobPropertyPacket const &);
    /**
     * @hash   -540687838
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPhotoTransferPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PhotoTransferPacket const &);
    /**
     * @hash   -2140294327
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCreatePhotoPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CreatePhotoPacket const &);
    /**
     * @hash   1657542750
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVEditorNetworkPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EditorNetworkPacket const &);
    /**
     * @hash   408557672
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPurchaseReceiptPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PurchaseReceiptPacket const &);
    /**
     * @hash   1612462827
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCompletedUsingItemPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CompletedUsingItemPacket const &);
    /**
     * @hash   -1961222639
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdatePlayerGameTypePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdatePlayerGameTypePacket const &);
    /**
     * @hash   1197128074
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@V?$shared_ptr\@VBlockActorDataPacket\@\@\@std\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class BlockActorDataPacket>);
    /**
     * @hash   1466295778
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVActorEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ActorEventPacket const &);
    /**
     * @hash   1868486542
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVActorPickRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ActorPickRequestPacket const &);
    /**
     * @hash   386614510
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAnimatePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AnimatePacket const &);
    /**
     * @hash   899357892
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAnvilDamagePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AnvilDamagePacket const &);
    /**
     * @hash   61674870
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBlockPickRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BlockPickRequestPacket const &);
    /**
     * @hash   980073124
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBookEditPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BookEditPacket const &);
    /**
     * @hash   -574728622
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBossEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BossEventPacket const &);
    /**
     * @hash   -1894083447
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVClientCacheBlobStatusPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientCacheBlobStatusPacket const &);
    /**
     * @hash   874524262
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVClientCacheStatusPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientCacheStatusPacket const &);
    /**
     * @hash   -294721007
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVClientToServerHandshakePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientToServerHandshakePacket const &);
    /**
     * @hash   -1586493802
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCodeBuilderSourcePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CodeBuilderSourcePacket const &);
    /**
     * @hash   -443568820
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCommandBlockUpdatePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CommandBlockUpdatePacket const &);
    /**
     * @hash   1747248339
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCommandRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CommandRequestPacket const &);
    /**
     * @hash   31827152
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVContainerClosePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ContainerClosePacket const &);
    /**
     * @hash   -265480489
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCraftingEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CraftingEventPacket const &);
    /**
     * @hash   1344590030
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVDebugInfoPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class DebugInfoPacket const &);
    /**
     * @hash   602488251
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVDisconnectPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class DisconnectPacket const &);
    /**
     * @hash   -229660359
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVEmoteListPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EmoteListPacket const &);
    /**
     * @hash   -1637097465
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVEmotePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EmotePacket const &);
    /**
     * @hash   -1255920270
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVFilterTextPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class FilterTextPacket const &);
    /**
     * @hash   8465652
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVGameTestRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class GameTestRequestPacket const &);
    /**
     * @hash   1827502113
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVInteractPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class InteractPacket const &);
    /**
     * @hash   752297525
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVInventoryTransactionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class InventoryTransactionPacket const &);
    /**
     * @hash   -1570153965
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVItemFrameDropItemPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ItemFrameDropItemPacket const &);
    /**
     * @hash   73858733
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVItemStackRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ItemStackRequestPacket const &);
    /**
     * @hash   -303196122
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLabTablePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LabTablePacket const &);
    /**
     * @hash   -1044743761
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLecternUpdatePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LecternUpdatePacket const &);
    /**
     * @hash   -985557376
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLevelSoundEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacket const &);
    /**
     * @hash   -151298652
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLevelSoundEventPacketV2\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacketV2 const &);
    /**
     * @hash   324937941
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLevelSoundEventPacketV1\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacketV1 const &);
    /**
     * @hash   -25947034
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLoginPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LoginPacket const &);
    /**
     * @hash   -56559672
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMapCreateLockedCopyPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MapCreateLockedCopyPacket const &);
    /**
     * @hash   39418546
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMapInfoRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MapInfoRequestPacket const &);
    /**
     * @hash   1512132233
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMobEquipmentPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MobEquipmentPacket const &);
    /**
     * @hash   -132949779
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVModalFormResponsePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ModalFormResponsePacket const &);
    /**
     * @hash   -1697240780
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMoveActorAbsolutePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MoveActorAbsolutePacket const &);
    /**
     * @hash   410029189
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMovePlayerPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MovePlayerPacket const &);
    /**
     * @hash   -1759650142
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMultiplayerSettingsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MultiplayerSettingsPacket const &);
    /**
     * @hash   2091546795
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVNetworkStackLatencyPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class NetworkStackLatencyPacket const &);
    /**
     * @hash   -231050791
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVNpcRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class NpcRequestPacket const &);
    /**
     * @hash   1434167751
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPassengerJumpPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PassengerJumpPacket const &);
    /**
     * @hash   -1116639504
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerActionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerActionPacket const &);
    /**
     * @hash   1502807566
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerAuthInputPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerAuthInputPacket const &);
    /**
     * @hash   -584370848
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerHotbarPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerHotbarPacket const &);
    /**
     * @hash   887837062
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerInputPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerInputPacket const &);
    /**
     * @hash   -997439063
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerSkinPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerSkinPacket const &);
    /**
     * @hash   11186233
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPositionTrackingDBClientRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PositionTrackingDBClientRequestPacket const &);
    /**
     * @hash   -1243029380
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRequestAbilityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestAbilityPacket const &);
    /**
     * @hash   -1254137449
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRequestChunkRadiusPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestChunkRadiusPacket const &);
    /**
     * @hash   -646426043
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRequestNetworkSettingsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestNetworkSettingsPacket const &);
    /**
     * @hash   -284692814
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRequestPermissionsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestPermissionsPacket const &);
    /**
     * @hash   1214192814
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackChunkRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackChunkRequestPacket const &);
    /**
     * @hash   -1575605545
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRespawnPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RespawnPacket const &);
    /**
     * @hash   -2105693533
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVScriptMessagePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ScriptMessagePacket const &);
    /**
     * @hash   -1903608180
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetDefaultGameTypePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetDefaultGameTypePacket const &);
    /**
     * @hash   1748194242
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetDifficultyPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetDifficultyPacket const &);
    /**
     * @hash   -736067753
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetLocalPlayerAsInitializedPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetLocalPlayerAsInitializedPacket const &);
    /**
     * @hash   997332928
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetPlayerGameTypePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetPlayerGameTypePacket const &);
    /**
     * @hash   -643254425
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSettingsCommandPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SettingsCommandPacket const &);
    /**
     * @hash   -706785678
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVShowCreditsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ShowCreditsPacket const &);
    /**
     * @hash   430668103
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSimpleEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SimpleEventPacket const &);
    /**
     * @hash   -149185619
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSpawnExperienceOrbPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SpawnExperienceOrbPacket const &);
    /**
     * @hash   2125270228
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVStructureBlockUpdatePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class StructureBlockUpdatePacket const &);
    /**
     * @hash   -1843568737
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVStructureTemplateDataRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class StructureTemplateDataRequestPacket const &);
    /**
     * @hash   -1586131779
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSubChunkRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SubChunkRequestPacket const &);
    /**
     * @hash   1583222073
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSubClientLoginPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SubClientLoginPacket const &);
    /**
     * @hash   -2072371046
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVTextPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class TextPacket const &);
    /**
     * @hash   793979839
     * @symbol  ?handle\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVTickSyncPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class TickSyncPacket const &);
    /**
     * @hash   1665543213
     * @symbol  ?onDisconnect\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N1\@Z
     */
    MCVAPI void onDisconnect(class NetworkIdentifier const &, std::string const &, bool, std::string const &);
    /**
     * @hash   -1389073871
     * @symbol  ?onInvalidPlayerJoinedLobby\@ServerNetworkHandler\@\@UEAAXAEBVUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onInvalidPlayerJoinedLobby(class mce::UUID const &, std::string const &);
    /**
     * @hash   758857128
     * @symbol  ?onPlayerReady\@ServerNetworkHandler\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void onPlayerReady(class Player &);
    /**
     * @hash   366558980
     * @symbol  ?onTextFilterSkipped\@ServerNetworkHandler\@\@EEAAXAEBVNetworkIdentifier\@\@W4SubClientId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onTextFilterSkipped(class NetworkIdentifier const &, enum class SubClientId, std::string const &);
    /**
     * @hash   -359559004
     * @symbol  ?onTick\@ServerNetworkHandler\@\@UEAAXXZ
     */
    MCVAPI void onTick();
    /**
     * @hash   1728210648
     * @symbol  ?onTransferRequest\@ServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCVAPI void onTransferRequest(class NetworkIdentifier const &, std::string const &, int);
    /**
     * @hash   -149032994
     * @symbol  ?onWebsocketRequest\@ServerNetworkHandler\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0V?$function\@$$A6AXXZ\@3\@\@Z
     */
    MCVAPI void onWebsocketRequest(std::string const &, std::string const &, class std::function<void (void)>);
    /**
     * @hash   -582572699
     * @symbol  ?onXboxUserBlocked\@ServerNetworkHandler\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onXboxUserBlocked(std::string const &);
    /**
     * @hash   -195203362
     * @symbol  ?onXboxUserUnblocked\@ServerNetworkHandler\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onXboxUserUnblocked(std::string const &);
    /**
     * @hash   -943339483
     * @symbol  ?sendServerLegacyParticle\@ServerNetworkHandler\@\@UEAAXW4ParticleType\@\@AEBVVec3\@\@1H\@Z
     */
    MCVAPI void sendServerLegacyParticle(enum class ParticleType, class Vec3 const &, class Vec3 const &, int);
    /**
     * @hash   1774819908
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~ServerNetworkHandler();
#endif
    /**
     * @hash   -569077449
     * @symbol  ??0ServerNetworkHandler\@\@QEAA\@AEAVGameCallbacks\@\@AEBV?$NonOwnerPointer\@VILevel\@\@\@Bedrock\@\@AEAVNetworkHandler\@\@AEAVPrivateKeyManager\@\@AEAVServerLocator\@\@AEAVPacketSender\@\@AEAVAllowList\@\@PEAVPermissionsFile\@\@AEBVUUID\@mce\@\@H_NAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HAEAVMinecraftCommands\@\@AEAVIMinecraftApp\@\@AEBV?$unordered_map\@UPackIdVersion\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@UPackIdVersion\@\@\@3\@U?$equal_to\@UPackIdVersion\@\@\@3\@V?$allocator\@U?$pair\@$$CBUPackIdVersion\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@AEAVScheduler\@\@V?$NonOwnerPointer\@VTextFilteringProcessor\@\@\@3\@V?$optional_ref\@VMinecraftGameTest\@\@\@\@V?$ServiceReference\@VAppConfigs\@\@\@\@V?$ServiceReference\@VMultiplayerServiceManager\@Social\@\@\@\@9\@Z
     */
    MCAPI ServerNetworkHandler(class GameCallbacks &, class Bedrock::NonOwnerPointer<class ILevel> const &, class NetworkHandler &, class PrivateKeyManager &, class ServerLocator &, class PacketSender &, class AllowList &, class PermissionsFile *, class mce::UUID const &, int, bool, std::vector<std::string> const &, std::string, int, class MinecraftCommands &, class IMinecraftApp &, class std::unordered_map<struct PackIdVersion, std::string, struct std::hash<struct PackIdVersion>, struct std::equal_to<struct PackIdVersion>, class std::allocator<struct std::pair<struct PackIdVersion const, std::string>>> const &, class Scheduler &, class Bedrock::NonOwnerPointer<class TextFilteringProcessor>, class optional_ref<class MinecraftGameTest>, class ServiceReference<class AppConfigs>, class ServiceReference<class Social::MultiplayerServiceManager>, bool);
    /**
     * @hash   1274447459
     * @symbol  ?activateAllowList\@ServerNetworkHandler\@\@QEAAXXZ
     */
    MCAPI void activateAllowList();
    /**
     * @hash   -1695348221
     * @symbol  ?addToDenyList\@ServerNetworkHandler\@\@QEAAXAEBVUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addToDenyList(class mce::UUID const &, std::string const &);
    /**
     * @hash   258544299
     * @symbol  ?allowIncomingConnections\@ServerNetworkHandler\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void allowIncomingConnections(std::string const &, bool);
    /**
     * @hash   1509603975
     * @symbol  ?createNewPlayer\@ServerNetworkHandler\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEBVNetworkIdentifier\@\@AEBVConnectionRequest\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> createNewPlayer(class NetworkIdentifier const &, class ConnectionRequest const &);
    /**
     * @hash   -1110536742
     * @symbol  ?createSimulatedPlayer\@ServerNetworkHandler\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> createSimulatedPlayer(std::string const &, std::string const &);
    /**
     * @hash   450838051
     * @symbol  ?disallowIncomingConnections\@ServerNetworkHandler\@\@QEAAXXZ
     */
    MCAPI void disallowIncomingConnections();
    /**
     * @hash   494410516
     * @symbol  ?disconnectClient\@ServerNetworkHandler\@\@QEAAXAEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void disconnectClient(class NetworkIdentifier const &, std::string const &, bool);
    /**
     * @hash   846597689
     * @symbol  ?disconnectClient\@ServerNetworkHandler\@\@QEAAXAEBVNetworkIdentifier\@\@W4SubClientId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void disconnectClient(class NetworkIdentifier const &, enum class SubClientId, std::string const &, bool);
    /**
     * @hash   1089876949
     * @symbol  ?engineCancelResponseHelper\@ServerNetworkHandler\@\@QEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackClientResponsePacket\@\@\@Z
     */
    MCAPI void engineCancelResponseHelper(class NetworkIdentifier const &, class ResourcePackClientResponsePacket const &);
    /**
     * @hash   -1181721501
     * @symbol  ?engineDownloadingFinishedResponseHelper\@ServerNetworkHandler\@\@QEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackClientResponsePacket\@\@\@Z
     */
    MCAPI void engineDownloadingFinishedResponseHelper(class NetworkIdentifier const &, class ResourcePackClientResponsePacket const &);
    /**
     * @hash   -393097489
     * @symbol  ?engineDownloadingResponseHelper\@ServerNetworkHandler\@\@QEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackClientResponsePacket\@\@\@Z
     */
    MCAPI void engineDownloadingResponseHelper(class NetworkIdentifier const &, class ResourcePackClientResponsePacket const &);
    /**
     * @hash   -268303627
     * @symbol  ?fetchConnectionRequest\@ServerNetworkHandler\@\@QEAAAEBVConnectionRequest\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI class ConnectionRequest const & fetchConnectionRequest(class NetworkIdentifier const &);
    /**
     * @hash   -2025184430
     * @symbol  ?isDedicatedServer\@ServerNetworkHandler\@\@QEAA_NXZ
     */
    MCAPI bool isDedicatedServer();
    /**
     * @hash   -81422663
     * @symbol  ?isHost\@ServerNetworkHandler\@\@QEAA_NAEAVServerPlayer\@\@\@Z
     */
    MCAPI bool isHost(class ServerPlayer &);
    /**
     * @hash   -1668507773
     * @symbol  ?onReady_ClientGeneration\@ServerNetworkHandler\@\@QEAAXAEAVPlayer\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI void onReady_ClientGeneration(class Player &, class NetworkIdentifier const &);
    /**
     * @hash   -295783549
     * @symbol  ?onStartShutdown\@ServerNetworkHandler\@\@QEAAXXZ
     */
    MCAPI void onStartShutdown();
    /**
     * @hash   1608491975
     * @symbol  ?persistPlayerPermissionsToDisk\@ServerNetworkHandler\@\@QEAAXAEBVUserEntityIdentifierComponent\@\@W4PlayerPermissionLevel\@\@\@Z
     */
    MCAPI void persistPlayerPermissionsToDisk(class UserEntityIdentifierComponent const &, enum class PlayerPermissionLevel);
    /**
     * @hash   1451030614
     * @symbol  ?sendLoginMessageLocal\@ServerNetworkHandler\@\@QEAAXAEBVNetworkIdentifier\@\@AEBVConnectionRequest\@\@AEAVServerPlayer\@\@\@Z
     */
    MCAPI void sendLoginMessageLocal(class NetworkIdentifier const &, class ConnectionRequest const &, class ServerPlayer &);
    /**
     * @hash   -567681991
     * @symbol  ?setAutomationClient\@ServerNetworkHandler\@\@QEAAXV?$NonOwnerPointer\@VAutomationClient\@Automation\@\@\@Bedrock\@\@\@Z
     */
    MCAPI void setAutomationClient(class Bedrock::NonOwnerPointer<class Automation::AutomationClient>);
    /**
     * @hash   -1617478799
     * @symbol  ?setMaxNumPlayers\@ServerNetworkHandler\@\@QEAAHH\@Z
     */
    MCAPI int setMaxNumPlayers(int);
    /**
     * @hash   306086774
     * @symbol  ?setNewPlayerPermissions\@ServerNetworkHandler\@\@QEAAXAEAVServerPlayer\@\@\@Z
     */
    MCAPI void setNewPlayerPermissions(class ServerPlayer &);
    /**
     * @hash   -1611511742
     * @symbol  ?trytLoadPlayer\@ServerNetworkHandler\@\@QEAA_NAEAVServerPlayer\@\@AEBVConnectionRequest\@\@\@Z
     */
    MCAPI bool trytLoadPlayer(class ServerPlayer &, class ConnectionRequest const &);
    /**
     * @hash   611235893
     * @symbol  ?updateServerAnnouncement\@ServerNetworkHandler\@\@QEAAXXZ
     */
    MCAPI void updateServerAnnouncement();

//private:
    /**
     * @hash   -1344989364
     * @symbol  ?_buildSubChunkPacketData\@ServerNetworkHandler\@\@AEAAXAEBVNetworkIdentifier\@\@PEBVServerPlayer\@\@AEBVSubChunkRequestPacket\@\@AEAVSubChunkPacket\@\@I_N\@Z
     */
    MCAPI void _buildSubChunkPacketData(class NetworkIdentifier const &, class ServerPlayer const *, class SubChunkRequestPacket const &, class SubChunkPacket &, unsigned int, bool);
    /**
     * @hash   966808338
     * @symbol  ?_createNewPlayer\@ServerNetworkHandler\@\@AEAAAEAVServerPlayer\@\@AEBVNetworkIdentifier\@\@AEBVSubClientConnectionRequest\@\@W4SubClientId\@\@\@Z
     */
    MCAPI class ServerPlayer & _createNewPlayer(class NetworkIdentifier const &, class SubClientConnectionRequest const &, enum class SubClientId);
    /**
     * @hash   -1376058492
     * @symbol  ?_displayGameMessage\@ServerNetworkHandler\@\@AEAAXAEBVPlayer\@\@AEAUChatEvent\@\@\@Z
     */
    MCAPI void _displayGameMessage(class Player const &, struct ChatEvent &);
    /**
     * @hash   -1110421084
     * @symbol  ?_getActiveAndInProgressPlayerCount\@ServerNetworkHandler\@\@AEBAHVUUID\@mce\@\@\@Z
     */
    MCAPI int _getActiveAndInProgressPlayerCount(class mce::UUID) const;
    /**
     * @hash   -1255568454
     * @symbol  ?_getDisplayName\@ServerNetworkHandler\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCertificate\@\@_NAEBV23\@\@Z
     */
    MCAPI std::string _getDisplayName(class Certificate const &, bool, std::string const &) const;
    /**
     * @hash   437250386
     * @symbol  ?_handleCommandBlockUpdatePacket\@ServerNetworkHandler\@\@AEAAXAEBVServerPlayer\@\@AEBVNetworkIdentifier\@\@AEBVCommandBlockUpdatePacket\@\@\@Z
     */
    MCAPI void _handleCommandBlockUpdatePacket(class ServerPlayer const &, class NetworkIdentifier const &, class CommandBlockUpdatePacket const &);
    /**
     * @hash   1695301521
     * @symbol  ?_handleSetDifficulty\@ServerNetworkHandler\@\@AEBAXAEBVServerPlayer\@\@AEBVSetDifficultyPacket\@\@\@Z
     */
    MCAPI void _handleSetDifficulty(class ServerPlayer const &, class SetDifficultyPacket const &) const;
    /**
     * @hash   2109999119
     * @symbol  ?_loadNewPlayer\@ServerNetworkHandler\@\@AEAA_NAEAVServerPlayer\@\@_N\@Z
     */
    MCAPI bool _loadNewPlayer(class ServerPlayer &, bool);
    /**
     * @hash   1026240131
     * @symbol  ?_onClientAuthenticated\@ServerNetworkHandler\@\@AEAAXAEBVNetworkIdentifier\@\@AEBVCertificate\@\@\@Z
     */
    MCAPI void _onClientAuthenticated(class NetworkIdentifier const &, class Certificate const &);
    /**
     * @hash   1240936115
     * @symbol  ?_onPlayerLeft\@ServerNetworkHandler\@\@AEAAXPEAVServerPlayer\@\@_N\@Z
     */
    MCAPI void _onPlayerLeft(class ServerPlayer *, bool);
    /**
     * @hash   -1600589628
     * @symbol  ?_onSubClientAuthenticated\@ServerNetworkHandler\@\@AEAAXAEBVNetworkIdentifier\@\@AEBVCertificate\@\@AEBVSubClientLoginPacket\@\@\@Z
     */
    MCAPI void _onSubClientAuthenticated(class NetworkIdentifier const &, class Certificate const &, class SubClientLoginPacket const &);
    /**
     * @hash   1271447959
     * @symbol  ?_sendAdditionalLevelData\@ServerNetworkHandler\@\@AEAAXAEAVServerPlayer\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI void _sendAdditionalLevelData(class ServerPlayer &, class NetworkIdentifier const &);
    /**
     * @hash   758497454
     * @symbol  ?_sendLevelData\@ServerNetworkHandler\@\@AEAAXAEAVServerPlayer\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI void _sendLevelData(class ServerPlayer &, class NetworkIdentifier const &);
    /**
     * @hash   -336946293
     * @symbol  ?_updatePermissions\@ServerNetworkHandler\@\@AEAA_NAEBVServerPlayer\@\@AEBVRequestPermissionsPacket\@\@AEAVAbilities\@\@AEAVPermissionsHandler\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI bool _updatePermissions(class ServerPlayer const &, class RequestPermissionsPacket const &, class Abilities &, class PermissionsHandler &, class Player *);

private:

};