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

    // vIndex: 1, symbol: ?onPlayerReady@NetEventCallback@@UEAAXAEAVPlayer@@@Z
    virtual void onPlayerReady(class Player&);

    // vIndex: 2, symbol: ?onConnect@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@@Z
    virtual void onConnect(class NetworkIdentifier const&);

    // vIndex: 3, symbol:
    // ?onUnableToConnect@NetEventCallback@@UEAAXW4DisconnectFailReason@Connection@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void onUnableToConnect(::Connection::DisconnectFailReason, std::string const&);

    // vIndex: 4, symbol: ?onTick@NetEventCallback@@UEAAXXZ
    virtual void onTick();

    // vIndex: 5, symbol:
    // ?onStoreOfferReceive@NetEventCallback@@UEAAXW4ShowStoreOfferRedirectType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void onStoreOfferReceive(::ShowStoreOfferRedirectType, std::string const& offerID);

    // vIndex: 6, symbol:
    // ?onDisconnect@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@W4DisconnectFailReason@Connection@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N2@Z
    virtual void
    onDisconnect(class NetworkIdentifier const&, ::Connection::DisconnectFailReason, std::string const&, bool, std::string const&);

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7() = 0;

    // vIndex: 8, symbol:
    // ?onWebsocketRequest@NetEventCallback@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0V?$function@$$A6AXXZ@3@@Z
    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void()>);

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

    // vIndex: 10, symbol:
    // ?onTransferRequest@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual void onTransferRequest(class NetworkIdentifier const&, std::string const&, int);

    // vIndex: 11, symbol: ?getIsConnectedToApplicationLayer@NetEventCallback@@UEBA_NXZ
    virtual bool getIsConnectedToApplicationLayer() const;

    // vIndex: 12, symbol: ?getGameSpecificNetEventCallback@NetEventCallback@@UEAAPEAVGameSpecificNetEventCallback@@XZ
    virtual class GameSpecificNetEventCallback* getGameSpecificNetEventCallback();

    // vIndex: 13, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPacketViolationWarningPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class PacketViolationWarningPacket const&);

    // vIndex: 14, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVDisconnectPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class DisconnectPacket const&);

    // vIndex: 15, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVEmoteListPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class EmoteListPacket const&);

    // vIndex: 16, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVEmotePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class EmotePacket const&);

    // vIndex: 17, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLoginPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class LoginPacket const&);

    // vIndex: 18, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSubClientLoginPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SubClientLoginPacket const&);

    // vIndex: 19, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVClientToServerHandshakePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ClientToServerHandshakePacket const&);

    // vIndex: 20, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVServerToClientHandshakePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ServerToClientHandshakePacket const&);

    // vIndex: 21, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePacksInfoPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ResourcePacksInfoPacket const&);

    // vIndex: 22, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackStackPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ResourcePackStackPacket const&);

    // vIndex: 23, symbol:
    // ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackClientResponsePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ResourcePackClientResponsePacket const&);

    // vIndex: 24, symbol:
    // ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPositionTrackingDBClientRequestPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class PositionTrackingDBClientRequestPacket const&);

    // vIndex: 25, symbol:
    // ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPositionTrackingDBServerBroadcastPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class PositionTrackingDBServerBroadcastPacket const&);

    // vIndex: 26, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayStatusPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class PlayStatusPacket const&);

    // vIndex: 27, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetTimePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SetTimePacket const&);

    // vIndex: 28, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVTextPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class TextPacket const&);

    // vIndex: 29, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVStartGamePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class StartGamePacket const&);

    // vIndex: 30, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAddItemActorPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class AddItemActorPacket const&);

    // vIndex: 31, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAddPaintingPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class AddPaintingPacket const&);

    // vIndex: 32, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVTakeItemActorPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class TakeItemActorPacket const&);

    // vIndex: 33, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAddActorPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class AddActorPacket const&);

    // vIndex: 34, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAddMobPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class AddMobPacket const&);

    // vIndex: 35, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAddPlayerPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class AddPlayerPacket const&);

    // vIndex: 36, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRemoveActorPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class RemoveActorPacket const&);

    // vIndex: 37, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMoveActorAbsolutePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class MoveActorAbsolutePacket const&);

    // vIndex: 38, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMoveActorDeltaPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class MoveActorDeltaPacket const&);

    // vIndex: 39, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMovePlayerPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class MovePlayerPacket const&);

    // vIndex: 40, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPassengerJumpPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class PassengerJumpPacket const&);

    // vIndex: 41, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetPlayerGameTypePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SetPlayerGameTypePacket const&);

    // vIndex: 42, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdatePlayerGameTypePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class UpdatePlayerGameTypePacket const&);

    // vIndex: 43, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetDefaultGameTypePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SetDefaultGameTypePacket const&);

    // vIndex: 44, symbol:
    // ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VUpdateBlockPacket@@@std@@@Z
    virtual void handle(class NetworkIdentifier const&, std::shared_ptr<class UpdateBlockPacket>);

    // vIndex: 45, symbol:
    // ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VUpdateBlockSyncedPacket@@@std@@@Z
    virtual void handle(class NetworkIdentifier const&, std::shared_ptr<class UpdateBlockSyncedPacket>);

    // vIndex: 46, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSpawnParticleEffectPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SpawnParticleEffectPacket const&);

    // vIndex: 47, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLevelSoundEventPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class LevelSoundEventPacket const&);

    // vIndex: 48, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLevelSoundEventPacketV1@@@Z
    virtual void handle(class NetworkIdentifier const&, class LevelSoundEventPacketV1 const&);

    // vIndex: 49, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLevelSoundEventPacketV2@@@Z
    virtual void handle(class NetworkIdentifier const&, class LevelSoundEventPacketV2 const&);

    // vIndex: 50, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLevelEventPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class LevelEventPacket const&);

    // vIndex: 51, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLevelEventGenericPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class LevelEventGenericPacket const&);

    // vIndex: 52, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBlockEventPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class BlockEventPacket const&);

    // vIndex: 53, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBlockPickRequestPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class BlockPickRequestPacket const&);

    // vIndex: 54, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVActorPickRequestPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ActorPickRequestPacket const&);

    // vIndex: 55, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVGuiDataPickItemPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class GuiDataPickItemPacket const&);

    // vIndex: 56, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVActorEventPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ActorEventPacket const&);

    // vIndex: 57, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMobEffectPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class MobEffectPacket const&);

    // vIndex: 58, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMobEquipmentPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class MobEquipmentPacket const&);

    // vIndex: 59, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMobArmorEquipmentPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class MobArmorEquipmentPacket const&);

    // vIndex: 60, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetActorDataPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SetActorDataPacket const&);

    // vIndex: 61, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetActorMotionPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SetActorMotionPacket const&);

    // vIndex: 62, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMotionPredictionHintsPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class MotionPredictionHintsPacket const&);

    // vIndex: 63, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetHealthPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SetHealthPacket const&);

    // vIndex: 64, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetActorLinkPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SetActorLinkPacket const&);

    // vIndex: 65, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetSpawnPositionPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SetSpawnPositionPacket const&);

    // vIndex: 66, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVInteractPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class InteractPacket const&);

    // vIndex: 67, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerActionPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class PlayerActionPacket const&);

    // vIndex: 68, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVActorFallPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ActorFallPacket const&);

    // vIndex: 69, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVHurtArmorPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class HurtArmorPacket const&);

    // vIndex: 70, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerArmorDamagePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class PlayerArmorDamagePacket const&);

    // vIndex: 71, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVItemStackRequestPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ItemStackRequestPacket const&);

    // vIndex: 72, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVItemStackResponsePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ItemStackResponsePacket const&);

    // vIndex: 73, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVContainerOpenPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ContainerOpenPacket const&);

    // vIndex: 74, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVContainerClosePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ContainerClosePacket const&);

    // vIndex: 75, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVContainerSetDataPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ContainerSetDataPacket const&);

    // vIndex: 76, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerHotbarPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class PlayerHotbarPacket const&);

    // vIndex: 77, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVInventoryContentPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class InventoryContentPacket const&);

    // vIndex: 78, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVInventorySlotPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class InventorySlotPacket const&);

    // vIndex: 79, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCraftingDataPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class CraftingDataPacket const&);

    // vIndex: 80, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAnimatePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class AnimatePacket const&);

    // vIndex: 81, symbol:
    // ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VBlockActorDataPacket@@@std@@@Z
    virtual void handle(class NetworkIdentifier const&, std::shared_ptr<class BlockActorDataPacket>);

    // vIndex: 82, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerAuthInputPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class PlayerAuthInputPacket const&);

    // vIndex: 83, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerInputPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class PlayerInputPacket const&);

    // vIndex: 84, symbol:
    // ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VLevelChunkPacket@@@std@@@Z
    virtual void handle(class NetworkIdentifier const&, std::shared_ptr<class LevelChunkPacket>);

    // vIndex: 85, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSubChunkPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SubChunkPacket const&);

    // vIndex: 86, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSubChunkRequestPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SubChunkRequestPacket const&);

    // vIndex: 87, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVClientCacheBlobStatusPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ClientCacheBlobStatusPacket const&);

    // vIndex: 88, symbol:
    // ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VClientCacheMissResponsePacket@@@std@@@Z
    virtual void handle(class NetworkIdentifier const&, std::shared_ptr<class ClientCacheMissResponsePacket>);

    // vIndex: 89, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetCommandsEnabledPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SetCommandsEnabledPacket const&);

    // vIndex: 90, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetDifficultyPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SetDifficultyPacket const&);

    // vIndex: 91, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSimpleEventPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SimpleEventPacket const&);

    // vIndex: 92, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVChangeDimensionPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ChangeDimensionPacket const&);

    // vIndex: 93, symbol:
    // ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VUpdateAttributesPacket@@@std@@@Z
    virtual void handle(class NetworkIdentifier const&, std::shared_ptr<class UpdateAttributesPacket>);

    // vIndex: 94, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerListPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class PlayerListPacket const&);

    // vIndex: 95, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLegacyTelemetryEventPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class LegacyTelemetryEventPacket const&);

    // vIndex: 96, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSpawnExperienceOrbPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SpawnExperienceOrbPacket const&);

    // vIndex: 97, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVClientboundDebugRendererPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ClientboundDebugRendererPacket const&);

    // vIndex: 98, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVClientboundMapItemDataPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ClientboundMapItemDataPacket const&);

    // vIndex: 99, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVClientCacheStatusPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ClientCacheStatusPacket const&);

    // vIndex: 100, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRequestChunkRadiusPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class RequestChunkRadiusPacket const&);

    // vIndex: 101, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMapCreateLockedCopyPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class MapCreateLockedCopyPacket const&);

    // vIndex: 102, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMapInfoRequestPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class MapInfoRequestPacket const&);

    // vIndex: 103, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVChunkRadiusUpdatedPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ChunkRadiusUpdatedPacket const&);

    // vIndex: 104, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBossEventPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class BossEventPacket const&);

    // vIndex: 105, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdateTradePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class UpdateTradePacket const&);

    // vIndex: 106, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdateEquipPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class UpdateEquipPacket const&);

    // vIndex: 107, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAvailableCommandsPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class AvailableCommandsPacket const&);

    // vIndex: 108, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCommandRequestPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class CommandRequestPacket const&);

    // vIndex: 109, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCommandOutputPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class CommandOutputPacket const&);

    // vIndex: 110, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCommandBlockUpdatePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class CommandBlockUpdatePacket const&);

    // vIndex: 111, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCompletedUsingItemPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class CompletedUsingItemPacket const&);

    // vIndex: 112, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCameraInstructionPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class CameraInstructionPacket const&);

    // vIndex: 113, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCameraPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class CameraPacket const&);

    // vIndex: 114, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCameraPresetsPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class CameraPresetsPacket const&);

    // vIndex: 115, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCameraShakePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class CameraShakePacket const&);

    // vIndex: 116, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVInventoryActionPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class InventoryActionPacket const&);

    // vIndex: 117, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVGameRulesChangedPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class GameRulesChangedPacket const&);

    // vIndex: 118, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackDataInfoPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ResourcePackDataInfoPacket const&);

    // vIndex: 119, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackChunkDataPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ResourcePackChunkDataPacket const&);

    // vIndex: 120, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackChunkRequestPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ResourcePackChunkRequestPacket const&);

    // vIndex: 121, symbol:
    // ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVNetworkChunkPublisherUpdatePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class NetworkChunkPublisherUpdatePacket const&);

    // vIndex: 122, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVStructureBlockUpdatePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class StructureBlockUpdatePacket const&);

    // vIndex: 123, symbol:
    // ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVStructureTemplateDataRequestPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class StructureTemplateDataRequestPacket const&);

    // vIndex: 124, symbol:
    // ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVStructureTemplateDataResponsePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class StructureTemplateDataResponsePacket const&);

    // vIndex: 125, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVTransferPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class TransferPacket const&);

    // vIndex: 126, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlaySoundPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class PlaySoundPacket const&);

    // vIndex: 127, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVStopSoundPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class StopSoundPacket const&);

    // vIndex: 128, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetTitlePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SetTitlePacket const&);

    // vIndex: 129, symbol:
    // ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VInventoryTransactionPacket@@@std@@@Z
    virtual void handle(class NetworkIdentifier const&, std::shared_ptr<class InventoryTransactionPacket>);

    // vIndex: 130, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAddBehaviorTreePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class AddBehaviorTreePacket const&);

    // vIndex: 131, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVShowStoreOfferPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ShowStoreOfferPacket const&);

    // vIndex: 132, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPurchaseReceiptPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class PurchaseReceiptPacket const&);

    // vIndex: 133, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRemoveObjectivePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class RemoveObjectivePacket const&);

    // vIndex: 134, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetDisplayObjectivePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SetDisplayObjectivePacket const&);

    // vIndex: 135, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAutomationClientConnectPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class AutomationClientConnectPacket const&);

    // vIndex: 136, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVModalFormRequestPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ModalFormRequestPacket const&);

    // vIndex: 137, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVModalFormResponsePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ModalFormResponsePacket const&);

    // vIndex: 138, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVToastRequestPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ToastRequestPacket const&);

    // vIndex: 139, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVOnScreenTextureAnimationPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class OnScreenTextureAnimationPacket const&);

    // vIndex: 140, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVServerSettingsRequestPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ServerSettingsRequestPacket const&);

    // vIndex: 141, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVServerSettingsResponsePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ServerSettingsResponsePacket const&);

    // vIndex: 142, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVShowProfilePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ShowProfilePacket const&);

    // vIndex: 143, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetScorePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SetScorePacket const&);

    // vIndex: 144, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetScoreboardIdentityPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SetScoreboardIdentityPacket const&);

    // vIndex: 145, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVTickSyncPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class TickSyncPacket const&);

    // vIndex: 146, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVTickingAreasLoadStatusPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class TickingAreasLoadStatusPacket const&);

    // vIndex: 147, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdateSoftEnumPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class UpdateSoftEnumPacket const&);

    // vIndex: 148, symbol:
    // ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAvailableActorIdentifiersPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class AvailableActorIdentifiersPacket const&);

    // vIndex: 149, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAddVolumeEntityPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class AddVolumeEntityPacket const&);

    // vIndex: 150, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRemoveVolumeEntityPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class RemoveVolumeEntityPacket const&);

    // vIndex: 151, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVDimensionDataPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class DimensionDataPacket const&);

    // vIndex: 152, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVEditorNetworkPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class EditorNetworkPacket const&);

    // vIndex: 153, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRefreshEntitlementsPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class RefreshEntitlementsPacket const&);

    // vIndex: 154, symbol:
    // ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVServerPlayerPostMovePositionPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ServerPlayerPostMovePositionPacket const&);

    // vIndex: 155, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRespawnPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class RespawnPacket const&);

    // vIndex: 156, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVShowCreditsPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ShowCreditsPacket const&);

    // vIndex: 157, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerSkinPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class PlayerSkinPacket const&);

    // vIndex: 158, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerStartItemCooldownPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class PlayerStartItemCooldownPacket const&);

    // vIndex: 159, symbol:
    // ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerToggleCrafterSlotRequestPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class PlayerToggleCrafterSlotRequestPacket const&);

    // vIndex: 160, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetLastHurtByPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SetLastHurtByPacket const&);

    // vIndex: 161, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBookAddPagePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class BookAddPagePacket const&);

    // vIndex: 162, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBookDeletePagePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class BookDeletePagePacket const&);

    // vIndex: 163, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLecternUpdatePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class LecternUpdatePacket const&);

    // vIndex: 164, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBookEditPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class BookEditPacket const&);

    // vIndex: 165, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBookSignPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class BookSignPacket const&);

    // vIndex: 166, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBookSwapPagesPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class BookSwapPagesPacket const&);

    // vIndex: 167, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVNpcRequestPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class NpcRequestPacket const&);

    // vIndex: 168, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPhotoTransferPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class PhotoTransferPacket const&);

    // vIndex: 169, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLabTablePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class LabTablePacket const&);

    // vIndex: 170, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVNetworkSettingsPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class NetworkSettingsPacket const&);

    // vIndex: 171, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVNetworkStackLatencyPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class NetworkStackLatencyPacket const&);

    // vIndex: 172, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVServerStatsPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ServerStatsPacket const&);

    // vIndex: 173, symbol:
    // ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetLocalPlayerAsInitializedPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SetLocalPlayerAsInitializedPacket const&);

    // vIndex: 174, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVScriptMessagePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ScriptMessagePacket const&);

    // vIndex: 175, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVBiomeDefinitionListPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class BiomeDefinitionListPacket const&);

    // vIndex: 176, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVEducationSettingsPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class EducationSettingsPacket const&);

    // vIndex: 177, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVEduUriResourcePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class EduUriResourcePacket const&);

    // vIndex: 178, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVMultiplayerSettingsPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class MultiplayerSettingsPacket const&);

    // vIndex: 179, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSettingsCommandPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SettingsCommandPacket const&);

    // vIndex: 180, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAnvilDamagePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class AnvilDamagePacket const&);

    // vIndex: 181, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCreativeContentPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class CreativeContentPacket const&);

    // vIndex: 182, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCodeBuilderPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class CodeBuilderPacket const&);

    // vIndex: 183, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerEnchantOptionsPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class PlayerEnchantOptionsPacket const&);

    // vIndex: 184, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVDebugInfoPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class DebugInfoPacket const&);

    // vIndex: 185, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVChangeMobPropertyPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ChangeMobPropertyPacket const&);

    // vIndex: 186, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAnimateEntityPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class AnimateEntityPacket const&);

    // vIndex: 187, symbol:
    // ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCorrectPlayerMovePredictionPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class CorrectPlayerMovePredictionPacket const&);

    // vIndex: 188, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerFogPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class PlayerFogPacket const&);

    // vIndex: 189, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVItemComponentPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ItemComponentPacket const&);

    // vIndex: 190, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVLessonProgressPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class LessonProgressPacket const&);

    // vIndex: 191, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVFeatureRegistryPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class FeatureRegistryPacket const&);

    // vIndex: 192, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSyncActorPropertyPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SyncActorPropertyPacket const&);

    // vIndex: 193, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSimulationTypePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SimulationTypePacket const&);

    // vIndex: 194, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVNpcDialoguePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class NpcDialoguePacket const&);

    // vIndex: 195, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCreatePhotoPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class CreatePhotoPacket const&);

    // vIndex: 196, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdateSubChunkBlocksPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class UpdateSubChunkBlocksPacket const&);

    // vIndex: 197, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCodeBuilderSourcePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class CodeBuilderSourcePacket const&);

    // vIndex: 198, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAgentActionEventPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class AgentActionEventPacket const&);

    // vIndex: 199, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVDeathInfoPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class DeathInfoPacket const&);

    // vIndex: 200, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRequestAbilityPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class RequestAbilityPacket const&);

    // vIndex: 201, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRequestPermissionsPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class RequestPermissionsPacket const&);

    // vIndex: 202, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdateAbilitiesPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class UpdateAbilitiesPacket const&);

    // vIndex: 203, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdateAdventureSettingsPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class UpdateAdventureSettingsPacket const&);

    // vIndex: 204, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVRequestNetworkSettingsPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class RequestNetworkSettingsPacket const&);

    // vIndex: 205, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVGameTestRequestPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class GameTestRequestPacket const&);

    // vIndex: 206, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVGameTestResultsPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class GameTestResultsPacket const&);

    // vIndex: 207, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUpdateClientInputLocksPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class UpdateClientInputLocksPacket const&);

    // vIndex: 208, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVUnlockedRecipesPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class UnlockedRecipesPacket const&);

    // vIndex: 209, symbol:
    // ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVCompressedBiomeDefinitionListPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class CompressedBiomeDefinitionListPacket const&);

    // vIndex: 210, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVTrimDataPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class TrimDataPacket const&);

    // vIndex: 211, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVOpenSignPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class OpenSignPacket const&);

    // vIndex: 212, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVAgentAnimationPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class AgentAnimationPacket const&);

    // vIndex: 213, symbol:
    // ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetPlayerInventoryOptionsPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SetPlayerInventoryOptionsPacket const&);

    // vIndex: 214, symbol: ?handle@NetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVSetHudPacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class SetHudPacket const&);

    // NOLINTEND
};
