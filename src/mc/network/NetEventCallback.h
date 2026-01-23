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
class CameraAimAssistPacket;
class CameraAimAssistPresetsPacket;
class CameraInstructionPacket;
class CameraPacket;
class CameraPresetsPacket;
class CameraShakePacket;
class ChangeDimensionPacket;
class ChangeMobPropertyPacket;
class ChunkRadiusUpdatedPacket;
class ClientCacheBlobStatusPacket;
class ClientCacheMissResponsePacket;
class ClientCacheStatusPacket;
class ClientCameraAimAssistPacket;
class ClientMovementPredictionSyncPacket;
class ClientToServerHandshakePacket;
class ClientboundCloseFormPacket;
class ClientboundControlSchemeSetPacket;
class ClientboundDataStorePacket;
class ClientboundDebugRendererPacket;
class ClientboundMapItemDataPacket;
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
class RespawnPacket;
class ScriptMessagePacket;
class ServerPlayerPostMovePositionPacket;
class ServerSettingsRequestPacket;
class ServerSettingsResponsePacket;
class ServerStatsPacket;
class ServerToClientHandshakePacket;
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
struct NetworkIdentifierWithSubId;
namespace Social { class GameConnectionInfo; }
// clang-format on

class NetEventCallback : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onPlayerReady(::Player&);

    virtual ~NetEventCallback() /*override*/;

    virtual void onConnect(::NetworkIdentifier const&);

    virtual void onUnableToConnect(::Connection::DisconnectFailReason, ::std::string const&);

    virtual void onTick();

    virtual void onOutgoingPacket(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

    virtual void onValidPacketReceived(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

    virtual void onStoreOfferReceive(::ShowStoreOfferRedirectType const, ::std::string const& offerID);

    virtual void onDisconnect(
        ::NetworkIdentifier const&,
        ::Connection::DisconnectFailReason const,
        ::Connection::DisconnectionStage const,
        ::std::string const& message,
        bool                 skipMessage,
        ::std::string const& telemetryOverride
    );

    virtual ::IncomingPacketFilterResult
    allowIncomingPacketId(::NetworkIdentifierWithSubId const&, ::MinecraftPacketIds, uint64) = 0;

    virtual ::OutgoingPacketFilterResult
    allowOutgoingPacket(::std::vector<::NetworkIdentifierWithSubId> const&, ::Packet const&) = 0;

    virtual void onWebsocketRequest(::std::string const&, ::std::string const&, ::std::function<void()>);

    virtual void handlePacketViolation(
        ::std::shared_ptr<::IPacketSecurityController> const&,
        ::std::error_code const&,
        ::PacketViolationResponse const,
        ::MinecraftPacketIds const,
        ::std::string&&,
        ::NetworkIdentifier const&,
        ::SubClientId const,
        ::SubClientId const,
        uint const
    );

    virtual void sendPacketViolationWarningPacket(
        ::std::error_code const&,
        ::PacketViolationResponse,
        ::MinecraftPacketIds,
        ::std::string const&,
        ::NetworkIdentifier const&,
        ::SubClientId
    );

    virtual void onTransferRequest(::NetworkIdentifier const&, ::Social::GameConnectionInfo const&);

    virtual bool getIsConnectedToApplicationLayer() const;

    virtual ::GameSpecificNetEventCallback* getGameSpecificNetEventCallback();

    virtual void handle(::NetworkIdentifier const&, ::PacketViolationWarningPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::DisconnectPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::EmoteListPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::EmotePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::LoginPacket>);

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::SubClientLoginPacket>);

    virtual void handle(::NetworkIdentifier const&, ::ClientToServerHandshakePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerToClientHandshakePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ResourcePacksInfoPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackStackPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PositionTrackingDBClientRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PositionTrackingDBServerBroadcastPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayStatusPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetTimePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::TextPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::StartGamePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AddItemActorPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AddPaintingPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::TakeItemActorPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AddActorPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AddMobPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AddPlayerPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RemoveActorPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MoveActorAbsolutePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MoveActorDeltaPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MovePlayerPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetPlayerGameTypePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdatePlayerGameTypePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetDefaultGameTypePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateBlockPacket>);

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateBlockSyncedPacket>);

    virtual void handle(::NetworkIdentifier const&, ::SpawnParticleEffectPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LevelSoundEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LevelEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LevelEventGenericPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BlockEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BlockPickRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ActorPickRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::GuiDataPickItemPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ActorEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MobEffectPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MovementEffectPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::MobEquipmentPacket>);

    virtual void handle(::NetworkIdentifier const&, ::MobArmorEquipmentPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetActorDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetActorMotionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MotionPredictionHintsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetHealthPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetActorLinkPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetSpawnPositionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::InteractPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerActionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ActorFallPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::HurtArmorPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerArmorDamagePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ItemStackRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ItemStackResponsePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ContainerOpenPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ContainerClosePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ContainerRegistryCleanupPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ContainerSetDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerHotbarPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::InventoryContentPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::InventorySlotPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CraftingDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AnimatePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::BlockActorDataPacket>);

    virtual void handle(::NetworkIdentifier const&, ::PlayerAuthInputPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientMovementPredictionSyncPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::LevelChunkPacket>);

    virtual void handle(::NetworkIdentifier const&, ::SubChunkPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SubChunkRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientCacheBlobStatusPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::ClientCacheMissResponsePacket>);

    virtual void handle(::NetworkIdentifier const&, ::SetCommandsEnabledPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetDifficultyPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SimpleEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ChangeDimensionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateAttributesPacket>);

    virtual void handle(::NetworkIdentifier const&, ::PlayerListPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LegacyTelemetryEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SpawnExperienceOrbPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientCameraAimAssistPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDebugRendererPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundMapItemDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundCloseFormPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientCacheStatusPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RequestChunkRadiusPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MapCreateLockedCopyPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MapInfoRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ChunkRadiusUpdatedPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BossEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateTradePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateEquipPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AvailableCommandsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CommandRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CommandOutputPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CommandBlockUpdatePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CompletedUsingItemPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraAimAssistPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraAimAssistPresetsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraInstructionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraPresetsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundControlSchemeSetPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CameraShakePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::InventoryActionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::GameRulesChangedPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackDataInfoPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackChunkDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackChunkRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::NetworkChunkPublisherUpdatePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::StructureBlockUpdatePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::StructureTemplateDataRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::StructureTemplateDataResponsePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::TransferPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlaySoundPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::StopSoundPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetTitlePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::InventoryTransactionPacket>);

    virtual void handle(::NetworkIdentifier const&, ::AddBehaviorTreePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ShowStoreOfferPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PurchaseReceiptPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RemoveObjectivePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetDisplayObjectivePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AutomationClientConnectPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ModalFormRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ModalFormResponsePacket const&);

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

    virtual void handle(::NetworkIdentifier const&, ::DimensionDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::EditorNetworkPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RefreshEntitlementsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RespawnPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ShowCreditsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerSkinPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerStartItemCooldownPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerToggleCrafterSlotRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetLastHurtByPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BookAddPagePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BookDeletePagePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LecternUpdatePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BookEditPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BookSignPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BookSwapPagesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::NpcRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PhotoTransferPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LabTablePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::NetworkSettingsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::NetworkStackLatencyPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerStatsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetLocalPlayerAsInitializedPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ScriptMessagePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BiomeDefinitionListPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::EducationSettingsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::EduUriResourcePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MultiplayerSettingsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SettingsCommandPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AnvilDamagePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CreativeContentPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CodeBuilderPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerEnchantOptionsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::DebugInfoPacket const&);

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

    virtual void handle(::NetworkIdentifier const&, ::CreatePhotoPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateSubChunkBlocksPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CodeBuilderSourcePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AgentActionEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::DeathInfoPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RequestAbilityPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RequestPermissionsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateAbilitiesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateAdventureSettingsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::RequestNetworkSettingsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::GameTestRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateClientInputLocksPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UnlockedRecipesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::TrimDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::OpenSignPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AgentAnimationPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetPlayerInventoryOptionsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetHudPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AwardAchievementPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerboundLoadingScreenPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerboundDiagnosticsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::JigsawStructureDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CurrentStructureFeaturePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateClientOptionsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerVideoCapturePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerUpdateEntityOverridesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerLocationPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::DebugDrawerPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerboundPackSettingChangePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerboundDataStorePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataStorePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::GraphicsOverrideParameterPacket const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onPlayerReady(::Player&);

    MCFOLD void $onConnect(::NetworkIdentifier const&);

    MCFOLD void $onUnableToConnect(::Connection::DisconnectFailReason, ::std::string const&);

    MCFOLD void $onTick();

    MCFOLD void $onOutgoingPacket(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

    MCFOLD void $onValidPacketReceived(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

    MCFOLD void $onStoreOfferReceive(::ShowStoreOfferRedirectType const, ::std::string const& offerID);

    MCFOLD void $onDisconnect(
        ::NetworkIdentifier const&,
        ::Connection::DisconnectFailReason const,
        ::Connection::DisconnectionStage const,
        ::std::string const& message,
        bool                 skipMessage,
        ::std::string const& telemetryOverride
    );

    MCFOLD void $onWebsocketRequest(::std::string const&, ::std::string const&, ::std::function<void()>);

    MCFOLD void $handlePacketViolation(
        ::std::shared_ptr<::IPacketSecurityController> const&,
        ::std::error_code const&,
        ::PacketViolationResponse const,
        ::MinecraftPacketIds const,
        ::std::string&&,
        ::NetworkIdentifier const&,
        ::SubClientId const,
        ::SubClientId const,
        uint const
    );

    MCFOLD void $sendPacketViolationWarningPacket(
        ::std::error_code const&,
        ::PacketViolationResponse,
        ::MinecraftPacketIds,
        ::std::string const&,
        ::NetworkIdentifier const&,
        ::SubClientId
    );

    MCFOLD void $onTransferRequest(::NetworkIdentifier const&, ::Social::GameConnectionInfo const&);

    MCFOLD bool $getIsConnectedToApplicationLayer() const;

    MCFOLD ::GameSpecificNetEventCallback* $getGameSpecificNetEventCallback();

    MCFOLD void $handle(::NetworkIdentifier const&, ::PacketViolationWarningPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::DisconnectPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::EmoteListPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::EmotePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::LoginPacket>);

    MCFOLD void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::SubClientLoginPacket>);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientToServerHandshakePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ServerToClientHandshakePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ResourcePacksInfoPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ResourcePackStackPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PositionTrackingDBClientRequestPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PositionTrackingDBServerBroadcastPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayStatusPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetTimePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::TextPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::StartGamePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AddItemActorPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AddPaintingPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::TakeItemActorPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AddActorPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AddMobPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AddPlayerPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::RemoveActorPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::MoveActorAbsolutePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::MoveActorDeltaPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::MovePlayerPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetPlayerGameTypePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdatePlayerGameTypePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetDefaultGameTypePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateBlockPacket>);

    MCFOLD void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateBlockSyncedPacket>);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SpawnParticleEffectPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::LevelSoundEventPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::LevelEventPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::LevelEventGenericPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::BlockEventPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::BlockPickRequestPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ActorPickRequestPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::GuiDataPickItemPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ActorEventPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::MobEffectPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::MovementEffectPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::MobEquipmentPacket>);

    MCFOLD void $handle(::NetworkIdentifier const&, ::MobArmorEquipmentPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetActorDataPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetActorMotionPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::MotionPredictionHintsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetHealthPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetActorLinkPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetSpawnPositionPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::InteractPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerActionPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ActorFallPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::HurtArmorPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerArmorDamagePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ItemStackRequestPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ItemStackResponsePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ContainerOpenPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ContainerClosePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ContainerRegistryCleanupPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ContainerSetDataPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerHotbarPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::InventoryContentPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::InventorySlotPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CraftingDataPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AnimatePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::BlockActorDataPacket>);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerAuthInputPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientMovementPredictionSyncPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::LevelChunkPacket>);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SubChunkPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SubChunkRequestPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientCacheBlobStatusPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::ClientCacheMissResponsePacket>);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetCommandsEnabledPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetDifficultyPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SimpleEventPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ChangeDimensionPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateAttributesPacket>);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerListPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::LegacyTelemetryEventPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SpawnExperienceOrbPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientCameraAimAssistPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundDebugRendererPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundMapItemDataPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundCloseFormPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientCacheStatusPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::RequestChunkRadiusPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::MapCreateLockedCopyPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::MapInfoRequestPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ChunkRadiusUpdatedPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::BossEventPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdateTradePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdateEquipPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AvailableCommandsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CommandRequestPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CommandOutputPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CommandBlockUpdatePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CompletedUsingItemPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CameraAimAssistPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CameraAimAssistPresetsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CameraInstructionPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CameraPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CameraPresetsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundControlSchemeSetPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CameraShakePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::InventoryActionPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::GameRulesChangedPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ResourcePackDataInfoPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ResourcePackChunkDataPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ResourcePackChunkRequestPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::NetworkChunkPublisherUpdatePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::StructureBlockUpdatePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::StructureTemplateDataRequestPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::StructureTemplateDataResponsePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::TransferPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlaySoundPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::StopSoundPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetTitlePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::InventoryTransactionPacket>);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AddBehaviorTreePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ShowStoreOfferPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PurchaseReceiptPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::RemoveObjectivePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetDisplayObjectivePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AutomationClientConnectPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ModalFormRequestPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ModalFormResponsePacket const&);

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

    MCFOLD void $handle(::NetworkIdentifier const&, ::DimensionDataPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::EditorNetworkPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::RefreshEntitlementsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::RespawnPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ShowCreditsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerSkinPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerStartItemCooldownPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerToggleCrafterSlotRequestPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetLastHurtByPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::BookAddPagePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::BookDeletePagePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::LecternUpdatePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::BookEditPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::BookSignPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::BookSwapPagesPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::NpcRequestPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PhotoTransferPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::LabTablePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::NetworkSettingsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::NetworkStackLatencyPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ServerStatsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetLocalPlayerAsInitializedPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ScriptMessagePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::BiomeDefinitionListPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::EducationSettingsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::EduUriResourcePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::MultiplayerSettingsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SettingsCommandPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AnvilDamagePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CreativeContentPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CodeBuilderPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerEnchantOptionsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::DebugInfoPacket const&);

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

    MCFOLD void $handle(::NetworkIdentifier const&, ::CreatePhotoPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdateSubChunkBlocksPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CodeBuilderSourcePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AgentActionEventPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::DeathInfoPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::RequestAbilityPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::RequestPermissionsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdateAbilitiesPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdateAdventureSettingsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::RequestNetworkSettingsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::GameTestRequestPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdateClientInputLocksPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::UnlockedRecipesPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::TrimDataPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::OpenSignPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AgentAnimationPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetPlayerInventoryOptionsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetHudPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AwardAchievementPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ServerboundLoadingScreenPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ServerboundDiagnosticsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::JigsawStructureDataPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CurrentStructureFeaturePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdateClientOptionsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerVideoCapturePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerUpdateEntityOverridesPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerLocationPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::DebugDrawerPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ServerboundPackSettingChangePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ServerboundDataStorePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundDataStorePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::GraphicsOverrideParameterPacket const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
