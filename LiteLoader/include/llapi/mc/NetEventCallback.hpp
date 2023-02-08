/**
 * @file  NetEventCallback.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetEventCallback.
 *
 */
class NetEventCallback {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETEVENTCALLBACK
public:
    class NetEventCallback& operator=(class NetEventCallback const &) = delete;
    NetEventCallback(class NetEventCallback const &) = delete;
    NetEventCallback() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NetEventCallback();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1() = 0;
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @hash   -1463689215
     * @vftbl  8
     * @symbol  ?onWebsocketRequest\@NetEventCallback\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0V?$function\@$$A6AXXZ\@3\@\@Z
     */
    virtual void onWebsocketRequest(std::string const &, std::string const &, class std::function<void (void)>);
    /**
     * @vftbl  9
     * @symbol  __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @symbol  __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @hash   -1060643679
     * @vftbl  11
     * @symbol  ?getGameSpecificNetEventCallback\@NetEventCallback\@\@UEAAPEAVGameSpecificNetEventCallback\@\@XZ
     */
    virtual class GameSpecificNetEventCallback * getGameSpecificNetEventCallback();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETEVENTCALLBACK
    /**
     * @hash   1206103711
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRequestPermissionsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestPermissionsPacket const &);
    /**
     * @hash   1674691596
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVActorFallPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ActorFallPacket const &);
    /**
     * @hash   769784880
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVShowProfilePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ShowProfilePacket const &);
    /**
     * @hash   1421074982
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMobEquipmentPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MobEquipmentPacket const &);
    /**
     * @hash   182454287
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMapInfoRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MapInfoRequestPacket const &);
    /**
     * @hash   346142304
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVScriptMessagePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ScriptMessagePacket const &);
    /**
     * @hash   1974411287
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddPaintingPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddPaintingPacket const &);
    /**
     * @hash   -1708253627
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVGameRulesChangedPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class GameRulesChangedPacket const &);
    /**
     * @hash   1129380207
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVStopSoundPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class StopSoundPacket const &);
    /**
     * @hash   682140728
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVChunkRadiusUpdatedPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ChunkRadiusUpdatedPacket const &);
    /**
     * @hash   -1895582079
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBookEditPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BookEditPacket const &);
    /**
     * @hash   187640349
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVContainerClosePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ContainerClosePacket const &);
    /**
     * @hash   218058528
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMoveActorDeltaPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MoveActorDeltaPacket const &);
    /**
     * @hash   1182723168
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateSoftEnumPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateSoftEnumPacket const &);
    /**
     * @hash   766181164
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVToastRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ToastRequestPacket const &);
    /**
     * @hash   -192646098
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCodeBuilderPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CodeBuilderPacket const &);
    /**
     * @hash   287791784
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetScoreboardIdentityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetScoreboardIdentityPacket const &);
    /**
     * @hash   237581636
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRequestChunkRadiusPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestChunkRadiusPacket const &);
    /**
     * @hash   456382561
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlaySoundPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlaySoundPacket const &);
    /**
     * @hash   -399199948
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPassengerJumpPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PassengerJumpPacket const &);
    /**
     * @hash   1159084566
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVNetworkChunkPublisherUpdatePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class NetworkChunkPublisherUpdatePacket const &);
    /**
     * @hash   1358228260
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetLocalPlayerAsInitializedPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetLocalPlayerAsInitializedPacket const &);
    /**
     * @hash   -1696549043
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetTimePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetTimePacket const &);
    /**
     * @hash   -1539454987
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBookAddPagePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BookAddPagePacket const &);
    /**
     * @hash   1626333716
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSimpleEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SimpleEventPacket const &);
    /**
     * @hash   -1837081935
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVEducationSettingsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EducationSettingsPacket const &);
    /**
     * @hash   1274278886
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVEmoteListPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EmoteListPacket const &);
    /**
     * @hash   2137052435
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddItemActorPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddItemActorPacket const &);
    /**
     * @hash   1326659521
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackClientResponsePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackClientResponsePacket const &);
    /**
     * @hash   -117503062
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVModalFormResponsePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ModalFormResponsePacket const &);
    /**
     * @hash   715999463
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVTextPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class TextPacket const &);
    /**
     * @hash   -600481881
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@V?$shared_ptr\@VBlockActorDataPacket\@\@\@std\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class BlockActorDataPacket>);
    /**
     * @hash   -153435307
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAgentActionEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AgentActionEventPacket const &);
    /**
     * @hash   2002623310
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayStatusPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayStatusPacket const &);
    /**
     * @hash   1903476688
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCommandRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CommandRequestPacket const &);
    /**
     * @hash   -1327277679
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCorrectPlayerMovePredictionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CorrectPlayerMovePredictionPacket const &);
    /**
     * @hash   -1148513861
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCameraShakePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CameraShakePacket const &);
    /**
     * @hash   -1604828241
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerArmorDamagePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerArmorDamagePacket const &);
    /**
     * @hash   1649736031
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPhotoTransferPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PhotoTransferPacket const &);
    /**
     * @hash   -95829025
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetDifficultyPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetDifficultyPacket const &);
    /**
     * @hash   621474296
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVDisconnectPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class DisconnectPacket const &);
    /**
     * @hash   -1703469182
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateClientInputLocksPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateClientInputLocksPacket const &);
    /**
     * @hash   1407543838
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLevelEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelEventPacket const &);
    /**
     * @hash   303013425
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVContainerOpenPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ContainerOpenPacket const &);
    /**
     * @hash   -18171818
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVClientCacheBlobStatusPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientCacheBlobStatusPacket const &);
    /**
     * @hash   -1903284076
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateAttributesPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateAttributesPacket const &);
    /**
     * @hash   933992559
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBossEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BossEventPacket const &);
    /**
     * @hash   927844018
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVInventoryTransactionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class InventoryTransactionPacket const &);
    /**
     * @hash   -707465101
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVServerSettingsRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ServerSettingsRequestPacket const &);
    /**
     * @hash   -1050517752
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCraftingDataPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CraftingDataPacket const &);
    /**
     * @hash   1868600859
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackStackPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackStackPacket const &);
    /**
     * @hash   1934282101
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddMobPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddMobPacket const &);
    /**
     * @hash   1825523863
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVInventoryContentPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class InventoryContentPacket const &);
    /**
     * @hash   -684484563
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerHotbarPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerHotbarPacket const &);
    /**
     * @hash   1016137601
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateTradePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateTradePacket const &);
    /**
     * @hash   -992751772
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVStructureTemplateDataResponsePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class StructureTemplateDataResponsePacket const &);
    /**
     * @hash   -860211321
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRemoveObjectivePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RemoveObjectivePacket const &);
    /**
     * @hash   635141028
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVEmotePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EmotePacket const &);
    /**
     * @hash   -485891238
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSubChunkRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SubChunkRequestPacket const &);
    /**
     * @hash   -1100190898
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerEnchantOptionsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerEnchantOptionsPacket const &);
    /**
     * @hash   142006317
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLevelSoundEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacket const &);
    /**
     * @hash   -1818995938
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdatePlayerGameTypePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdatePlayerGameTypePacket const &);
    /**
     * @hash   823300381
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateAbilitiesPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateAbilitiesPacket const &);
    /**
     * @hash   -2014819170
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@V?$shared_ptr\@VLevelChunkPacket\@\@\@std\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class LevelChunkPacket>);
    /**
     * @hash   -1739042926
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateAdventureSettingsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateAdventureSettingsPacket const &);
    /**
     * @hash   1970227790
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBookSignPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BookSignPacket const &);
    /**
     * @hash   -1110844160
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVServerStatsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ServerStatsPacket const &);
    /**
     * @hash   496578663
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@V?$shared_ptr\@VClientCacheMissResponsePacket\@\@\@std\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class ClientCacheMissResponsePacket>);
    /**
     * @hash   -1112632711
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRequestAbilityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestAbilityPacket const &);
    /**
     * @hash   -1585011825
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLessonProgressPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LessonProgressPacket const &);
    /**
     * @hash   -1545497024
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVItemFrameDropItemPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ItemFrameDropItemPacket const &);
    /**
     * @hash   -728664969
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVChangeMobPropertyPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ChangeMobPropertyPacket const &);
    /**
     * @hash   -1519249094
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddPlayerPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddPlayerPacket const &);
    /**
     * @hash   -2025476808
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddEntityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddEntityPacket const &);
    /**
     * @hash   854275627
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVNetworkSettingsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class NetworkSettingsPacket const &);
    /**
     * @hash   566265291
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackChunkRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackChunkRequestPacket const &);
    /**
     * @hash   -1935203502
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCreativeContentPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CreativeContentPacket const &);
    /**
     * @hash   1535760565
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPacketViolationWarningPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PacketViolationWarningPacket const &);
    /**
     * @hash   1404832646
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVItemStackResponsePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ItemStackResponsePacket const &);
    /**
     * @hash   205280459
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetActorMotionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetActorMotionPacket const &);
    /**
     * @hash   -782159959
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVContainerSetDataPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ContainerSetDataPacket const &);
    /**
     * @hash   -540724957
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVGuiDataPickItemPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class GuiDataPickItemPacket const &);
    /**
     * @hash   -1555886349
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCodeBuilderSourcePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CodeBuilderSourcePacket const &);
    /**
     * @hash   -2091350857
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@V?$shared_ptr\@VUpdateBlockPacket\@\@\@std\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class UpdateBlockPacket>);
    /**
     * @hash   1313218430
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetTitlePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetTitlePacket const &);
    /**
     * @hash   -16185408
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddActorPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddActorPacket const &);
    /**
     * @hash   -1604166902
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSpawnParticleEffectPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SpawnParticleEffectPacket const &);
    /**
     * @hash   -999687274
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerSkinPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerSkinPacket const &);
    /**
     * @hash   1991953795
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetDisplayObjectivePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetDisplayObjectivePacket const &);
    /**
     * @hash   -1242169141
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRemoveActorPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RemoveActorPacket const &);
    /**
     * @hash   1106229203
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLabTablePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LabTablePacket const &);
    /**
     * @hash   905516115
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVClientCacheStatusPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientCacheStatusPacket const &);
    /**
     * @hash   613693314
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EventPacket const &);
    /**
     * @hash   1524640573
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetCommandsEnabledPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetCommandsEnabledPacket const &);
    /**
     * @hash   -668674738
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVClientboundMapItemDataPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientboundMapItemDataPacket const &);
    /**
     * @hash   -228532442
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVNpcRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class NpcRequestPacket const &);
    /**
     * @hash   -331203140
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPositionTrackingDBServerBroadcastPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PositionTrackingDBServerBroadcastPacket const &);
    /**
     * @hash   -414118615
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetDefaultGameTypePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetDefaultGameTypePacket const &);
    /**
     * @hash   847263569
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@V?$shared_ptr\@VUpdateBlockSyncedPacket\@\@\@std\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class UpdateBlockSyncedPacket>);
    /**
     * @hash   -971632578
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddVolumeEntityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddVolumeEntityPacket const &);
    /**
     * @hash   489002943
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVShowCreditsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ShowCreditsPacket const &);
    /**
     * @hash   1429371900
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLecternUpdatePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LecternUpdatePacket const &);
    /**
     * @hash   1433475507
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBlockPickRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BlockPickRequestPacket const &);
    /**
     * @hash   -368328165
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLevelEventGenericPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelEventGenericPacket const &);
    /**
     * @hash   420664340
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBookSwapPagesPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BookSwapPagesPacket const &);
    /**
     * @hash   -1374275841
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMultiplayerSettingsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MultiplayerSettingsPacket const &);
    /**
     * @hash   -1053619173
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVActorPickRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ActorPickRequestPacket const &);
    /**
     * @hash   414930818
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMovePlayerPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MovePlayerPacket const &);
    /**
     * @hash   -197220557
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSimulationTypePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SimulationTypePacket const &);
    /**
     * @hash   1138658641
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVGameTestRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class GameTestRequestPacket const &);
    /**
     * @hash   1435834106
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVItemStackRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ItemStackRequestPacket const &);
    /**
     * @hash   -40329547
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateEquipPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateEquipPacket const &);
    /**
     * @hash   1074643113
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCommandBlockUpdatePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CommandBlockUpdatePacket const &);
    /**
     * @hash   -1293653781
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMobEffectPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MobEffectPacket const &);
    /**
     * @hash   -1055933346
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVInteractPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class InteractPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVClientCheatAbilityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientCheatAbilityPacket const &);
    /**
     * @hash   -1251936695
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVFeatureRegistryPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class FeatureRegistryPacket const &);
    /**
     * @hash   -2117961931
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackDataInfoPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackDataInfoPacket const &);
    /**
     * @hash   -836746063
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVClientboundDebugRendererPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientboundDebugRendererPacket const &);
    /**
     * @hash   2046614385
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBookDeletePagePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BookDeletePagePacket const &);
    /**
     * @hash   2130473155
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVNpcDialoguePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class NpcDialoguePacket const &);
    /**
     * @hash   1942457275
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAnimatePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AnimatePacket const &);
    /**
     * @hash   1560501672
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVStartGamePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class StartGamePacket const &);
    /**
     * @hash   2026604274
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVItemComponentPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ItemComponentPacket const &);
    /**
     * @hash   -1729804305
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCameraPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CameraPacket const &);
    /**
     * @hash   -2133890130
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVClientToServerHandshakePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientToServerHandshakePacket const &);
    /**
     * @hash   1817932718
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVServerToClientHandshakePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ServerToClientHandshakePacket const &);
    /**
     * @hash   -329395842
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAvailableActorIdentifiersPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AvailableActorIdentifiersPacket const &);
    /**
     * @hash   1369934916
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetScorePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetScorePacket const &);
    /**
     * @hash   1026363564
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVHurtArmorPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class HurtArmorPacket const &);
    /**
     * @hash   -1818922632
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVNetworkStackLatencyPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class NetworkStackLatencyPacket const &);
    /**
     * @hash   1705346454
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSubClientLoginPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SubClientLoginPacket const &);
    /**
     * @hash   2090606387
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerInputPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerInputPacket const &);
    /**
     * @hash   111566684
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVStructureTemplateDataRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class StructureTemplateDataRequestPacket const &);
    /**
     * @hash   348749202
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLevelSoundEventPacketV1\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacketV1 const &);
    /**
     * @hash   -127256751
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLevelSoundEventPacketV2\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacketV2 const &);
    /**
     * @hash   135380112
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVEduUriResourcePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EduUriResourcePacket const &);
    /**
     * @hash   -2019859247
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVStructureBlockUpdatePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class StructureBlockUpdatePacket const &);
    /**
     * @hash   998218573
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetPlayerGameTypePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetPlayerGameTypePacket const &);
    /**
     * @hash   -1445330949
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVDebugInfoPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class DebugInfoPacket const &);
    /**
     * @hash   -1682670495
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMoveActorAbsolutePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MoveActorAbsolutePacket const &);
    /**
     * @hash   -1238256561
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVFilterTextPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class FilterTextPacket const &);
    /**
     * @hash   -1052717493
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddBehaviorTreePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddBehaviorTreePacket const &);
    /**
     * @hash   109142634
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVInventoryActionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class InventoryActionPacket const &);
    /**
     * @hash   331856602
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVDeathInfoPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class DeathInfoPacket const &);
    /**
     * @hash   -1792189621
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBiomeDefinitionListPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BiomeDefinitionListPacket const &);
    /**
     * @hash   -2052565965
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLoginPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LoginPacket const &);
    /**
     * @hash   687596755
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRemoveVolumeEntityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RemoveVolumeEntityPacket const &);
    /**
     * @hash   -1453965592
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCompletedUsingItemPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CompletedUsingItemPacket const &);
    /**
     * @hash   132337077
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMotionPredictionHintsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MotionPredictionHintsPacket const &);
    /**
     * @hash   1252583333
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPurchaseReceiptPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PurchaseReceiptPacket const &);
    /**
     * @hash   -1567969547
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerListPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerListPacket const &);
    /**
     * @hash   489440877
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMobArmorEquipmentPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MobArmorEquipmentPacket const &);
    /**
     * @hash   1898018424
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateSubChunkBlocksPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateSubChunkBlocksPacket const &);
    /**
     * @hash   1244792606
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetLastHurtByPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetLastHurtByPacket const &);
    /**
     * @hash   -1479037514
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPositionTrackingDBClientRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PositionTrackingDBClientRequestPacket const &);
    /**
     * @hash   1762422109
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerStartItemCooldownPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerStartItemCooldownPacket const &);
    /**
     * @hash   2062416681
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVTransferPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class TransferPacket const &);
    /**
     * @hash   1640606530
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePacksInfoPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePacksInfoPacket const &);
    /**
     * @hash   -2123467332
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVTickSyncPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class TickSyncPacket const &);
    /**
     * @hash   -200541166
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetSpawnPositionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetSpawnPositionPacket const &);
    /**
     * @hash   -212224883
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSyncActorPropertyPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SyncActorPropertyPacket const &);
    /**
     * @hash   1767506260
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAutomationClientConnectPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AutomationClientConnectPacket const &);
    /**
     * @hash   420732348
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVShowStoreOfferPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ShowStoreOfferPacket const &);
    /**
     * @hash   1523965207
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetActorDataPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetActorDataPacket const &);
    /**
     * @hash   -183115528
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAnimateEntityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AnimateEntityPacket const &);
    /**
     * @hash   1104397063
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBlockEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BlockEventPacket const &);
    /**
     * @hash   872476353
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVTakeItemActorPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class TakeItemActorPacket const &);
    /**
     * @hash   1970644571
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVTickingAreasLoadStatusPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class TickingAreasLoadStatusPacket const &);
    /**
     * @hash   -447000677
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVEditorNetworkPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EditorNetworkPacket const &);
    /**
     * @hash   -59443476
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVDimensionDataPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class DimensionDataPacket const &);
    /**
     * @hash   1492493167
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVActorEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ActorEventPacket const &);
    /**
     * @hash   -1680894597
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerAuthInputPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerAuthInputPacket const &);
    /**
     * @hash   -612933331
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVServerSettingsResponsePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ServerSettingsResponsePacket const &);
    /**
     * @hash   461030004
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSettingsCommandPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SettingsCommandPacket const &);
    /**
     * @hash   1338812474
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSpawnExperienceOrbPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SpawnExperienceOrbPacket const &);
    /**
     * @hash   1027881862
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVChangeDimensionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ChangeDimensionPacket const &);
    /**
     * @hash   -2136603214
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRequestNetworkSettingsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestNetworkSettingsPacket const &);
    /**
     * @hash   -460247902
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVInventorySlotPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class InventorySlotPacket const &);
    /**
     * @hash   -52898060
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRespawnPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RespawnPacket const &);
    /**
     * @hash   1084223787
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAvailableCommandsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AvailableCommandsPacket const &);
    /**
     * @hash   -283342658
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetHealthPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetHealthPacket const &);
    /**
     * @hash   -1851819670
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVGameTestResultsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class GameTestResultsPacket const &);
    /**
     * @hash   2129634881
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAnvilDamagePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AnvilDamagePacket const &);
    /**
     * @hash   764052487
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSubChunkPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SubChunkPacket const &);
    /**
     * @hash   -1009361684
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackChunkDataPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackChunkDataPacket const &);
    /**
     * @hash   -2080919772
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCraftingEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CraftingEventPacket const &);
    /**
     * @hash   832537174
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVModalFormRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ModalFormRequestPacket const &);
    /**
     * @hash   -1212601699
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerActionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerActionPacket const &);
    /**
     * @hash   -1376266867
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRemoveEntityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RemoveEntityPacket const &);
    /**
     * @hash   -1204333946
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCreatePhotoPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CreatePhotoPacket const &);
    /**
     * @hash   1552411376
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCommandOutputPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CommandOutputPacket const &);
    /**
     * @hash   769790335
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerFogPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerFogPacket const &);
    /**
     * @hash   333304421
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMapCreateLockedCopyPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MapCreateLockedCopyPacket const &);
    /**
     * @hash   1970979744
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVOnScreenTextureAnimationPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class OnScreenTextureAnimationPacket const &);
    /**
     * @hash   -1402409410
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVScriptCustomEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ScriptCustomEventPacket const &);
    /**
     * @hash   1522574535
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetActorLinkPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetActorLinkPacket const &);
    /**
     * @hash   1559343202
     * @symbol  ?onConnect\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCVAPI void onConnect(class NetworkIdentifier const &);
    /**
     * @hash   -321475238
     * @symbol  ?onDisconnect\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N1\@Z
     */
    MCVAPI void onDisconnect(class NetworkIdentifier const &, std::string const &, bool, std::string const &);
    /**
     * @hash   -1083623925
     * @symbol  ?onPlayerReady\@NetEventCallback\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void onPlayerReady(class Player &);
    /**
     * @hash   863992174
     * @symbol  ?onStoreOfferReceive\@NetEventCallback\@\@UEAAX_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onStoreOfferReceive(bool, std::string const &);
    /**
     * @hash   -1225291263
     * @symbol  ?onTick\@NetEventCallback\@\@UEAAXXZ
     */
    MCVAPI void onTick();
    /**
     * @hash   -1266112117
     * @symbol  ?onTransferRequest\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCVAPI void onTransferRequest(class NetworkIdentifier const &, std::string const &, int);
    /**
     * @hash   -1776317022
     * @symbol  ?onUnableToConnect\@NetEventCallback\@\@UEAAXXZ
     */
    MCVAPI void onUnableToConnect();
    /**
     * @hash   -1357439268
     * @symbol  ?sendPacketViolationDetectedTelemetryData\@NetEventCallback\@\@UEAAXAEBUExtendedStreamReadResult\@\@W4PacketViolationResponse\@\@W4MinecraftPacketIds\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCVAPI void sendPacketViolationDetectedTelemetryData(struct ExtendedStreamReadResult const &, enum class PacketViolationResponse, enum class MinecraftPacketIds, class NetworkIdentifier const &);
#endif

};