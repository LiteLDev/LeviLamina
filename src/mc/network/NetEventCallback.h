#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/IncomingPacketFilterResult.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/OutgoingPacketFilterResult.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/connection/DisconnectionStage.h"
#include "mc/network/packet/ShowStoreOfferRedirectType.h"

// auto generated forward declare list
// clang-format off
class ActorEventPacket;
class ActorFallPacket;
class ActorPickRequestPacket;
class AddActorPacket;
class AddBehaviorTreePacket;
class AddItemActorPacket;
class AddMobPacket;
class AddPaintingPacket;
class AddPlayerPacket;
class AddVolumeEntityPacket;
class AgentActionEventPacket;
class AgentAnimationPacket;
class AnimateEntityPacket;
class AnimatePacket;
class AnvilDamagePacket;
class AutomationClientConnectPacket;
class AvailableActorIdentifiersPacket;
class AvailableCommandsPacket;
class AwardAchievementPacket;
class BiomeDefinitionListPacket;
class BlockActorDataPacket;
class BlockEventPacket;
class BlockPickRequestPacket;
class BookAddPagePacket;
class BookDeletePagePacket;
class BookEditPacket;
class BookSignPacket;
class BookSwapPagesPacket;
class BossEventPacket;
class CameraAimAssistActorPriorityPacket;
class CameraAimAssistPacket;
class CameraAimAssistPresetsPacket;
class CameraInstructionPacket;
class CameraPacket;
class CameraPresetsPacket;
class CameraShakePacket;
class CameraSplinePacket;
class ChangeDimensionPacket;
class ChangeMobPropertyPacket;
class ChunkRadiusUpdatedPacket;
class ClientCacheBlobStatusPacket;
class ClientCacheMissResponsePacket;
class ClientCacheStatusPacket;
class ClientCameraAimAssistPacket;
class ClientMovementPredictionSyncPacket;
class ClientToServerHandshakePacket;
class ClientboundAttributeLayerSyncPacket;
class ClientboundCloseFormPacket;
class ClientboundControlSchemeSetPacket;
class ClientboundDataDrivenUICloseScreenPacket;
class ClientboundDataDrivenUIReloadPacket;
class ClientboundDataDrivenUIShowScreenPacket;
class ClientboundDataStorePacket;
class ClientboundDebugRendererPacket;
class ClientboundMapItemDataPacket;
class ClientboundTextureShiftPacket;
class CodeBuilderPacket;
class CodeBuilderSourcePacket;
class CommandBlockUpdatePacket;
class CommandOutputPacket;
class CommandRequestPacket;
class CompletedUsingItemPacket;
class ContainerClosePacket;
class ContainerOpenPacket;
class ContainerRegistryCleanupPacket;
class ContainerSetDataPacket;
class CorrectPlayerMovePredictionPacket;
class CraftingDataPacket;
class CreatePhotoPacket;
class CreativeContentPacket;
class CurrentStructureFeaturePacket;
class DeathInfoPacket;
class DebugDrawerPacket;
class DebugInfoPacket;
class DimensionDataPacket;
class DisconnectPacket;
class EditorNetworkPacket;
class EduUriResourcePacket;
class EducationSettingsPacket;
class EmoteListPacket;
class EmotePacket;
class FeatureRegistryPacket;
class GameRulesChangedPacket;
class GameSpecificNetEventCallback;
class GameTestRequestPacket;
class GameTestResultsPacket;
class GraphicsOverrideParameterPacket;
class GuiDataPickItemPacket;
class HurtArmorPacket;
class IPacketSecurityController;
class InteractPacket;
class InventoryActionPacket;
class InventoryContentPacket;
class InventorySlotPacket;
class InventoryTransactionPacket;
class ItemRegistryPacket;
class ItemStackRequestPacket;
class ItemStackResponsePacket;
class JigsawStructureDataPacket;
class LabTablePacket;
class LecternUpdatePacket;
class LegacyTelemetryEventPacket;
class LessonProgressPacket;
class LevelChunkPacket;
class LevelEventGenericPacket;
class LevelEventPacket;
class LevelSoundEventPacket;
class LocatorBarPacket;
class LoginPacket;
class MapCreateLockedCopyPacket;
class MapInfoRequestPacket;
class MobArmorEquipmentPacket;
class MobEffectPacket;
class MobEquipmentPacket;
class ModalFormRequestPacket;
class ModalFormResponsePacket;
class MotionPredictionHintsPacket;
class MoveActorAbsolutePacket;
class MoveActorDeltaPacket;
class MovePlayerPacket;
class MovementEffectPacket;
class MultiplayerSettingsPacket;
class NetworkChunkPublisherUpdatePacket;
class NetworkIdentifier;
class NetworkSettingsPacket;
class NetworkStackLatencyPacket;
class NpcDialoguePacket;
class NpcRequestPacket;
class OnScreenTextureAnimationPacket;
class OpenSignPacket;
class Packet;
class PacketViolationWarningPacket;
class PartyChangedPacket;
class PhotoTransferPacket;
class PlaySoundPacket;
class PlayStatusPacket;
class Player;
class PlayerActionPacket;
class PlayerArmorDamagePacket;
class PlayerAuthInputPacket;
class PlayerEnchantOptionsPacket;
class PlayerFogPacket;
class PlayerHotbarPacket;
class PlayerListPacket;
class PlayerLocationPacket;
class PlayerSkinPacket;
class PlayerStartItemCooldownPacket;
class PlayerToggleCrafterSlotRequestPacket;
class PlayerUpdateEntityOverridesPacket;
class PlayerVideoCapturePacket;
class PositionTrackingDBClientRequestPacket;
class PositionTrackingDBServerBroadcastPacket;
class PurchaseReceiptPacket;
class RefreshEntitlementsPacket;
class RemoveActorPacket;
class RemoveObjectivePacket;
class RemoveVolumeEntityPacket;
class RequestAbilityPacket;
class RequestChunkRadiusPacket;
class RequestNetworkSettingsPacket;
class RequestPermissionsPacket;
class ResourcePackChunkDataPacket;
class ResourcePackChunkRequestPacket;
class ResourcePackClientResponsePacket;
class ResourcePackDataInfoPacket;
class ResourcePackStackPacket;
class ResourcePacksInfoPacket;
class ResourcePacksReadyForValidationPacket;
class RespawnPacket;
class ScriptMessagePacket;
class ServerPlayerPostMovePositionPacket;
class ServerSettingsRequestPacket;
class ServerSettingsResponsePacket;
class ServerStatsPacket;
class ServerToClientHandshakePacket;
class ServerboundDataDrivenScreenClosedPacket;
class ServerboundDataStorePacket;
class ServerboundDiagnosticsPacket;
class ServerboundLoadingScreenPacket;
class ServerboundPackSettingChangePacket;
class SetActorDataPacket;
class SetActorLinkPacket;
class SetActorMotionPacket;
class SetCommandsEnabledPacket;
class SetDefaultGameTypePacket;
class SetDifficultyPacket;
class SetDisplayObjectivePacket;
class SetHealthPacket;
class SetHudPacket;
class SetLastHurtByPacket;
class SetLocalPlayerAsInitializedPacket;
class SetPlayerGameTypePacket;
class SetPlayerInventoryOptionsPacket;
class SetScorePacket;
class SetScoreboardIdentityPacket;
class SetSpawnPositionPacket;
class SetTimePacket;
class SetTitlePacket;
class SettingsCommandPacket;
class ShowCreditsPacket;
class ShowProfilePacket;
class ShowStoreOfferPacket;
class SimpleEventPacket;
class SimulationTypePacket;
class SpawnExperienceOrbPacket;
class SpawnParticleEffectPacket;
class StartGamePacket;
class StopSoundPacket;
class StructureBlockUpdatePacket;
class StructureTemplateDataRequestPacket;
class StructureTemplateDataResponsePacket;
class SubChunkPacket;
class SubChunkRequestPacket;
class SubClientLoginPacket;
class SyncActorPropertyPacket;
class SyncWorldClocksPacket;
class TakeItemActorPacket;
class TextPacket;
class TickingAreasLoadStatusPacket;
class ToastRequestPacket;
class TransferPacket;
class TrimDataPacket;
class UnlockedRecipesPacket;
class UpdateAbilitiesPacket;
class UpdateAdventureSettingsPacket;
class UpdateAttributesPacket;
class UpdateBlockPacket;
class UpdateBlockSyncedPacket;
class UpdateClientInputLocksPacket;
class UpdateClientOptionsPacket;
class UpdateEquipPacket;
class UpdatePlayerGameTypePacket;
class UpdateSoftEnumPacket;
class UpdateSubChunkBlocksPacket;
class UpdateTradePacket;
class VoxelShapesPacket;
struct NetworkIdentifierWithSubId;
namespace Social { class GameConnectionInfo; }
// clang-format on

