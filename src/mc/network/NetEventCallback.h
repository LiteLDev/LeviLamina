#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/ShowStoreOfferRedirectType.h"
#include "mc/enums/SubClientId.h"
#include "mc/enums/connection/DisconnectFailReason.h"
#include "mc/resources/PacketViolationResponse.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class NetEventCallback : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    NetEventCallback& operator=(NetEventCallback const&);
    NetEventCallback(NetEventCallback const&);
    NetEventCallback();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1NetEventCallback@@UEAA@XZ
    virtual ~NetEventCallback();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1() = 0;

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol:
    // ?onWebsocketRequest@NetEventCallback@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0V?$function@$$A6AXXZ@3@@Z
    virtual void onWebsocketRequest(
        std::string const&        serverAddress,
        std::string const&        payload,
        std::function<void(void)> errorCallback
    );

    // vIndex: 9, symbol:
    // ?sendPacketViolationDetectedTelemetryData@NetEventCallback@@UEAAX_KV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PacketViolationResponse@@W4MinecraftPacketIds@@AEBVNetworkIdentifier@@IW4SubClientId@@5I@Z
    virtual void sendPacketViolationDetectedTelemetryData(
        uint64,
        std::string,
        ::PacketViolationResponse,
        ::MinecraftPacketIds,
        class NetworkIdentifier const&,
        uint,
        ::SubClientId,
        ::SubClientId,
        uint
    );

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: ?getGameSpecificNetEventCallback@NetEventCallback@@UEAAPEAVGameSpecificNetEventCallback@@XZ
    virtual class GameSpecificNetEventCallback* getGameSpecificNetEventCallback();

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRequestPermissionsPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class RequestPermissionsPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVActorFallPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ActorFallPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRefreshEntitlementsPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class RefreshEntitlementsPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVShowProfilePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ShowProfilePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMobEquipmentPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class MobEquipmentPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMapInfoRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class MapInfoRequestPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVScriptMessagePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ScriptMessagePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAddPaintingPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class AddPaintingPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVGameRulesChangedPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class GameRulesChangedPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVStopSoundPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class StopSoundPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVChunkRadiusUpdatedPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ChunkRadiusUpdatedPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBookEditPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class BookEditPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVContainerClosePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ContainerClosePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMoveActorDeltaPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class MoveActorDeltaPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdateSoftEnumPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class UpdateSoftEnumPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVToastRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ToastRequestPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCodeBuilderPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class CodeBuilderPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetScoreboardIdentityPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SetScoreboardIdentityPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRequestChunkRadiusPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class RequestChunkRadiusPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlaySoundPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class PlaySoundPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPassengerJumpPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class PassengerJumpPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVNetworkChunkPublisherUpdatePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class NetworkChunkPublisherUpdatePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetLocalPlayerAsInitializedPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SetLocalPlayerAsInitializedPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetTimePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SetTimePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBookAddPagePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class BookAddPagePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSimpleEventPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SimpleEventPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVEducationSettingsPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class EducationSettingsPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVEmoteListPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class EmoteListPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAddItemActorPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class AddItemActorPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackClientResponsePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ResourcePackClientResponsePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVModalFormResponsePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ModalFormResponsePacket const& packet);

    // symbol:
    // ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VClientCacheMissResponsePacket@@@std@@@Z
    MCVAPI void
    handle(class NetworkIdentifier const& source, std::shared_ptr<class ClientCacheMissResponsePacket> packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VInventoryTransactionPacket@@@std@@@Z
    MCVAPI void handle(class NetworkIdentifier const&, std::shared_ptr<class InventoryTransactionPacket>);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAgentActionEventPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class AgentActionEventPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayStatusPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class PlayStatusPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLegacyTelemetryEventPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class LegacyTelemetryEventPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCommandRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class CommandRequestPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCorrectPlayerMovePredictionPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class CorrectPlayerMovePredictionPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCameraShakePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class CameraShakePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerArmorDamagePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class PlayerArmorDamagePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPhotoTransferPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class PhotoTransferPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetDifficultyPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SetDifficultyPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVDisconnectPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class DisconnectPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdateClientInputLocksPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const&, class UpdateClientInputLocksPacket const&);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLevelEventPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class LevelEventPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVContainerOpenPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ContainerOpenPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVClientCacheBlobStatusPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ClientCacheBlobStatusPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdateAttributesPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class UpdateAttributesPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBossEventPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class BossEventPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVServerSettingsRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ServerSettingsRequestPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCraftingDataPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class CraftingDataPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackStackPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ResourcePackStackPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAddMobPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class AddMobPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVInventoryContentPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class InventoryContentPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerHotbarPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class PlayerHotbarPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdateTradePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class UpdateTradePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVStructureTemplateDataResponsePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class StructureTemplateDataResponsePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRemoveObjectivePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class RemoveObjectivePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVEmotePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class EmotePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSubChunkRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SubChunkRequestPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCameraInstructionPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class CameraInstructionPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerEnchantOptionsPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class PlayerEnchantOptionsPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLevelSoundEventPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class LevelSoundEventPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdatePlayerGameTypePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class UpdatePlayerGameTypePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdateAbilitiesPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class UpdateAbilitiesPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VUpdateBlockPacket@@@std@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, std::shared_ptr<class UpdateBlockPacket> packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdateAdventureSettingsPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class UpdateAdventureSettingsPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBookSignPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class BookSignPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVServerStatsPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ServerStatsPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VUpdateBlockSyncedPacket@@@std@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, std::shared_ptr<class UpdateBlockSyncedPacket> packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRequestAbilityPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class RequestAbilityPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLessonProgressPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class LessonProgressPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVItemFrameDropItemPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ItemFrameDropItemPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVChangeMobPropertyPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ChangeMobPropertyPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAddPlayerPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class AddPlayerPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAddEntityPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class AddEntityPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVNetworkSettingsPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class NetworkSettingsPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackChunkRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ResourcePackChunkRequestPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCreativeContentPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class CreativeContentPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPacketViolationWarningPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const&, class PacketViolationWarningPacket const&);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVItemStackResponsePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ItemStackResponsePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetActorMotionPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SetActorMotionPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVContainerSetDataPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ContainerSetDataPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVGuiDataPickItemPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class GuiDataPickItemPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCodeBuilderSourcePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class CodeBuilderSourcePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetTitlePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SetTitlePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAddActorPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class AddActorPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSpawnParticleEffectPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SpawnParticleEffectPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetPlayerInventoryOptionsPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SetPlayerInventoryOptionsPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerSkinPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class PlayerSkinPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetDisplayObjectivePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SetDisplayObjectivePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRemoveActorPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class RemoveActorPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLabTablePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class LabTablePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVClientCacheStatusPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ClientCacheStatusPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetCommandsEnabledPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SetCommandsEnabledPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVClientboundMapItemDataPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ClientboundMapItemDataPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVNpcRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class NpcRequestPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPositionTrackingDBServerBroadcastPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const&, class PositionTrackingDBServerBroadcastPacket const&);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetDefaultGameTypePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SetDefaultGameTypePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerToggleCrafterSlotRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const&, class PlayerToggleCrafterSlotRequestPacket const&);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAddVolumeEntityPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class AddVolumeEntityPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVShowCreditsPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ShowCreditsPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLecternUpdatePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class LecternUpdatePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBlockPickRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class BlockPickRequestPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLevelEventGenericPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class LevelEventGenericPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBookSwapPagesPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class BookSwapPagesPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMultiplayerSettingsPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class MultiplayerSettingsPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVActorPickRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ActorPickRequestPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMovePlayerPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class MovePlayerPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSimulationTypePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SimulationTypePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVGameTestRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class GameTestRequestPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVItemStackRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ItemStackRequestPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdateEquipPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class UpdateEquipPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCommandBlockUpdatePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class CommandBlockUpdatePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMobEffectPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class MobEffectPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVInteractPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class InteractPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVFeatureRegistryPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class FeatureRegistryPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackDataInfoPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ResourcePackDataInfoPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVClientboundDebugRendererPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const&, class ClientboundDebugRendererPacket const&);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBookDeletePagePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class BookDeletePagePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVTrimDataPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class TrimDataPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVNpcDialoguePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class NpcDialoguePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAnimatePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class AnimatePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVStartGamePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class StartGamePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVItemComponentPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ItemComponentPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCameraPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class CameraPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVClientToServerHandshakePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ClientToServerHandshakePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVServerToClientHandshakePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ServerToClientHandshakePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAvailableActorIdentifiersPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class AvailableActorIdentifiersPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetScorePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SetScorePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVHurtArmorPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class HurtArmorPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVNetworkStackLatencyPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class NetworkStackLatencyPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSubClientLoginPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SubClientLoginPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerInputPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class PlayerInputPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVStructureTemplateDataRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class StructureTemplateDataRequestPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLevelSoundEventPacketV1@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class LevelSoundEventPacketV1 const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAgentAnimationPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class AgentAnimationPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLevelSoundEventPacketV2@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class LevelSoundEventPacketV2 const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVEduUriResourcePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class EduUriResourcePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVStructureBlockUpdatePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class StructureBlockUpdatePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetPlayerGameTypePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SetPlayerGameTypePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVDebugInfoPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class DebugInfoPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMoveActorAbsolutePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class MoveActorAbsolutePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVFilterTextPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class FilterTextPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAddBehaviorTreePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class AddBehaviorTreePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVInventoryActionPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class InventoryActionPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVDeathInfoPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class DeathInfoPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBiomeDefinitionListPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class BiomeDefinitionListPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVServerPlayerPostMovePositionPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const&, class ServerPlayerPostMovePositionPacket const&);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLoginPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class LoginPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRemoveVolumeEntityPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class RemoveVolumeEntityPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCompletedUsingItemPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class CompletedUsingItemPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUnlockedRecipesPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class UnlockedRecipesPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMotionPredictionHintsPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const&, class MotionPredictionHintsPacket const&);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPurchaseReceiptPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class PurchaseReceiptPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerListPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class PlayerListPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMobArmorEquipmentPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class MobArmorEquipmentPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdateSubChunkBlocksPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const&, class UpdateSubChunkBlocksPacket const&);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetLastHurtByPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SetLastHurtByPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPositionTrackingDBClientRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const&, class PositionTrackingDBClientRequestPacket const&);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerStartItemCooldownPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class PlayerStartItemCooldownPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVTransferPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class TransferPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePacksInfoPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ResourcePacksInfoPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVTickSyncPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class TickSyncPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetSpawnPositionPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SetSpawnPositionPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSyncActorPropertyPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SyncActorPropertyPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAutomationClientConnectPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class AutomationClientConnectPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVShowStoreOfferPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ShowStoreOfferPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetActorDataPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SetActorDataPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAnimateEntityPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class AnimateEntityPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCameraPresetsPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class CameraPresetsPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBlockEventPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class BlockEventPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVTakeItemActorPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class TakeItemActorPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVTickingAreasLoadStatusPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const&, class TickingAreasLoadStatusPacket const&);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVEditorNetworkPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class EditorNetworkPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCompressedBiomeDefinitionListPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class CompressedBiomeDefinitionListPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVDimensionDataPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class DimensionDataPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVActorEventPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ActorEventPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerAuthInputPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class PlayerAuthInputPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVServerSettingsResponsePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ServerSettingsResponsePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSettingsCommandPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SettingsCommandPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSpawnExperienceOrbPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SpawnExperienceOrbPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVChangeDimensionPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ChangeDimensionPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRequestNetworkSettingsPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class RequestNetworkSettingsPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVInventorySlotPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class InventorySlotPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRespawnPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class RespawnPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAvailableCommandsPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class AvailableCommandsPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetHealthPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SetHealthPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVGameTestResultsPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class GameTestResultsPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAnvilDamagePacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class AnvilDamagePacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVOpenSignPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class OpenSignPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSubChunkPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SubChunkPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackChunkDataPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ResourcePackChunkDataPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVModalFormRequestPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class ModalFormRequestPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerActionPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class PlayerActionPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRemoveEntityPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class RemoveEntityPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCreatePhotoPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class CreatePhotoPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCommandOutputPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class CommandOutputPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerFogPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class PlayerFogPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMapCreateLockedCopyPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class MapCreateLockedCopyPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVOnScreenTextureAnimationPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class OnScreenTextureAnimationPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetActorLinkPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class SetActorLinkPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVTextPacket@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, class TextPacket const& packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VBlockActorDataPacket@@@std@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, std::shared_ptr<class BlockActorDataPacket> packet);

    // symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VLevelChunkPacket@@@std@@@Z
    MCVAPI void handle(class NetworkIdentifier const& source, std::shared_ptr<class LevelChunkPacket> packet);

    // symbol: ?onConnect@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@@Z
    MCVAPI void onConnect(class NetworkIdentifier const& hostId);

    // symbol:
    // ?onDisconnect@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@W4DisconnectFailReason@Connection@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N2@Z
    MCVAPI void
    onDisconnect(class NetworkIdentifier const&, ::Connection::DisconnectFailReason, std::string const&, bool, std::string const&);

    // symbol: ?onPlayerReady@NetEventCallback@@UEAAXAEAVPlayer@@@Z
    MCVAPI void onPlayerReady(class Player& player);

    // symbol:
    // ?onStoreOfferReceive@NetEventCallback@@UEAAXW4ShowStoreOfferRedirectType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void onStoreOfferReceive(enum ShowStoreOfferRedirectType showAllOffers, std::string const& offerID);

    // symbol: ?onTick@NetEventCallback@@UEAAXXZ
    MCVAPI void onTick();

    // symbol:
    // ?onTransferRequest@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCVAPI void
    onTransferRequest(class NetworkIdentifier const& source, std::string const& serverAddress, int serverPort);

    // symbol:
    // ?onUnableToConnect@NetEventCallback@@UEAAXW4DisconnectFailReason@Connection@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void onUnableToConnect(::Connection::DisconnectFailReason, std::string const&);

    // NOLINTEND
};
