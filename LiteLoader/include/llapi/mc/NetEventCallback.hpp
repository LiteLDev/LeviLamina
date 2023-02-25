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
     * @vftbl  11
     * @symbol  ?getGameSpecificNetEventCallback\@NetEventCallback\@\@UEAAPEAVGameSpecificNetEventCallback\@\@XZ
     */
    virtual class GameSpecificNetEventCallback * getGameSpecificNetEventCallback();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETEVENTCALLBACK
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRequestPermissionsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestPermissionsPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVActorFallPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ActorFallPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVShowProfilePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ShowProfilePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMobEquipmentPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MobEquipmentPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMapInfoRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MapInfoRequestPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVScriptMessagePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ScriptMessagePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddPaintingPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddPaintingPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVGameRulesChangedPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class GameRulesChangedPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVStopSoundPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class StopSoundPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVChunkRadiusUpdatedPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ChunkRadiusUpdatedPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBookEditPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BookEditPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVContainerClosePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ContainerClosePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMoveActorDeltaPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MoveActorDeltaPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateSoftEnumPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateSoftEnumPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVToastRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ToastRequestPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCodeBuilderPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CodeBuilderPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetScoreboardIdentityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetScoreboardIdentityPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRequestChunkRadiusPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestChunkRadiusPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlaySoundPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlaySoundPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPassengerJumpPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PassengerJumpPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVNetworkChunkPublisherUpdatePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class NetworkChunkPublisherUpdatePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetLocalPlayerAsInitializedPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetLocalPlayerAsInitializedPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetTimePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetTimePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBookAddPagePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BookAddPagePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSimpleEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SimpleEventPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVEducationSettingsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EducationSettingsPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVEmoteListPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EmoteListPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddItemActorPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddItemActorPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackClientResponsePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackClientResponsePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVModalFormResponsePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ModalFormResponsePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVTextPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class TextPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@V?$shared_ptr\@VBlockActorDataPacket\@\@\@std\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class BlockActorDataPacket>);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAgentActionEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AgentActionEventPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayStatusPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayStatusPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCommandRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CommandRequestPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCorrectPlayerMovePredictionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CorrectPlayerMovePredictionPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCameraShakePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CameraShakePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerArmorDamagePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerArmorDamagePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPhotoTransferPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PhotoTransferPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetDifficultyPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetDifficultyPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVDisconnectPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class DisconnectPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateClientInputLocksPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateClientInputLocksPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLevelEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelEventPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVContainerOpenPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ContainerOpenPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVClientCacheBlobStatusPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientCacheBlobStatusPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateAttributesPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateAttributesPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBossEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BossEventPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVInventoryTransactionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class InventoryTransactionPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVServerSettingsRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ServerSettingsRequestPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCraftingDataPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CraftingDataPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackStackPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackStackPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddMobPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddMobPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVInventoryContentPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class InventoryContentPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerHotbarPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerHotbarPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateTradePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateTradePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVStructureTemplateDataResponsePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class StructureTemplateDataResponsePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRemoveObjectivePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RemoveObjectivePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVEmotePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EmotePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSubChunkRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SubChunkRequestPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerEnchantOptionsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerEnchantOptionsPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLevelSoundEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdatePlayerGameTypePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdatePlayerGameTypePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateAbilitiesPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateAbilitiesPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@V?$shared_ptr\@VLevelChunkPacket\@\@\@std\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class LevelChunkPacket>);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateAdventureSettingsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateAdventureSettingsPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBookSignPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BookSignPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVServerStatsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ServerStatsPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@V?$shared_ptr\@VClientCacheMissResponsePacket\@\@\@std\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class ClientCacheMissResponsePacket>);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRequestAbilityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestAbilityPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLessonProgressPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LessonProgressPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVItemFrameDropItemPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ItemFrameDropItemPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVChangeMobPropertyPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ChangeMobPropertyPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddPlayerPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddPlayerPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddEntityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddEntityPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVNetworkSettingsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class NetworkSettingsPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackChunkRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackChunkRequestPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCreativeContentPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CreativeContentPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPacketViolationWarningPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PacketViolationWarningPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVItemStackResponsePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ItemStackResponsePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetActorMotionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetActorMotionPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVContainerSetDataPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ContainerSetDataPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVGuiDataPickItemPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class GuiDataPickItemPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCodeBuilderSourcePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CodeBuilderSourcePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@V?$shared_ptr\@VUpdateBlockPacket\@\@\@std\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class UpdateBlockPacket>);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetTitlePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetTitlePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddActorPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddActorPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSpawnParticleEffectPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SpawnParticleEffectPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerSkinPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerSkinPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetDisplayObjectivePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetDisplayObjectivePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRemoveActorPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RemoveActorPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLabTablePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LabTablePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVClientCacheStatusPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientCacheStatusPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EventPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetCommandsEnabledPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetCommandsEnabledPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVClientboundMapItemDataPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientboundMapItemDataPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVNpcRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class NpcRequestPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPositionTrackingDBServerBroadcastPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PositionTrackingDBServerBroadcastPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetDefaultGameTypePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetDefaultGameTypePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@V?$shared_ptr\@VUpdateBlockSyncedPacket\@\@\@std\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class UpdateBlockSyncedPacket>);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddVolumeEntityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddVolumeEntityPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVShowCreditsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ShowCreditsPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLecternUpdatePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LecternUpdatePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBlockPickRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BlockPickRequestPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLevelEventGenericPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelEventGenericPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBookSwapPagesPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BookSwapPagesPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMultiplayerSettingsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MultiplayerSettingsPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVActorPickRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ActorPickRequestPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMovePlayerPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MovePlayerPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSimulationTypePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SimulationTypePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVGameTestRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class GameTestRequestPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVItemStackRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ItemStackRequestPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateEquipPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateEquipPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCommandBlockUpdatePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CommandBlockUpdatePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMobEffectPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MobEffectPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVInteractPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class InteractPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVClientCheatAbilityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientCheatAbilityPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVFeatureRegistryPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class FeatureRegistryPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackDataInfoPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackDataInfoPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVClientboundDebugRendererPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientboundDebugRendererPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBookDeletePagePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BookDeletePagePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVNpcDialoguePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class NpcDialoguePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAnimatePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AnimatePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVStartGamePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class StartGamePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVItemComponentPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ItemComponentPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCameraPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CameraPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVClientToServerHandshakePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientToServerHandshakePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVServerToClientHandshakePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ServerToClientHandshakePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAvailableActorIdentifiersPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AvailableActorIdentifiersPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetScorePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetScorePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVHurtArmorPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class HurtArmorPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVNetworkStackLatencyPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class NetworkStackLatencyPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSubClientLoginPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SubClientLoginPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerInputPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerInputPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVStructureTemplateDataRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class StructureTemplateDataRequestPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLevelSoundEventPacketV1\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacketV1 const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLevelSoundEventPacketV2\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacketV2 const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVEduUriResourcePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EduUriResourcePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVStructureBlockUpdatePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class StructureBlockUpdatePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetPlayerGameTypePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetPlayerGameTypePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVDebugInfoPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class DebugInfoPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMoveActorAbsolutePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MoveActorAbsolutePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVFilterTextPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class FilterTextPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddBehaviorTreePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AddBehaviorTreePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVInventoryActionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class InventoryActionPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVDeathInfoPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class DeathInfoPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBiomeDefinitionListPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BiomeDefinitionListPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLoginPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LoginPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRemoveVolumeEntityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RemoveVolumeEntityPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCompletedUsingItemPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CompletedUsingItemPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMotionPredictionHintsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MotionPredictionHintsPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPurchaseReceiptPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PurchaseReceiptPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerListPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerListPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMobArmorEquipmentPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MobArmorEquipmentPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateSubChunkBlocksPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateSubChunkBlocksPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetLastHurtByPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetLastHurtByPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPositionTrackingDBClientRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PositionTrackingDBClientRequestPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerStartItemCooldownPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerStartItemCooldownPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVTransferPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class TransferPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePacksInfoPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePacksInfoPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVTickSyncPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class TickSyncPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetSpawnPositionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetSpawnPositionPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSyncActorPropertyPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SyncActorPropertyPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAutomationClientConnectPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AutomationClientConnectPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVShowStoreOfferPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ShowStoreOfferPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetActorDataPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetActorDataPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAnimateEntityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AnimateEntityPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBlockEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BlockEventPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVTakeItemActorPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class TakeItemActorPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVTickingAreasLoadStatusPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class TickingAreasLoadStatusPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVEditorNetworkPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EditorNetworkPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVDimensionDataPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class DimensionDataPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVActorEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ActorEventPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerAuthInputPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerAuthInputPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVServerSettingsResponsePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ServerSettingsResponsePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSettingsCommandPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SettingsCommandPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSpawnExperienceOrbPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SpawnExperienceOrbPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVChangeDimensionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ChangeDimensionPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRequestNetworkSettingsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestNetworkSettingsPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVInventorySlotPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class InventorySlotPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRespawnPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RespawnPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAvailableCommandsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AvailableCommandsPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetHealthPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetHealthPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVGameTestResultsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class GameTestResultsPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAnvilDamagePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AnvilDamagePacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSubChunkPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SubChunkPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackChunkDataPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackChunkDataPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCraftingEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CraftingEventPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVModalFormRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ModalFormRequestPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerActionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerActionPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRemoveEntityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RemoveEntityPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCreatePhotoPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CreatePhotoPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCommandOutputPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CommandOutputPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerFogPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerFogPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMapCreateLockedCopyPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MapCreateLockedCopyPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVOnScreenTextureAnimationPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class OnScreenTextureAnimationPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVScriptCustomEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ScriptCustomEventPacket const &);
    /**
     * @symbol  ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetActorLinkPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetActorLinkPacket const &);
    /**
     * @symbol  ?onConnect\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCVAPI void onConnect(class NetworkIdentifier const &);
    /**
     * @symbol  ?onDisconnect\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N1\@Z
     */
    MCVAPI void onDisconnect(class NetworkIdentifier const &, std::string const &, bool, std::string const &);
    /**
     * @symbol  ?onPlayerReady\@NetEventCallback\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void onPlayerReady(class Player &);
    /**
     * @symbol  ?onStoreOfferReceive\@NetEventCallback\@\@UEAAX_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onStoreOfferReceive(bool, std::string const &);
    /**
     * @symbol  ?onTick\@NetEventCallback\@\@UEAAXXZ
     */
    MCVAPI void onTick();
    /**
     * @symbol  ?onTransferRequest\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCVAPI void onTransferRequest(class NetworkIdentifier const &, std::string const &, int);
    /**
     * @symbol  ?onUnableToConnect\@NetEventCallback\@\@UEAAXXZ
     */
    MCVAPI void onUnableToConnect();
    /**
     * @symbol  ?sendPacketViolationDetectedTelemetryData\@NetEventCallback\@\@UEAAXAEBUExtendedStreamReadResult\@\@W4PacketViolationResponse\@\@W4MinecraftPacketIds\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCVAPI void sendPacketViolationDetectedTelemetryData(struct ExtendedStreamReadResult const &, enum class PacketViolationResponse, enum class MinecraftPacketIds, class NetworkIdentifier const &);
#endif

};