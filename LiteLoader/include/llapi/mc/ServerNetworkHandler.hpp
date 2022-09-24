/**
 * @file  ServerNetworkHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"
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

    inline class ServerPlayer* getServerPlayer(class NetworkIdentifier const& a0, char a1=0) {
        return _getServerPlayer(a0, (SubClientId)a1);
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
     * @hash   1650197483
     * @symbol ?allowIncomingPacketId@ServerNetworkHandler@@UEAA_NAEBVNetworkIdentifier@@W4MinecraftPacketIds@@@Z
     */
    MCVAPI bool allowIncomingPacketId(class NetworkIdentifier const &, enum MinecraftPacketIds);
    /**
     * @hash   493714836
     * @symbol ?getGameSpecificNetEventCallback@ServerNetworkHandler@@UEAAPEAVGameSpecificNetEventCallback@@XZ
     */
    MCVAPI class GameSpecificNetEventCallback * getGameSpecificNetEventCallback();
    /**
     * @hash   -561055814
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVChangeMobPropertyPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ChangeMobPropertyPacket const &);
    /**
     * @hash   -632574814
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPhotoTransferPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PhotoTransferPacket const &);
    /**
     * @hash   2062785993
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVCreatePhotoPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CreatePhotoPacket const &);
    /**
     * @hash   1565655774
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVEditorNetworkPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EditorNetworkPacket const &);
    /**
     * @hash   316670696
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPurchaseReceiptPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PurchaseReceiptPacket const &);
    /**
     * @hash   1520575851
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVCompletedUsingItemPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CompletedUsingItemPacket const &);
    /**
     * @hash   2072798561
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVUpdatePlayerGameTypePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdatePlayerGameTypePacket const &);
    /**
     * @hash   936135850
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VBlockActorDataPacket@@@std@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class BlockActorDataPacket>);
    /**
     * @hash   1208993794
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVActorEventPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ActorEventPacket const &);
    /**
     * @hash   1611138430
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVActorPickRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ActorPickRequestPacket const &);
    /**
     * @hash   129235646
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVAnimatePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AnimatePacket const &);
    /**
     * @hash   641963652
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVAnvilDamagePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AnvilDamagePacket const &);
    /**
     * @hash   -195796250
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVBlockPickRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BlockPickRequestPacket const &);
    /**
     * @hash   722586628
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVBookEditPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BookEditPacket const &);
    /**
     * @hash   -832230494
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVBossEventPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BossEventPacket const &);
    /**
     * @hash   2143366601
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVClientCacheBlobStatusPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientCacheBlobStatusPacket const &);
    /**
     * @hash   616945510
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVClientCacheStatusPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientCacheStatusPacket const &);
    /**
     * @hash   -552299759
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVClientToServerHandshakePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientToServerHandshakePacket const &);
    /**
     * @hash   -1843995674
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVCodeBuilderSourcePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CodeBuilderSourcePacket const &);
    /**
     * @hash   -701086068
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVCommandBlockUpdatePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CommandBlockUpdatePacket const &);
    /**
     * @hash   1491284067
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVCommandRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CommandRequestPacket const &);
    /**
     * @hash   -224152496
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVContainerClosePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ContainerClosePacket const &);
    /**
     * @hash   -521475513
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVCraftingEventPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CraftingEventPacket const &);
    /**
     * @hash   1088548878
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVDebugInfoPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class DebugInfoPacket const &);
    /**
     * @hash   346693115
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVDisconnectPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class DisconnectPacket const &);
    /**
     * @hash   -485486247
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVEmoteListPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EmoteListPacket const &);
    /**
     * @hash   -1892938729
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVEmotePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EmotePacket const &);
    /**
     * @hash   -1511761534
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVFilterTextPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class FilterTextPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVGameTestRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class GameTestRequestPacket const &);
    /**
     * @hash   1571414833
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVInteractPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class InteractPacket const &);
    /**
     * @hash   496102613
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVInventoryTransactionPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class InventoryTransactionPacket const &);
    /**
     * @hash   -1826548765
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVItemFrameDropItemPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ItemFrameDropItemPacket const &);
    /**
     * @hash   -182551443
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVItemStackRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ItemStackRequestPacket const &);
    /**
     * @hash   -559606298
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVLabTablePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LabTablePacket const &);
    /**
     * @hash   -1301169313
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVLecternUpdatePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LecternUpdatePacket const &);
    /**
     * @hash   -1241998304
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVLevelSoundEventPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacket const &);
    /**
     * @hash   -407739580
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVLevelSoundEventPacketV2@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacketV2 const &);
    /**
     * @hash   68481637
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVLevelSoundEventPacketV1@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacketV1 const &);
    /**
     * @hash   -282418714
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVLoginPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LoginPacket const &);
    /**
     * @hash   -313584888
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVMapCreateLockedCopyPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MapCreateLockedCopyPacket const &);
    /**
     * @hash   -217714302
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVMapInfoRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MapInfoRequestPacket const &);
    /**
     * @hash   1254907129
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVMobEquipmentPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MobEquipmentPacket const &);
    /**
     * @hash   -390221011
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVModalFormResponsePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ModalFormResponsePacket const &);
    /**
     * @hash   -1954542764
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVMoveActorAbsolutePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MoveActorAbsolutePacket const &);
    /**
     * @hash   152681077
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVMovePlayerPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MovePlayerPacket const &);
    /**
     * @hash   -2017690174
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVMultiplayerSettingsPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MultiplayerSettingsPacket const &);
    /**
     * @hash   1833506763
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVNetworkStackLatencyPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class NetworkStackLatencyPacket const &);
    /**
     * @hash   -489106199
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVNpcRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class NpcRequestPacket const &);
    /**
     * @hash   1176096967
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPassengerJumpPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PassengerJumpPacket const &);
    /**
     * @hash   -1374741040
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerActionPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerActionPacket const &);
    /**
     * @hash   1244213998
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerAuthInputPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerAuthInputPacket const &);
    /**
     * @hash   -842887536
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerHotbarPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerHotbarPacket const &);
    /**
     * @hash   629304998
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerInputPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerInputPacket const &);
    /**
     * @hash   -1255986503
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerSkinPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerSkinPacket const &);
    /**
     * @hash   -247407335
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPositionTrackingDBClientRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PositionTrackingDBClientRequestPacket const &);
    /**
     * @hash   -1501622948
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVRequestAbilityPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestAbilityPacket const &);
    /**
     * @hash   -1512792521
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVRequestChunkRadiusPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestChunkRadiusPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVRequestNetworkSettingsPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestNetworkSettingsPacket const &);
    /**
     * @hash   -544224318
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVRequestPermissionsPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestPermissionsPacket const &);
    /**
     * @hash   954615182
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackChunkRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackChunkRequestPacket const &);
    /**
     * @hash   -1835183177
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVRespawnPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RespawnPacket const &);
    /**
     * @hash   1929696131
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVScriptMessagePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ScriptMessagePacket const &);
    /**
     * @hash   2131581596
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSetDefaultGameTypePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetDefaultGameTypePacket const &);
    /**
     * @hash   1488339842
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSetDifficultyPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetDifficultyPacket const &);
    /**
     * @hash   -995937529
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSetLocalPlayerAsInitializedPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetLocalPlayerAsInitializedPacket const &);
    /**
     * @hash   737447776
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSetPlayerGameTypePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetPlayerGameTypePacket const &);
    /**
     * @hash   -903185705
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSettingsCommandPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SettingsCommandPacket const &);
    /**
     * @hash   -966716958
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVShowCreditsPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ShowCreditsPacket const &);
    /**
     * @hash   170721447
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSimpleEventPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SimpleEventPacket const &);
    /**
     * @hash   -409178403
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSpawnExperienceOrbPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SpawnExperienceOrbPacket const &);
    /**
     * @hash   1865246692
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVStructureBlockUpdatePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class StructureBlockUpdatePacket const &);
    /**
     * @hash   -2103930545
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVStructureTemplateDataRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class StructureTemplateDataRequestPacket const &);
    /**
     * @hash   -1846539715
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSubChunkRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SubChunkRequestPacket const &);
    /**
     * @hash   1322829513
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSubClientLoginPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SubClientLoginPacket const &);
    /**
     * @hash   1961696282
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVTextPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class TextPacket const &);
    /**
     * @hash   533049119
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVTickSyncPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class TickSyncPacket const &);
    /**
     * @hash   1405842573
     * @symbol ?onDisconnect@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N1@Z
     */
    MCVAPI void onDisconnect(class NetworkIdentifier const &, std::string const &, bool, std::string const &);
    /**
     * @hash   -1648789887
     * @symbol ?onInvalidPlayerJoinedLobby@ServerNetworkHandler@@UEAAXAEBVUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void onInvalidPlayerJoinedLobby(class mce::UUID const &, std::string const &);
    /**
     * @hash   666970152
     * @symbol ?onPlayerReady@ServerNetworkHandler@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void onPlayerReady(class Player &);
    /**
     * @hash   106781460
     * @symbol ?onTextFilterSkipped@ServerNetworkHandler@@EEAAXAEBVNetworkIdentifier@@W4SubClientId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void onTextFilterSkipped(class NetworkIdentifier const &, enum SubClientId, std::string const &);
    /**
     * @hash   -619336524
     * @symbol ?onTick@ServerNetworkHandler@@UEAAXXZ
     */
    MCVAPI void onTick();
    /**
     * @hash   1468433128
     * @symbol ?onTransferRequest@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCVAPI void onTransferRequest(class NetworkIdentifier const &, std::string const &, int);
    /**
     * @hash   -408825890
     * @symbol ?onWebsocketRequest@ServerNetworkHandler@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0V?$function@$$A6AXXZ@3@@Z
     */
    MCVAPI void onWebsocketRequest(std::string const &, std::string const &, class std::function<void (void)>);
    /**
     * @hash   -842334843
     * @symbol ?onXboxUserBlocked@ServerNetworkHandler@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void onXboxUserBlocked(std::string const &);
    /**
     * @hash   -454965506
     * @symbol ?onXboxUserUnblocked@ServerNetworkHandler@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void onXboxUserUnblocked(std::string const &);
    /**
     * @hash   -1204131819
     * @symbol ?sendServerLegacyParticle@ServerNetworkHandler@@UEAAXW4ParticleType@@AEBVVec3@@1H@Z
     */
    MCVAPI void sendServerLegacyParticle(enum ParticleType, class Vec3 const &, class Vec3 const &, int);
    /**
     * @hash   1522161476
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerNetworkHandler();
#endif
    /**
     * @symbol ??0ServerNetworkHandler@@QEAA@AEAVGameCallbacks@@AEBV?$NonOwnerPointer@VILevel@@@Bedrock@@AEAVNetworkHandler@@AEAVPrivateKeyManager@@AEAVServerLocator@@AEAVPacketSender@@AEAVAllowList@@PEAVPermissionsFile@@AEBVUUID@mce@@H_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEAVMinecraftCommands@@AEAVIMinecraftApp@@AEBV?$unordered_map@UPackIdVersion@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@UPackIdVersion@@@3@U?$equal_to@UPackIdVersion@@@3@V?$allocator@U?$pair@$$CBUPackIdVersion@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@AEAVScheduler@@V?$NonOwnerPointer@VTextFilteringProcessor@@@3@V?$optional_ref@VMinecraftGameTest@@@@@Z
     */
    MCAPI ServerNetworkHandler(class GameCallbacks &, class Bedrock::NonOwnerPointer<class ILevel> const &, class NetworkHandler &, class PrivateKeyManager &, class ServerLocator &, class PacketSender &, class AllowList &, class PermissionsFile *, class mce::UUID const &, int, bool, std::vector<std::string> const &, std::string, int, class MinecraftCommands &, class IMinecraftApp &, class std::unordered_map<struct PackIdVersion, std::string, struct std::hash<struct PackIdVersion>, struct std::equal_to<struct PackIdVersion>, class std::allocator<struct std::pair<struct PackIdVersion const, std::string>>> const &, class Scheduler &, class Bedrock::NonOwnerPointer<class TextFilteringProcessor>, class optional_ref<class MinecraftGameTest>);
    /**
     * @hash   1017007091
     * @symbol ?activateAllowList@ServerNetworkHandler@@QEAAXXZ
     */
    MCAPI void activateAllowList();
    /**
     * @hash   -1952788589
     * @symbol ?addToDenyList@ServerNetworkHandler@@QEAAXAEBVUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void addToDenyList(class mce::UUID const &, std::string const &);
    /**
     * @hash   1103931
     * @symbol ?allowIncomingConnections@ServerNetworkHandler@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCAPI void allowIncomingConnections(std::string const &, bool);
    /**
     * @hash   1251856087
     * @symbol ?createNewPlayer@ServerNetworkHandler@@QEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@AEBVNetworkIdentifier@@AEBVConnectionRequest@@@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> createNewPlayer(class NetworkIdentifier const &, class ConnectionRequest const &);
    /**
     * @hash   980378653
     * @symbol ?createSimulatedPlayer@ServerNetworkHandler@@QEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$AutomaticID@VDimension@@H@@0@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> createSimulatedPlayer(std::string const &, class AutomaticID<class Dimension, int>, std::string const &);
    /**
     * @hash   193659075
     * @symbol ?disallowIncomingConnections@ServerNetworkHandler@@QEAAXXZ
     */
    MCAPI void disallowIncomingConnections();
    /**
     * @hash   237231540
     * @symbol ?disconnectClient@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCAPI void disconnectClient(class NetworkIdentifier const &, std::string const &, bool);
    /**
     * @hash   589418713
     * @symbol ?disconnectClient@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@W4SubClientId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCAPI void disconnectClient(class NetworkIdentifier const &, enum SubClientId, std::string const &, bool);
    /**
     * @hash   832667221
     * @symbol ?engineCancelResponseHelper@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@AEBVResourcePackClientResponsePacket@@@Z
     */
    MCAPI void engineCancelResponseHelper(class NetworkIdentifier const &, class ResourcePackClientResponsePacket const &);
    /**
     * @hash   -1438915853
     * @symbol ?engineDownloadingFinishedResponseHelper@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@AEBVResourcePackClientResponsePacket@@@Z
     */
    MCAPI void engineDownloadingFinishedResponseHelper(class NetworkIdentifier const &, class ResourcePackClientResponsePacket const &);
    /**
     * @hash   -650322593
     * @symbol ?engineDownloadingResponseHelper@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@AEBVResourcePackClientResponsePacket@@@Z
     */
    MCAPI void engineDownloadingResponseHelper(class NetworkIdentifier const &, class ResourcePackClientResponsePacket const &);
    /**
     * @hash   -525544107
     * @symbol ?fetchConnectionRequest@ServerNetworkHandler@@QEAAAEBVConnectionRequest@@AEBVNetworkIdentifier@@@Z
     */
    MCAPI class ConnectionRequest const & fetchConnectionRequest(class NetworkIdentifier const &);
    /**
     * @hash   2010051474
     * @symbol ?isDedicatedServer@ServerNetworkHandler@@QEAA_NXZ
     */
    MCAPI bool isDedicatedServer();
    /**
     * @hash   -341169431
     * @symbol ?isHost@ServerNetworkHandler@@QEAA_NAEAVServerPlayer@@@Z
     */
    MCAPI bool isHost(class ServerPlayer &);
    /**
     * @hash   -1928269917
     * @symbol ?onReady_ClientGeneration@ServerNetworkHandler@@QEAAXAEAVPlayer@@AEBVNetworkIdentifier@@@Z
     */
    MCAPI void onReady_ClientGeneration(class Player &, class NetworkIdentifier const &);
    /**
     * @hash   -555545693
     * @symbol ?onStartShutdown@ServerNetworkHandler@@QEAAXXZ
     */
    MCAPI void onStartShutdown();
    /**
     * @hash   1348729831
     * @symbol ?persistPlayerPermissionsToDisk@ServerNetworkHandler@@QEAAXAEBVUserEntityIdentifierComponent@@W4PlayerPermissionLevel@@@Z
     */
    MCAPI void persistPlayerPermissionsToDisk(class UserEntityIdentifierComponent const &, enum PlayerPermissionLevel);
    /**
     * @hash   1190284406
     * @symbol ?sendLoginMessageLocal@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@AEBVConnectionRequest@@AEAVServerPlayer@@@Z
     */
    MCAPI void sendLoginMessageLocal(class NetworkIdentifier const &, class ConnectionRequest const &, class ServerPlayer &);
    /**
     * @hash   -828474327
     * @symbol ?setAutomationClient@ServerNetworkHandler@@QEAAXV?$NonOwnerPointer@VAutomationClient@Automation@@@Bedrock@@@Z
     */
    MCAPI void setAutomationClient(class Bedrock::NonOwnerPointer<class Automation::AutomationClient>);
    /**
     * @hash   -1878148127
     * @symbol ?setMaxNumPlayers@ServerNetworkHandler@@QEAAHH@Z
     */
    MCAPI int setMaxNumPlayers(int);
    /**
     * @hash   45417446
     * @symbol ?setNewPlayerPermissions@ServerNetworkHandler@@QEAAXAEAVServerPlayer@@@Z
     */
    MCAPI void setNewPlayerPermissions(class ServerPlayer &);
    /**
     * @hash   -1869398014
     * @symbol ?trytLoadPlayer@ServerNetworkHandler@@QEAA_NAEAVServerPlayer@@AEBVConnectionRequest@@@Z
     */
    MCAPI bool trytLoadPlayer(class ServerPlayer &, class ConnectionRequest const &);
    /**
     * @hash   353334245
     * @symbol ?updateServerAnnouncement@ServerNetworkHandler@@QEAAXXZ
     */
    MCAPI void updateServerAnnouncement();

