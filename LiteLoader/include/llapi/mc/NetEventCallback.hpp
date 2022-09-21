/**
 * @file  MC/NetEventCallback.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~NetEventCallback();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1() = 0;
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @hash   -1723466735
     * @vftbl  8
     * @symbol ?onWebsocketRequest@NetEventCallback@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0V?$function@$$A6AXXZ@3@@Z
     */
    virtual void onWebsocketRequest(std::string const &, std::string const &, class std::function<void (void)>);
    /**
     * @vftbl  9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @hash   -1157266463
     * @vftbl  11
     * @symbol ?getGameSpecificNetEventCallback@NetEventCallback@@UEAAPEAVGameSpecificNetEventCallback@@XZ
     */
    virtual class GameSpecificNetEventCallback * getGameSpecificNetEventCallback();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETEVENTCALLBACK
    /**
     * @hash   1114216735
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRequestPermissionsPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestPermissionsPacket const &);
    /**
     * @hash   1582804620
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVActorFallPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ActorFallPacket const &);
    /**
     * @hash   677897904
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVShowProfilePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ShowProfilePacket const &);
    /**
     * @hash   1329188006
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMobEquipmentPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MobEquipmentPacket const &);
    /**
     * @hash   90567311
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMapInfoRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MapInfoRequestPacket const &);
    /**
     * @hash   254255328
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVScriptMessagePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ScriptMessagePacket const &);
    /**
     * @hash   1882524311
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAddPaintingPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddPaintingPacket const &);
    /**
     * @hash   -1800140603
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVGameRulesChangedPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class GameRulesChangedPacket const &);
    /**
     * @hash   1037493231
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVStopSoundPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class StopSoundPacket const &);
    /**
     * @hash   590253752
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVChunkRadiusUpdatedPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ChunkRadiusUpdatedPacket const &);
    /**
     * @hash   -1987469055
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBookEditPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BookEditPacket const &);
    /**
     * @hash   95753373
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVContainerClosePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ContainerClosePacket const &);
    /**
     * @hash   126171552
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMoveActorDeltaPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MoveActorDeltaPacket const &);
    /**
     * @hash   1090836192
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdateSoftEnumPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateSoftEnumPacket const &);
    /**
     * @hash   674294188
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVToastRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ToastRequestPacket const &);
    /**
     * @hash   -284533074
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCodeBuilderPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CodeBuilderPacket const &);
    /**
     * @hash   195904808
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetScoreboardIdentityPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetScoreboardIdentityPacket const &);
    /**
     * @hash   145694660
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRequestChunkRadiusPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestChunkRadiusPacket const &);
    /**
     * @hash   364495585
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlaySoundPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlaySoundPacket const &);
    /**
     * @hash   -491086924
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPassengerJumpPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PassengerJumpPacket const &);
    /**
     * @hash   1067197590
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVNetworkChunkPublisherUpdatePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class NetworkChunkPublisherUpdatePacket const &);
    /**
     * @hash   1266341284
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetLocalPlayerAsInitializedPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetLocalPlayerAsInitializedPacket const &);
    /**
     * @hash   -1788436019
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetTimePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetTimePacket const &);
    /**
     * @hash   -1631341963
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBookAddPagePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BookAddPagePacket const &);
    /**
     * @hash   1534446740
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSimpleEventPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SimpleEventPacket const &);
    /**
     * @hash   -1928968911
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVEducationSettingsPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EducationSettingsPacket const &);
    /**
     * @hash   1182391910
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVEmoteListPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EmoteListPacket const &);
    /**
     * @hash   2045165459
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAddItemActorPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddItemActorPacket const &);
    /**
     * @hash   1234772545
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackClientResponsePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackClientResponsePacket const &);
    /**
     * @hash   -209390038
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVModalFormResponsePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ModalFormResponsePacket const &);
    /**
     * @hash   624112487
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVTextPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class TextPacket const &);
    /**
     * @hash   890917831
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VBlockActorDataPacket@@@std@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class BlockActorDataPacket>);
    /**
     * @hash   -245322283
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAgentActionEventPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AgentActionEventPacket const &);
    /**
     * @hash   1910736334
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayStatusPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayStatusPacket const &);
    /**
     * @hash   1811589712
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCommandRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CommandRequestPacket const &);
    /**
     * @hash   -1419164655
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCorrectPlayerMovePredictionPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CorrectPlayerMovePredictionPacket const &);
    /**
     * @hash   -1240400837
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCameraShakePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CameraShakePacket const &);
    /**
     * @hash   -1696715217
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerArmorDamagePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerArmorDamagePacket const &);
    /**
     * @hash   1557849055
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPhotoTransferPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PhotoTransferPacket const &);
    /**
     * @hash   -187716001
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetDifficultyPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetDifficultyPacket const &);
    /**
     * @hash   529587320
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVDisconnectPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class DisconnectPacket const &);
    /**
     * @hash   1315656862
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLevelEventPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelEventPacket const &);
    /**
     * @hash   211126449
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVContainerOpenPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ContainerOpenPacket const &);
    /**
     * @hash   -110058794
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVClientCacheBlobStatusPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientCacheBlobStatusPacket const &);
    /**
     * @hash   -1995171052
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdateAttributesPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateAttributesPacket const &);
    /**
     * @hash   842105583
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBossEventPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BossEventPacket const &);
    /**
     * @hash   835957042
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVInventoryTransactionPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class InventoryTransactionPacket const &);
    /**
     * @hash   -799352077
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVServerSettingsRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ServerSettingsRequestPacket const &);
    /**
     * @hash   -1142404728
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCraftingDataPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CraftingDataPacket const &);
    /**
     * @hash   1776713883
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackStackPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackStackPacket const &);
    /**
     * @hash   1842395125
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAddMobPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddMobPacket const &);
    /**
     * @hash   1733636887
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVInventoryContentPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class InventoryContentPacket const &);
    /**
     * @hash   -776371539
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerHotbarPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerHotbarPacket const &);
    /**
     * @hash   924250625
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdateTradePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateTradePacket const &);
    /**
     * @hash   -1084638748
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVStructureTemplateDataResponsePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class StructureTemplateDataResponsePacket const &);
    /**
     * @hash   -952098297
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRemoveObjectivePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RemoveObjectivePacket const &);
    /**
     * @hash   543254052
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVEmotePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EmotePacket const &);
    /**
     * @hash   -577778214
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSubChunkRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SubChunkRequestPacket const &);
    /**
     * @hash   -1192077874
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerEnchantOptionsPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerEnchantOptionsPacket const &);
    /**
     * @hash   50119341
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLevelSoundEventPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacket const &);
    /**
     * @hash   -1910882914
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdatePlayerGameTypePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdatePlayerGameTypePacket const &);
    /**
     * @hash   731413405
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdateAbilitiesPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateAbilitiesPacket const &);
    /**
     * @hash   -523419458
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VLevelChunkPacket@@@std@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class LevelChunkPacket>);
    /**
     * @hash   -1830929902
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdateAdventureSettingsPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateAdventureSettingsPacket const &);
    /**
     * @hash   1878340814
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBookSignPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BookSignPacket const &);
    /**
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVServerStatsPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ServerStatsPacket const &);
    /**
     * @hash   1987978375
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VClientCacheMissResponsePacket@@@std@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class ClientCacheMissResponsePacket>);
    /**
     * @hash   -1204519687
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRequestAbilityPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestAbilityPacket const &);
    /**
     * @hash   -1676898801
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLessonProgressPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LessonProgressPacket const &);
    /**
     * @hash   -1637384000
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVItemFrameDropItemPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ItemFrameDropItemPacket const &);
    /**
     * @hash   -820551945
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVChangeMobPropertyPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ChangeMobPropertyPacket const &);
    /**
     * @hash   -1611136070
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAddPlayerPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddPlayerPacket const &);
    /**
     * @hash   -2117363784
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAddEntityPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddEntityPacket const &);
    /**
     * @hash   762388651
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVNetworkSettingsPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class NetworkSettingsPacket const &);
    /**
     * @hash   474378315
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackChunkRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackChunkRequestPacket const &);
    /**
     * @hash   -2027090478
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCreativeContentPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CreativeContentPacket const &);
    /**
     * @hash   1443873589
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPacketViolationWarningPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PacketViolationWarningPacket const &);
    /**
     * @hash   1312945670
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVItemStackResponsePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ItemStackResponsePacket const &);
    /**
     * @hash   113393483
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetActorMotionPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetActorMotionPacket const &);
    /**
     * @hash   -874046935
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVContainerSetDataPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ContainerSetDataPacket const &);
    /**
     * @hash   -632611933
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVGuiDataPickItemPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class GuiDataPickItemPacket const &);
    /**
     * @hash   -1647773325
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCodeBuilderSourcePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CodeBuilderSourcePacket const &);
    /**
     * @hash   -599951145
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VUpdateBlockPacket@@@std@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class UpdateBlockPacket>);
    /**
     * @hash   1221331454
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetTitlePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetTitlePacket const &);
    /**
     * @hash   -108072384
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAddActorPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddActorPacket const &);
    /**
     * @hash   -1696053878
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSpawnParticleEffectPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SpawnParticleEffectPacket const &);
    /**
     * @hash   -1091574250
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerSkinPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerSkinPacket const &);
    /**
     * @hash   1900066819
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetDisplayObjectivePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetDisplayObjectivePacket const &);
    /**
     * @hash   -1334056117
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRemoveActorPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RemoveActorPacket const &);
    /**
     * @hash   1014342227
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLabTablePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LabTablePacket const &);
    /**
     * @hash   813629139
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVClientCacheStatusPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientCacheStatusPacket const &);
    /**
     * @hash   521806338
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVEventPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EventPacket const &);
    /**
     * @hash   1432753597
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetCommandsEnabledPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetCommandsEnabledPacket const &);
    /**
     * @hash   -760561714
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVClientboundMapItemDataPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientboundMapItemDataPacket const &);
    /**
     * @hash   -320419418
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVNpcRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class NpcRequestPacket const &);
    /**
     * @hash   -423090116
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPositionTrackingDBServerBroadcastPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PositionTrackingDBServerBroadcastPacket const &);
    /**
     * @hash   -506005591
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetDefaultGameTypePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetDefaultGameTypePacket const &);
    /**
     * @hash   -1956304015
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VUpdateBlockSyncedPacket@@@std@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class UpdateBlockSyncedPacket>);
    /**
     * @hash   -1063519554
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAddVolumeEntityPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddVolumeEntityPacket const &);
    /**
     * @hash   397115967
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVShowCreditsPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ShowCreditsPacket const &);
    /**
     * @hash   1337484924
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLecternUpdatePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LecternUpdatePacket const &);
    /**
     * @hash   1341588531
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBlockPickRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BlockPickRequestPacket const &);
    /**
     * @hash   -460215141
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLevelEventGenericPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelEventGenericPacket const &);
    /**
     * @hash   328777364
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBookSwapPagesPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BookSwapPagesPacket const &);
    /**
     * @hash   -1466162817
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMultiplayerSettingsPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MultiplayerSettingsPacket const &);
    /**
     * @hash   -1145506149
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVActorPickRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ActorPickRequestPacket const &);
    /**
     * @hash   323043842
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMovePlayerPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MovePlayerPacket const &);
    /**
     * @hash   -289107533
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSimulationTypePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SimulationTypePacket const &);
    /**
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVGameTestRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class GameTestRequestPacket const &);
    /**
     * @hash   1343947130
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVItemStackRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ItemStackRequestPacket const &);
    /**
     * @hash   -132216523
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdateEquipPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateEquipPacket const &);
    /**
     * @hash   982756137
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCommandBlockUpdatePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CommandBlockUpdatePacket const &);
    /**
     * @hash   -1385540757
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMobEffectPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MobEffectPacket const &);
    /**
     * @hash   -1147820322
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVInteractPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class InteractPacket const &);
    /**
     * @hash   -1343823671
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVFeatureRegistryPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class FeatureRegistryPacket const &);
    /**
     * @hash   2085118389
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackDataInfoPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackDataInfoPacket const &);
    /**
     * @hash   -928633039
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVClientboundDebugRendererPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientboundDebugRendererPacket const &);
    /**
     * @hash   1954727409
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBookDeletePagePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BookDeletePagePacket const &);
    /**
     * @hash   2038586179
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVNpcDialoguePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class NpcDialoguePacket const &);
    /**
     * @hash   1850570299
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAnimatePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AnimatePacket const &);
    /**
     * @hash   1468614696
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVStartGamePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class StartGamePacket const &);
    /**
     * @hash   1934717298
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVItemComponentPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ItemComponentPacket const &);
    /**
     * @hash   -1821691281
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCameraPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CameraPacket const &);
    /**
     * @hash   2069190190
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVClientToServerHandshakePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientToServerHandshakePacket const &);
    /**
     * @hash   1726045742
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVServerToClientHandshakePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ServerToClientHandshakePacket const &);
    /**
     * @hash   -421282818
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAvailableActorIdentifiersPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AvailableActorIdentifiersPacket const &);
    /**
     * @hash   1278047940
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetScorePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetScorePacket const &);
    /**
     * @hash   934476588
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVHurtArmorPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class HurtArmorPacket const &);
    /**
     * @hash   -1910809608
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVNetworkStackLatencyPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class NetworkStackLatencyPacket const &);
    /**
     * @hash   1613459478
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSubClientLoginPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SubClientLoginPacket const &);
    /**
     * @hash   1998719411
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerInputPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerInputPacket const &);
    /**
     * @hash   19679708
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVStructureTemplateDataRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class StructureTemplateDataRequestPacket const &);
    /**
     * @hash   256862226
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLevelSoundEventPacketV1@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacketV1 const &);
    /**
     * @hash   -219143727
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLevelSoundEventPacketV2@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacketV2 const &);
    /**
     * @hash   43493136
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVEduUriResourcePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EduUriResourcePacket const &);
    /**
     * @hash   -2111746223
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVStructureBlockUpdatePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class StructureBlockUpdatePacket const &);
    /**
     * @hash   906331597
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetPlayerGameTypePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetPlayerGameTypePacket const &);
    /**
     * @hash   -1537217925
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVDebugInfoPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class DebugInfoPacket const &);
    /**
     * @hash   -1774557471
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMoveActorAbsolutePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MoveActorAbsolutePacket const &);
    /**
     * @hash   -1330143537
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVFilterTextPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class FilterTextPacket const &);
    /**
     * @hash   -1144604469
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAddBehaviorTreePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddBehaviorTreePacket const &);
    /**
     * @hash   17255658
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVInventoryActionPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class InventoryActionPacket const &);
    /**
     * @hash   239969626
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVDeathInfoPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class DeathInfoPacket const &);
    /**
     * @hash   -1884076597
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBiomeDefinitionListPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BiomeDefinitionListPacket const &);
    /**
     * @hash   -2144452941
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLoginPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LoginPacket const &);
    /**
     * @hash   595709779
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRemoveVolumeEntityPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RemoveVolumeEntityPacket const &);
    /**
     * @hash   -1545852568
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCompletedUsingItemPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CompletedUsingItemPacket const &);
    /**
     * @hash   40450101
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMotionPredictionHintsPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MotionPredictionHintsPacket const &);
    /**
     * @hash   1160696357
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPurchaseReceiptPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PurchaseReceiptPacket const &);
    /**
     * @hash   -1659856523
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerListPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerListPacket const &);
    /**
     * @hash   397553901
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMobArmorEquipmentPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MobArmorEquipmentPacket const &);
    /**
     * @hash   1806131448
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdateSubChunkBlocksPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateSubChunkBlocksPacket const &);
    /**
     * @hash   1152905630
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetLastHurtByPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetLastHurtByPacket const &);
    /**
     * @hash   -1570924490
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPositionTrackingDBClientRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PositionTrackingDBClientRequestPacket const &);
    /**
     * @hash   1670535133
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerStartItemCooldownPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerStartItemCooldownPacket const &);
    /**
     * @hash   1970529705
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVTransferPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class TransferPacket const &);
    /**
     * @hash   1548719554
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePacksInfoPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePacksInfoPacket const &);
    /**
     * @hash   2079612988
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVTickSyncPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class TickSyncPacket const &);
    /**
     * @hash   -292428142
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetSpawnPositionPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetSpawnPositionPacket const &);
    /**
     * @hash   -304111859
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSyncActorPropertyPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SyncActorPropertyPacket const &);
    /**
     * @hash   1675619284
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAutomationClientConnectPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AutomationClientConnectPacket const &);
    /**
     * @hash   328845372
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVShowStoreOfferPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ShowStoreOfferPacket const &);
    /**
     * @hash   1432078231
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetActorDataPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetActorDataPacket const &);
    /**
     * @hash   -275002504
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAnimateEntityPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AnimateEntityPacket const &);
    /**
     * @hash   1012510087
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBlockEventPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BlockEventPacket const &);
    /**
     * @hash   780589377
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVTakeItemActorPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class TakeItemActorPacket const &);
    /**
     * @hash   1878757595
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVTickingAreasLoadStatusPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class TickingAreasLoadStatusPacket const &);
    /**
     * @hash   -538887653
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVEditorNetworkPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EditorNetworkPacket const &);
    /**
     * @hash   -151330452
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVDimensionDataPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class DimensionDataPacket const &);
    /**
     * @hash   1400606191
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVActorEventPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ActorEventPacket const &);
    /**
     * @hash   -1772781573
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerAuthInputPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerAuthInputPacket const &);
    /**
     * @hash   -704820307
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVServerSettingsResponsePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ServerSettingsResponsePacket const &);
    /**
     * @hash   369143028
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSettingsCommandPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SettingsCommandPacket const &);
    /**
     * @hash   1246925498
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSpawnExperienceOrbPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SpawnExperienceOrbPacket const &);
    /**
     * @hash   935994886
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVChangeDimensionPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ChangeDimensionPacket const &);
    /**
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRequestNetworkSettingsPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestNetworkSettingsPacket const &);
    /**
     * @hash   -552134878
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVInventorySlotPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class InventorySlotPacket const &);
    /**
     * @hash   -144785036
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRespawnPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RespawnPacket const &);
    /**
     * @hash   992336811
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAvailableCommandsPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AvailableCommandsPacket const &);
    /**
     * @hash   -375229634
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetHealthPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetHealthPacket const &);
    /**
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVGameTestResultsPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class GameTestResultsPacket const &);
    /**
     * @hash   2037747905
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAnvilDamagePacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AnvilDamagePacket const &);
    /**
     * @hash   672165511
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSubChunkPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SubChunkPacket const &);
    /**
     * @hash   -1101248660
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackChunkDataPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackChunkDataPacket const &);
    /**
     * @hash   2122160548
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCraftingEventPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CraftingEventPacket const &);
    /**
     * @hash   740650198
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVModalFormRequestPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ModalFormRequestPacket const &);
    /**
     * @hash   -1304488675
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerActionPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerActionPacket const &);
    /**
     * @hash   -1468153843
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRemoveEntityPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RemoveEntityPacket const &);
    /**
     * @hash   -1296220922
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCreatePhotoPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CreatePhotoPacket const &);
    /**
     * @hash   1460524400
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCommandOutputPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CommandOutputPacket const &);
    /**
     * @hash   677903359
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerFogPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerFogPacket const &);
    /**
     * @hash   241417445
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMapCreateLockedCopyPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MapCreateLockedCopyPacket const &);
    /**
     * @hash   1879092768
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVOnScreenTextureAnimationPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class OnScreenTextureAnimationPacket const &);
    /**
     * @hash   -1494296386
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVScriptCustomEventPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ScriptCustomEventPacket const &);
    /**
     * @hash   1430687559
     * @symbol ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetActorLinkPacket@@@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetActorLinkPacket const &);
    /**
     * @hash   1467456226
     * @symbol ?onConnect@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@@Z
     */
    MCVAPI void onConnect(class NetworkIdentifier const &);
    /**
     * @hash   -413362214
     * @symbol ?onDisconnect@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N1@Z
     */
    MCVAPI void onDisconnect(class NetworkIdentifier const &, std::string const &, bool, std::string const &);
    /**
     * @hash   -1175510901
     * @symbol ?onPlayerReady@NetEventCallback@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void onPlayerReady(class Player &);
    /**
     * @hash   772105198
     * @symbol ?onStoreOfferReceive@NetEventCallback@@UEAAX_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void onStoreOfferReceive(bool, std::string const &);
    /**
     * @hash   -1317178239
     * @symbol ?onTick@NetEventCallback@@UEAAXXZ
     */
    MCVAPI void onTick();
    /**
     * @hash   -1357999093
     * @symbol ?onTransferRequest@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCVAPI void onTransferRequest(class NetworkIdentifier const &, std::string const &, int);
    /**
     * @hash   -1868203998
     * @symbol ?onUnableToConnect@NetEventCallback@@UEAAXXZ
     */
    MCVAPI void onUnableToConnect();
    /**
     * @hash   -1449326244
     * @symbol ?sendPacketViolationDetectedTelemetryData@NetEventCallback@@UEAAXAEBUExtendedStreamReadResult@@W4PacketViolationResponse@@W4MinecraftPacketIds@@AEBVNetworkIdentifier@@@Z
     */
    MCVAPI void sendPacketViolationDetectedTelemetryData(struct ExtendedStreamReadResult const &, enum PacketViolationResponse, enum MinecraftPacketIds, class NetworkIdentifier const &);
#endif

};