class NetEventCallback : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onPlayerReady(::Player& player);

    virtual ~NetEventCallback() /*override*/;

    virtual void onConnect(::NetworkIdentifier const& id);

    virtual void onUnableToConnect(
        ::Connection::DisconnectFailReason discoReason,
        ::std::string const&               messageFromServer,
        ::std::string const&               messageBodyOverride
    );

    virtual void onTick();

    virtual void onOutgoingPacket(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

    virtual void onValidPacketReceived(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

    virtual void onStoreOfferReceive(::ShowStoreOfferRedirectType const redirectType, ::std::string const& offerID);

    virtual void onDisconnect(
        ::NetworkIdentifier const&               source,
        ::Connection::DisconnectFailReason const discoReason,
        ::Connection::DisconnectionStage const   disconnectStage,
        ::std::string const&                     messageFromServer,
        ::std::string const&                     messageBodyOverride,
        bool                                     skipMessage,
        ::std::string const&                     telemetryOverride
    );

    virtual ::IncomingPacketFilterResult
    allowIncomingPacketId(::NetworkIdentifierWithSubId const& id, ::MinecraftPacketIds packetId, uint64 packetSize) = 0;

    virtual ::OutgoingPacketFilterResult
    allowOutgoingPacket(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet) = 0;

    virtual void onWebsocketRequest(
        ::std::string const&    serverAddress,
        ::std::string const&    payload,
        ::std::function<void()> errorCallback
    );

    virtual void handlePacketViolation(
        ::std::shared_ptr<::IPacketSecurityController> const& packetSecurityController,
        ::std::error_code const&                              errorCode,
        ::PacketViolationResponse const                       response,
        ::MinecraftPacketIds const                            packetId,
        ::std::string&&                                       context,
        ::NetworkIdentifier const&                            netId,
        ::SubClientId const                                   clientSubId,
        ::SubClientId const                                   senderSubId,
        uint const                                            packetSize
    );

    virtual void sendPacketViolationWarningPacket(
        ::std::error_code const&   errorCode,
        ::PacketViolationResponse  violationResponse,
        ::MinecraftPacketIds       violatingPacketId,
        ::std::string const&       context,
        ::NetworkIdentifier const& netId,
        ::SubClientId              clientSubId
    );

    virtual void onTransferRequest(::NetworkIdentifier const& id, ::Social::GameConnectionInfo const& destination);

    virtual bool getIsConnectedToApplicationLayer() const;

    virtual ::GameSpecificNetEventCallback* getGameSpecificNetEventCallback();

    virtual void handle(::NetworkIdentifier const&, ::PacketViolationWarningPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::DisconnectPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::EmoteListPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::EmotePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::LoginPacket> packet);

    virtual void handle(::NetworkIdentifier const& source, ::PartyChangedPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::SubClientLoginPacket> packet);

    virtual void handle(::NetworkIdentifier const& source, ::ClientToServerHandshakePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ServerToClientHandshakePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ResourcePacksInfoPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ResourcePackStackPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::PositionTrackingDBClientRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::PositionTrackingDBServerBroadcastPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::PlayStatusPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::SetTimePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::TextPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::StartGamePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::AddItemActorPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::AddPaintingPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::TakeItemActorPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::AddActorPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::AddMobPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::AddPlayerPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::RemoveActorPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::MoveActorAbsolutePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::MoveActorDeltaPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::MovePlayerPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::SetPlayerGameTypePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::UpdatePlayerGameTypePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::SetDefaultGameTypePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockPacket> packet);

    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockSyncedPacket> packet);

    virtual void handle(::NetworkIdentifier const& source, ::SpawnParticleEffectPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::LevelSoundEventPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::LevelEventPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::LevelEventGenericPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::BlockEventPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::BlockPickRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ActorPickRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::GuiDataPickItemPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ActorEventPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::MobEffectPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MovementEffectPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::MobEquipmentPacket> packet);

    virtual void handle(::NetworkIdentifier const& source, ::MobArmorEquipmentPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::SetActorDataPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::SetActorMotionPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::MotionPredictionHintsPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::SetHealthPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::SetActorLinkPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::SetSpawnPositionPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::InteractPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::PlayerActionPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ActorFallPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::HurtArmorPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::PlayerArmorDamagePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ItemStackRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ItemStackResponsePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ContainerOpenPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ContainerClosePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ContainerRegistryCleanupPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ContainerSetDataPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::PlayerHotbarPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::InventoryContentPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::InventorySlotPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::CraftingDataPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::AnimatePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::BlockActorDataPacket> packet);

    virtual void handle(::NetworkIdentifier const& source, ::PlayerAuthInputPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ClientMovementPredictionSyncPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::LevelChunkPacket> packet);

    virtual void handle(::NetworkIdentifier const& source, ::SubChunkPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::SubChunkRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ClientCacheBlobStatusPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::ClientCacheMissResponsePacket> packet);

    virtual void handle(::NetworkIdentifier const& source, ::SetCommandsEnabledPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::SetDifficultyPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::SimpleEventPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ChangeDimensionPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateAttributesPacket>);

    virtual void handle(::NetworkIdentifier const& source, ::PlayerListPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::LegacyTelemetryEventPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::SpawnExperienceOrbPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ClientCameraAimAssistPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ClientboundDebugRendererPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundMapItemDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundCloseFormPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::ClientCacheStatusPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::RequestChunkRadiusPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::MapCreateLockedCopyPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::MapInfoRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ChunkRadiusUpdatedPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::BossEventPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::UpdateTradePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::VoxelShapesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateEquipPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::AvailableCommandsPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::CommandRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::CommandOutputPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::CommandBlockUpdatePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::CompletedUsingItemPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::CameraAimAssistActorPriorityPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraAimAssistPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraAimAssistPresetsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraInstructionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraPresetsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundControlSchemeSetPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraShakePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraSplinePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::InventoryActionPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::GameRulesChangedPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ResourcePackDataInfoPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackChunkDataPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::ResourcePackChunkRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ResourcePacksReadyForValidationPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::NetworkChunkPublisherUpdatePacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::StructureBlockUpdatePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::StructureTemplateDataRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::StructureTemplateDataResponsePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::TransferPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlaySoundPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::StopSoundPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetTitlePacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::InventoryTransactionPacket> packet);

    virtual void handle(::NetworkIdentifier const&, ::AddBehaviorTreePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ShowStoreOfferPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::PurchaseReceiptPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::RemoveObjectivePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetDisplayObjectivePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AutomationClientConnectPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ModalFormRequestPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::ModalFormResponsePacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ToastRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::OnScreenTextureAnimationPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerSettingsRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerSettingsResponsePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ShowProfilePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetScorePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetScoreboardIdentityPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::TickingAreasLoadStatusPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateSoftEnumPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AvailableActorIdentifiersPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AddVolumeEntityPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RemoveVolumeEntityPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::DimensionDataPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::EditorNetworkPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::RefreshEntitlementsPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::RespawnPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ShowCreditsPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::PlayerSkinPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::PlayerStartItemCooldownPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::PlayerToggleCrafterSlotRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::SetLastHurtByPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BookAddPagePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BookDeletePagePacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::LecternUpdatePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::BookEditPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::BookSignPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BookSwapPagesPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::NpcRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::PhotoTransferPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::LabTablePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::NetworkSettingsPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::NetworkStackLatencyPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ServerStatsPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::SetLocalPlayerAsInitializedPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ScriptMessagePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::BiomeDefinitionListPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::EducationSettingsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::EduUriResourcePacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::MultiplayerSettingsPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::SettingsCommandPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::AnvilDamagePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::CreativeContentPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::CodeBuilderPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerEnchantOptionsPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::DebugInfoPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ChangeMobPropertyPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AnimateEntityPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CorrectPlayerMovePredictionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerFogPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ItemRegistryPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LessonProgressPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::FeatureRegistryPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SyncActorPropertyPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SimulationTypePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::NpcDialoguePacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::CreatePhotoPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::UpdateSubChunkBlocksPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::CodeBuilderSourcePacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::AgentActionEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::DeathInfoPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::RequestAbilityPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::RequestPermissionsPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::UpdateAbilitiesPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::UpdateAdventureSettingsPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::RequestNetworkSettingsPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::GameTestRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::UpdateClientInputLocksPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::UnlockedRecipesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::TrimDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::OpenSignPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AgentAnimationPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::SetPlayerInventoryOptionsPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::SetHudPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::AwardAchievementPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::ServerboundLoadingScreenPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ServerboundDiagnosticsPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::JigsawStructureDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CurrentStructureFeaturePacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::UpdateClientOptionsPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::PlayerVideoCapturePacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::PlayerUpdateEntityOverridesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerLocationPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::DebugDrawerPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LocatorBarPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::ServerboundPackSettingChangePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ServerboundDataStorePacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataStorePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::GraphicsOverrideParameterPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUICloseScreenPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIReloadPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIShowScreenPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::ServerboundDataDrivenScreenClosedPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundTextureShiftPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SyncWorldClocksPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundAttributeLayerSyncPacket const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onPlayerReady(::Player& player);

    MCFOLD void $onConnect(::NetworkIdentifier const& id);

    MCFOLD void $onUnableToConnect(
        ::Connection::DisconnectFailReason discoReason,
        ::std::string const&               messageFromServer,
        ::std::string const&               messageBodyOverride
    );

    MCFOLD void $onTick();

    MCFOLD void $onOutgoingPacket(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

    MCFOLD void $onValidPacketReceived(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

    MCFOLD void $onStoreOfferReceive(::ShowStoreOfferRedirectType const redirectType, ::std::string const& offerID);

    MCFOLD void $onDisconnect(
        ::NetworkIdentifier const&               source,
        ::Connection::DisconnectFailReason const discoReason,
        ::Connection::DisconnectionStage const   disconnectStage,
        ::std::string const&                     messageFromServer,
        ::std::string const&                     messageBodyOverride,
        bool                                     skipMessage,
        ::std::string const&                     telemetryOverride
    );

    MCFOLD void $onWebsocketRequest(
        ::std::string const&    serverAddress,
        ::std::string const&    payload,
        ::std::function<void()> errorCallback
    );

    MCFOLD void $handlePacketViolation(
        ::std::shared_ptr<::IPacketSecurityController> const& packetSecurityController,
        ::std::error_code const&                              errorCode,
        ::PacketViolationResponse const                       response,
        ::MinecraftPacketIds const                            packetId,
        ::std::string&&                                       context,
        ::NetworkIdentifier const&                            netId,
        ::SubClientId const                                   clientSubId,
        ::SubClientId const                                   senderSubId,
        uint const                                            packetSize
    );

    MCFOLD void $sendPacketViolationWarningPacket(
        ::std::error_code const&   errorCode,
        ::PacketViolationResponse  violationResponse,
        ::MinecraftPacketIds       violatingPacketId,
        ::std::string const&       context,
        ::NetworkIdentifier const& netId,
        ::SubClientId              clientSubId
    );

    MCFOLD void $onTransferRequest(::NetworkIdentifier const& id, ::Social::GameConnectionInfo const& destination);

    MCFOLD bool $getIsConnectedToApplicationLayer() const;

    MCFOLD ::GameSpecificNetEventCallback* $getGameSpecificNetEventCallback();

    MCFOLD void $handle(::NetworkIdentifier const&, ::PacketViolationWarningPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::DisconnectPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::EmoteListPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::EmotePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::LoginPacket> packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PartyChangedPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::SubClientLoginPacket> packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ClientToServerHandshakePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ServerToClientHandshakePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ResourcePacksInfoPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ResourcePackStackPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PositionTrackingDBClientRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PositionTrackingDBServerBroadcastPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayStatusPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetTimePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::TextPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::StartGamePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::AddItemActorPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::AddPaintingPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::TakeItemActorPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::AddActorPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AddMobPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::AddPlayerPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::RemoveActorPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::MoveActorAbsolutePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::MoveActorDeltaPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::MovePlayerPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetPlayerGameTypePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::UpdatePlayerGameTypePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetDefaultGameTypePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockPacket> packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockSyncedPacket> packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SpawnParticleEffectPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::LevelSoundEventPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::LevelEventPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::LevelEventGenericPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::BlockEventPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::BlockPickRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ActorPickRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::GuiDataPickItemPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ActorEventPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::MobEffectPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::MovementEffectPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::MobEquipmentPacket> packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::MobArmorEquipmentPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetActorDataPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetActorMotionPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::MotionPredictionHintsPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetHealthPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetActorLinkPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetSpawnPositionPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::InteractPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerActionPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ActorFallPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::HurtArmorPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerArmorDamagePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ItemStackRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ItemStackResponsePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ContainerOpenPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ContainerClosePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ContainerRegistryCleanupPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ContainerSetDataPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerHotbarPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::InventoryContentPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::InventorySlotPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CraftingDataPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::AnimatePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::BlockActorDataPacket> packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerAuthInputPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ClientMovementPredictionSyncPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::LevelChunkPacket> packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SubChunkPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SubChunkRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ClientCacheBlobStatusPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::ClientCacheMissResponsePacket> packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetCommandsEnabledPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetDifficultyPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SimpleEventPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ChangeDimensionPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateAttributesPacket>);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerListPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::LegacyTelemetryEventPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SpawnExperienceOrbPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ClientCameraAimAssistPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ClientboundDebugRendererPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundMapItemDataPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundCloseFormPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ClientCacheStatusPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::RequestChunkRadiusPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::MapCreateLockedCopyPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::MapInfoRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ChunkRadiusUpdatedPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::BossEventPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdateTradePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::VoxelShapesPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdateEquipPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::AvailableCommandsPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::CommandRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::CommandOutputPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::CommandBlockUpdatePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::CompletedUsingItemPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CameraAimAssistActorPriorityPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CameraAimAssistPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CameraAimAssistPresetsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CameraInstructionPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CameraPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CameraPresetsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundControlSchemeSetPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CameraShakePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CameraSplinePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::InventoryActionPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::GameRulesChangedPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ResourcePackDataInfoPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ResourcePackChunkDataPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ResourcePackChunkRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ResourcePacksReadyForValidationPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::NetworkChunkPublisherUpdatePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::StructureBlockUpdatePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::StructureTemplateDataRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::StructureTemplateDataResponsePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::TransferPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlaySoundPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::StopSoundPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetTitlePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::InventoryTransactionPacket> packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AddBehaviorTreePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ShowStoreOfferPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PurchaseReceiptPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::RemoveObjectivePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetDisplayObjectivePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AutomationClientConnectPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ModalFormRequestPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ModalFormResponsePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ToastRequestPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::OnScreenTextureAnimationPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ServerSettingsRequestPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ServerSettingsResponsePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ShowProfilePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetScorePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetScoreboardIdentityPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::TickingAreasLoadStatusPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdateSoftEnumPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AvailableActorIdentifiersPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AddVolumeEntityPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::RemoveVolumeEntityPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::DimensionDataPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::EditorNetworkPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::RefreshEntitlementsPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::RespawnPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ShowCreditsPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerSkinPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerStartItemCooldownPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerToggleCrafterSlotRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetLastHurtByPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::BookAddPagePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::BookDeletePagePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::LecternUpdatePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::BookEditPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::BookSignPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::BookSwapPagesPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::NpcRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PhotoTransferPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::LabTablePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::NetworkSettingsPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::NetworkStackLatencyPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ServerStatsPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetLocalPlayerAsInitializedPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ScriptMessagePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::BiomeDefinitionListPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::EducationSettingsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::EduUriResourcePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::MultiplayerSettingsPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SettingsCommandPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::AnvilDamagePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::CreativeContentPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CodeBuilderPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerEnchantOptionsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::DebugInfoPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ChangeMobPropertyPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AnimateEntityPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CorrectPlayerMovePredictionPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerFogPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ItemRegistryPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::LessonProgressPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::FeatureRegistryPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SyncActorPropertyPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SimulationTypePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::NpcDialoguePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::CreatePhotoPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::UpdateSubChunkBlocksPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::CodeBuilderSourcePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AgentActionEventPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::DeathInfoPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::RequestAbilityPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::RequestPermissionsPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::UpdateAbilitiesPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::UpdateAdventureSettingsPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::RequestNetworkSettingsPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::GameTestRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::UpdateClientInputLocksPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::UnlockedRecipesPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::TrimDataPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::OpenSignPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AgentAnimationPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetPlayerInventoryOptionsPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetHudPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AwardAchievementPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ServerboundLoadingScreenPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ServerboundDiagnosticsPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::JigsawStructureDataPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CurrentStructureFeaturePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::UpdateClientOptionsPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerVideoCapturePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerUpdateEntityOverridesPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerLocationPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::DebugDrawerPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::LocatorBarPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ServerboundPackSettingChangePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ServerboundDataStorePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundDataStorePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::GraphicsOverrideParameterPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUICloseScreenPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIReloadPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIShowScreenPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ServerboundDataDrivenScreenClosedPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundTextureShiftPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SyncWorldClocksPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundAttributeLayerSyncPacket const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