//private:
    /**
     * @hash   -1598585732
     * @symbol ?_buildSubChunkPacketData@ServerNetworkHandler@@AEAAXAEBVNetworkIdentifier@@PEBVServerPlayer@@AEBVSubChunkRequestPacket@@AEAVSubChunkPacket@@I_N@Z
     */
    MCAPI void _buildSubChunkPacketData(class NetworkIdentifier const &, class ServerPlayer const *, class SubChunkRequestPacket const &, class SubChunkPacket &, unsigned int, bool);
    /**
     * @hash   713119714
     * @symbol ?_createNewPlayer@ServerNetworkHandler@@AEAAAEAVServerPlayer@@AEBVNetworkIdentifier@@AEBVSubClientConnectionRequest@@W4SubClientId@@@Z
     */
    MCAPI class ServerPlayer & _createNewPlayer(class NetworkIdentifier const &, class SubClientConnectionRequest const &, enum SubClientId);
    /**
     * @hash   -1630131516
     * @symbol ?_displayGameMessage@ServerNetworkHandler@@AEAAXAEBVPlayer@@AEAUChatEvent@@@Z
     */
    MCAPI void _displayGameMessage(class Player const &, struct ChatEvent &);
    /**
     * @hash   -1364617116
     * @symbol ?_getActiveAndInProgressPlayerCount@ServerNetworkHandler@@AEBAHVUUID@mce@@@Z
     */
    MCAPI int _getActiveAndInProgressPlayerCount(class mce::UUID) const;
    /**
     * @hash   -1509764486
     * @symbol ?_getDisplayName@ServerNetworkHandler@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCertificate@@_NAEBV23@@Z
     */
    MCAPI std::string _getDisplayName(class Certificate const &, bool, std::string const &) const;
    /**
     * @hash   -1091034380
     * @symbol ?_getServerPlayer@ServerNetworkHandler@@AEAAPEAVServerPlayer@@AEBVNetworkIdentifier@@W4SubClientId@@@Z
     */
    MCAPI class ServerPlayer * _getServerPlayer(class NetworkIdentifier const &, enum SubClientId);
    /**
     * @symbol ?_handleCommandBlockUpdatePacket@ServerNetworkHandler@@AEAAXAEBVServerPlayer@@AEBVNetworkIdentifier@@AEBVCommandBlockUpdatePacket@@@Z
     */
    MCAPI void _handleCommandBlockUpdatePacket(class ServerPlayer const &, class NetworkIdentifier const &, class CommandBlockUpdatePacket const &);
    /**
     * @hash   1439475633
     * @symbol ?_handleSetDifficulty@ServerNetworkHandler@@AEBAXAEBVServerPlayer@@AEBVSetDifficultyPacket@@@Z
     */
    MCAPI void _handleSetDifficulty(class ServerPlayer const &, class SetDifficultyPacket const &) const;
    /**
     * @hash   1854111727
     * @symbol ?_loadNewPlayer@ServerNetworkHandler@@AEAA_NAEAVServerPlayer@@_N@Z
     */
    MCAPI bool _loadNewPlayer(class ServerPlayer &, bool);
    /**
     * @hash   770321987
     * @symbol ?_onClientAuthenticated@ServerNetworkHandler@@AEAAXAEBVNetworkIdentifier@@AEBVCertificate@@@Z
     */
    MCAPI void _onClientAuthenticated(class NetworkIdentifier const &, class Certificate const &);
    /**
     * @hash   984818083
     * @symbol ?_onPlayerLeft@ServerNetworkHandler@@AEAAXPEAVServerPlayer@@_N@Z
     */
    MCAPI void _onPlayerLeft(class ServerPlayer *, bool);
    /**
     * @hash   -1856738412
     * @symbol ?_onSubClientAuthenticated@ServerNetworkHandler@@AEAAXAEBVNetworkIdentifier@@AEBVCertificate@@AEBVSubClientLoginPacket@@@Z
     */
    MCAPI void _onSubClientAuthenticated(class NetworkIdentifier const &, class Certificate const &, class SubClientLoginPacket const &);
    /**
     * @hash   1015083911
     * @symbol ?_sendAdditionalLevelData@ServerNetworkHandler@@AEAAXAEAVServerPlayer@@AEBVNetworkIdentifier@@@Z
     */
    MCAPI void _sendAdditionalLevelData(class ServerPlayer &, class NetworkIdentifier const &);
    /**
     * @hash   500196030
     * @symbol ?_sendLevelData@ServerNetworkHandler@@AEAAXAEAVServerPlayer@@AEBVNetworkIdentifier@@@Z
     */
    MCAPI void _sendLevelData(class ServerPlayer &, class NetworkIdentifier const &);
    /**
     * @hash   -594186773
     * @symbol ?_updatePermissions@ServerNetworkHandler@@AEAA_NAEBVServerPlayer@@AEBVRequestPermissionsPacket@@AEAVAbilities@@AEAVPermissionsHandler@@PEAVPlayer@@@Z
     */
    MCAPI bool _updatePermissions(class ServerPlayer const &, class RequestPermissionsPacket const &, class Abilities &, class PermissionsHandler &, class Player *);

private:

};