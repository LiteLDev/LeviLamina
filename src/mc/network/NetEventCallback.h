#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Connection { enum class DisconnectFailReason; }
// clang-format on

class NetEventCallback {

public:
    // prevent constructor by default
    NetEventCallback& operator=(NetEventCallback const&) = delete;
    NetEventCallback(NetEventCallback const&)            = delete;
    NetEventCallback()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7(); // NOLINT
    /**
     * @vftbl 8
     * @symbol
     * ?onWebsocketRequest\@NetEventCallback\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0V?$function\@$$A6AXXZ\@3\@\@Z
     */
    virtual void onWebsocketRequest(std::string const&, std::string const&, class std::function<void(void)>); // NOLINT
    /**
     * @vftbl 9
     * @symbol
     * ?sendPacketViolationDetectedTelemetryData\@NetEventCallback\@\@UEAAX_KV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PacketViolationResponse\@\@W4MinecraftPacketIds\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    virtual void
    sendPacketViolationDetectedTelemetryData(unsigned __int64, std::string, enum class PacketViolationResponse, enum class MinecraftPacketIds, class NetworkIdentifier const&); // NOLINT
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10(); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?getGameSpecificNetEventCallback\@NetEventCallback\@\@UEAAPEAVGameSpecificNetEventCallback\@\@XZ
     */
    virtual class GameSpecificNetEventCallback* getGameSpecificNetEventCallback(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETEVENTCALLBACK
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRequestPermissionsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class RequestPermissionsPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVActorFallPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ActorFallPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVShowProfilePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ShowProfilePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMobEquipmentPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class MobEquipmentPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMapInfoRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class MapInfoRequestPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVScriptMessagePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ScriptMessagePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddPaintingPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class AddPaintingPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVGameRulesChangedPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class GameRulesChangedPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVStopSoundPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class StopSoundPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVChunkRadiusUpdatedPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ChunkRadiusUpdatedPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBookEditPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class BookEditPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVContainerClosePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ContainerClosePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMoveActorDeltaPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class MoveActorDeltaPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateSoftEnumPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class UpdateSoftEnumPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVToastRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ToastRequestPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCodeBuilderPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class CodeBuilderPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetScoreboardIdentityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SetScoreboardIdentityPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRequestChunkRadiusPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class RequestChunkRadiusPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlaySoundPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class PlaySoundPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPassengerJumpPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class PassengerJumpPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVNetworkChunkPublisherUpdatePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class NetworkChunkPublisherUpdatePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetLocalPlayerAsInitializedPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SetLocalPlayerAsInitializedPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetTimePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SetTimePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBookAddPagePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class BookAddPagePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSimpleEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SimpleEventPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVEducationSettingsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class EducationSettingsPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVEmoteListPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class EmoteListPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddItemActorPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class AddItemActorPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackClientResponsePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ResourcePackClientResponsePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVModalFormResponsePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ModalFormResponsePacket const&); // NOLINT
    /**
     * @symbol
     * ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@V?$shared_ptr\@VLevelChunkPacket\@\@\@std\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class std::shared_ptr<class LevelChunkPacket>); // NOLINT
    /**
     * @symbol
     * ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@V?$shared_ptr\@VClientCacheMissResponsePacket\@\@\@std\@\@\@Z
     */
    MCVAPI void
    handle(class NetworkIdentifier const&, class std::shared_ptr<class ClientCacheMissResponsePacket>); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAgentActionEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class AgentActionEventPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayStatusPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class PlayStatusPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLegacyTelemetryEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class LegacyTelemetryEventPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCommandRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class CommandRequestPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCorrectPlayerMovePredictionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class CorrectPlayerMovePredictionPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCameraShakePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class CameraShakePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerArmorDamagePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class PlayerArmorDamagePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPhotoTransferPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class PhotoTransferPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetDifficultyPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SetDifficultyPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVDisconnectPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class DisconnectPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateClientInputLocksPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class UpdateClientInputLocksPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLevelEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class LevelEventPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVContainerOpenPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ContainerOpenPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVClientCacheBlobStatusPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ClientCacheBlobStatusPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateAttributesPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class UpdateAttributesPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBossEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class BossEventPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVInventoryTransactionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class InventoryTransactionPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVServerSettingsRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ServerSettingsRequestPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCraftingDataPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class CraftingDataPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackStackPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ResourcePackStackPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddMobPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class AddMobPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVInventoryContentPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class InventoryContentPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerHotbarPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class PlayerHotbarPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateTradePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class UpdateTradePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVStructureTemplateDataResponsePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class StructureTemplateDataResponsePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRemoveObjectivePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class RemoveObjectivePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVEmotePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class EmotePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSubChunkRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SubChunkRequestPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCameraInstructionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class CameraInstructionPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerEnchantOptionsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class PlayerEnchantOptionsPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLevelSoundEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class LevelSoundEventPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdatePlayerGameTypePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class UpdatePlayerGameTypePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateAbilitiesPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class UpdateAbilitiesPacket const&); // NOLINT
    /**
     * @symbol
     * ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@V?$shared_ptr\@VUpdateBlockPacket\@\@\@std\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class std::shared_ptr<class UpdateBlockPacket>); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateAdventureSettingsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class UpdateAdventureSettingsPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBookSignPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class BookSignPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVServerStatsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ServerStatsPacket const&); // NOLINT
    /**
     * @symbol
     * ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@V?$shared_ptr\@VUpdateBlockSyncedPacket\@\@\@std\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class std::shared_ptr<class UpdateBlockSyncedPacket>); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRequestAbilityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class RequestAbilityPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLessonProgressPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class LessonProgressPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVItemFrameDropItemPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ItemFrameDropItemPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVChangeMobPropertyPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ChangeMobPropertyPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddPlayerPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class AddPlayerPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddEntityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class AddEntityPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVNetworkSettingsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class NetworkSettingsPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackChunkRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ResourcePackChunkRequestPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCreativeContentPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class CreativeContentPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPacketViolationWarningPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class PacketViolationWarningPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVItemStackResponsePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ItemStackResponsePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetActorMotionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SetActorMotionPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVContainerSetDataPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ContainerSetDataPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVGuiDataPickItemPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class GuiDataPickItemPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCodeBuilderSourcePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class CodeBuilderSourcePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetTitlePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SetTitlePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddActorPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class AddActorPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSpawnParticleEffectPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SpawnParticleEffectPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerSkinPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class PlayerSkinPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetDisplayObjectivePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SetDisplayObjectivePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRemoveActorPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class RemoveActorPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLabTablePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class LabTablePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVClientCacheStatusPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ClientCacheStatusPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetCommandsEnabledPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SetCommandsEnabledPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVClientboundMapItemDataPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ClientboundMapItemDataPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVNpcRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class NpcRequestPacket const&); // NOLINT
    /**
     * @symbol
     * ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPositionTrackingDBServerBroadcastPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class PositionTrackingDBServerBroadcastPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetDefaultGameTypePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SetDefaultGameTypePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddVolumeEntityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class AddVolumeEntityPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVShowCreditsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ShowCreditsPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLecternUpdatePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class LecternUpdatePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBlockPickRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class BlockPickRequestPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLevelEventGenericPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class LevelEventGenericPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBookSwapPagesPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class BookSwapPagesPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMultiplayerSettingsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class MultiplayerSettingsPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVActorPickRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ActorPickRequestPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMovePlayerPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class MovePlayerPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSimulationTypePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SimulationTypePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVGameTestRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class GameTestRequestPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVItemStackRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ItemStackRequestPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateEquipPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class UpdateEquipPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCommandBlockUpdatePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class CommandBlockUpdatePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMobEffectPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class MobEffectPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVInteractPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class InteractPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVFeatureRegistryPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class FeatureRegistryPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackDataInfoPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ResourcePackDataInfoPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVClientboundDebugRendererPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ClientboundDebugRendererPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBookDeletePagePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class BookDeletePagePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVTrimDataPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class TrimDataPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVNpcDialoguePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class NpcDialoguePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAnimatePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class AnimatePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVStartGamePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class StartGamePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVItemComponentPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ItemComponentPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCameraPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class CameraPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVClientToServerHandshakePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ClientToServerHandshakePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVServerToClientHandshakePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ServerToClientHandshakePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAvailableActorIdentifiersPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class AvailableActorIdentifiersPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetScorePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SetScorePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVHurtArmorPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class HurtArmorPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVNetworkStackLatencyPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class NetworkStackLatencyPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSubClientLoginPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SubClientLoginPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerInputPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class PlayerInputPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVStructureTemplateDataRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class StructureTemplateDataRequestPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLevelSoundEventPacketV1\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class LevelSoundEventPacketV1 const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAgentAnimationPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class AgentAnimationPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLevelSoundEventPacketV2\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class LevelSoundEventPacketV2 const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVEduUriResourcePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class EduUriResourcePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVStructureBlockUpdatePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class StructureBlockUpdatePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetPlayerGameTypePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SetPlayerGameTypePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVDebugInfoPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class DebugInfoPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMoveActorAbsolutePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class MoveActorAbsolutePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVFilterTextPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class FilterTextPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAddBehaviorTreePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class AddBehaviorTreePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVInventoryActionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class InventoryActionPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVDeathInfoPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class DeathInfoPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBiomeDefinitionListPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class BiomeDefinitionListPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVLoginPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class LoginPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRemoveVolumeEntityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class RemoveVolumeEntityPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCompletedUsingItemPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class CompletedUsingItemPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUnlockedRecipesPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class UnlockedRecipesPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMotionPredictionHintsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class MotionPredictionHintsPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPurchaseReceiptPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class PurchaseReceiptPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerListPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class PlayerListPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMobArmorEquipmentPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class MobArmorEquipmentPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVUpdateSubChunkBlocksPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class UpdateSubChunkBlocksPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetLastHurtByPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SetLastHurtByPacket const&); // NOLINT
    /**
     * @symbol
     * ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPositionTrackingDBClientRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class PositionTrackingDBClientRequestPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerStartItemCooldownPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class PlayerStartItemCooldownPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVTransferPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class TransferPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePacksInfoPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ResourcePacksInfoPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVTickSyncPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class TickSyncPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetSpawnPositionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SetSpawnPositionPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSyncActorPropertyPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SyncActorPropertyPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAutomationClientConnectPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class AutomationClientConnectPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVShowStoreOfferPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ShowStoreOfferPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetActorDataPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SetActorDataPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAnimateEntityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class AnimateEntityPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCameraPresetsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class CameraPresetsPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVBlockEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class BlockEventPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVTakeItemActorPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class TakeItemActorPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVTickingAreasLoadStatusPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class TickingAreasLoadStatusPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVEditorNetworkPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class EditorNetworkPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCompressedBiomeDefinitionListPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class CompressedBiomeDefinitionListPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVDimensionDataPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class DimensionDataPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVActorEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ActorEventPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerAuthInputPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class PlayerAuthInputPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVServerSettingsResponsePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ServerSettingsResponsePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSettingsCommandPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SettingsCommandPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSpawnExperienceOrbPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SpawnExperienceOrbPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVChangeDimensionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ChangeDimensionPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRequestNetworkSettingsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class RequestNetworkSettingsPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVInventorySlotPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class InventorySlotPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRespawnPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class RespawnPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAvailableCommandsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class AvailableCommandsPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetHealthPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SetHealthPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVGameTestResultsPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class GameTestResultsPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVAnvilDamagePacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class AnvilDamagePacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVOpenSignPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class OpenSignPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSubChunkPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SubChunkPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackChunkDataPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ResourcePackChunkDataPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCraftingEventPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class CraftingEventPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVModalFormRequestPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class ModalFormRequestPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerActionPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class PlayerActionPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVRemoveEntityPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class RemoveEntityPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCreatePhotoPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class CreatePhotoPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVCommandOutputPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class CommandOutputPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPlayerFogPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class PlayerFogPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVMapCreateLockedCopyPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class MapCreateLockedCopyPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVOnScreenTextureAnimationPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class OnScreenTextureAnimationPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVSetActorLinkPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class SetActorLinkPacket const&); // NOLINT
    /**
     * @symbol ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVTextPacket\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class TextPacket const&); // NOLINT
    /**
     * @symbol
     * ?handle\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@V?$shared_ptr\@VBlockActorDataPacket\@\@\@std\@\@\@Z
     */
    MCVAPI void handle(class NetworkIdentifier const&, class std::shared_ptr<class BlockActorDataPacket>); // NOLINT
    /**
     * @symbol ?onConnect\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCVAPI void onConnect(class NetworkIdentifier const&); // NOLINT
    /**
     * @symbol
     * ?onDisconnect\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@W4DisconnectFailReason\@Connection\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N2\@Z
     */
    MCVAPI void
    onDisconnect(class NetworkIdentifier const&, enum class Connection::DisconnectFailReason, std::string const&, bool, std::string const&); // NOLINT
    /**
     * @symbol ?onPlayerReady\@NetEventCallback\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void onPlayerReady(class Player&); // NOLINT
    /**
     * @symbol
     * ?onStoreOfferReceive\@NetEventCallback\@\@UEAAX_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onStoreOfferReceive(bool, std::string const&); // NOLINT
    /**
     * @symbol ?onTick\@NetEventCallback\@\@UEAAXXZ
     */
    MCVAPI void onTick(); // NOLINT
    /**
     * @symbol
     * ?onTransferRequest\@NetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCVAPI void onTransferRequest(class NetworkIdentifier const&, std::string const&, int); // NOLINT
    /**
     * @symbol ?onUnableToConnect\@NetEventCallback\@\@UEAAXXZ
     */
    MCVAPI void onUnableToConnect(); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetEventCallback(); // NOLINT
#endif
};
