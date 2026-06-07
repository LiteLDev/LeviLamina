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
class PrimitiveShapesPacket;
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
class ServerPresenceInfoPacket;
class ServerSettingsRequestPacket;
class ServerSettingsResponsePacket;
class ServerStatsPacket;
class ServerStoreInfoPacket;
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
#ifdef LL_PLAT_S
    virtual void onPlayerReady(::Player&);
#else // LL_PLAT_C
    virtual void onPlayerReady(::Player& player);
#endif

    virtual ~NetEventCallback() /*override*/ = default;

    virtual void onConnect(::NetworkIdentifier const& id);

#ifdef LL_PLAT_S
    virtual void onUnableToConnect(::Connection::DisconnectFailReason, ::std::string const&, ::std::string const&);
#else // LL_PLAT_C
    virtual void onUnableToConnect(
        ::Connection::DisconnectFailReason discoReason,
        ::std::string const&               messageFromServer,
        ::std::string const&               messageBodyOverride
    );
#endif

    virtual void onTick();

    virtual void onOutgoingPacket(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

    virtual void onValidPacketReceived(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

#ifdef LL_PLAT_S
    virtual void onStoreOfferReceive(::ShowStoreOfferRedirectType const, ::std::string const& offerID);
#else // LL_PLAT_C
    virtual void onStoreOfferReceive(::ShowStoreOfferRedirectType const redirectType, ::std::string const& offerID);
#endif

    virtual void onDisconnect(
        ::NetworkIdentifier const&,
        ::Connection::DisconnectFailReason const,
        ::Connection::DisconnectionStage const,
        ::std::string const& messageFromServer,
        ::std::string const& messageBodyOverride,
        bool                 skipMessage,
        ::std::string const& telemetryOverride
    );

    virtual ::IncomingPacketFilterResult allowIncomingPacketId(
        ::NetworkIdentifierWithSubId const& sender,
        ::MinecraftPacketIds                packetId,
        uint64                              packetSize
    ) = 0;

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

    virtual void handle(::NetworkIdentifier const&, ::ClientToServerHandshakePacket const&);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ServerToClientHandshakePacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ServerToClientHandshakePacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::ResourcePacksInfoPacket const&);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ResourcePackStackPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ResourcePackStackPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PositionTrackingDBClientRequestPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PositionTrackingDBServerBroadcastPacket const&);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::PlayStatusPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::PlayStatusPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::SetTimePacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::TextPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::StartGamePacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::StartGamePacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::AddItemActorPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AddPaintingPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::TakeItemActorPacket const&);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::AddActorPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::AddActorPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::AddMobPacket const&);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::AddPlayerPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::AddPlayerPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::RemoveActorPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MoveActorAbsolutePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MoveActorDeltaPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MovePlayerPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::SetPlayerGameTypePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::UpdatePlayerGameTypePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::SetDefaultGameTypePacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateBlockPacket>);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockPacket> packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateBlockSyncedPacket>);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockSyncedPacket> packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::SpawnParticleEffectPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::LevelSoundEventPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::LevelEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LevelEventGenericPacket const&);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::BlockEventPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::BlockEventPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::BlockPickRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ActorPickRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::GuiDataPickItemPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::ActorEventPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::MobEffectPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MovementEffectPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::MobEquipmentPacket> packet);

    virtual void handle(::NetworkIdentifier const&, ::MobArmorEquipmentPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetActorDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetActorMotionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MotionPredictionHintsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetHealthPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetActorLinkPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::SetSpawnPositionPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::InteractPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::PlayerActionPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ActorFallPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::HurtArmorPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerArmorDamagePacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::ItemStackRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ItemStackResponsePacket const&);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ContainerOpenPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ContainerOpenPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::ContainerClosePacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ContainerRegistryCleanupPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ContainerSetDataPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::PlayerHotbarPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::InventoryContentPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::InventorySlotPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CraftingDataPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::AnimatePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::BlockActorDataPacket> packet);

    virtual void handle(::NetworkIdentifier const& source, ::PlayerAuthInputPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ClientMovementPredictionSyncPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::LevelChunkPacket>);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::LevelChunkPacket> packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::SubChunkPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::SubChunkPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::SubChunkRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ClientCacheBlobStatusPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::ClientCacheMissResponsePacket>);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::ClientCacheMissResponsePacket> packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::SetCommandsEnabledPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::SetDifficultyPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::SimpleEventPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ChangeDimensionPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateAttributesPacket>);

    virtual void handle(::NetworkIdentifier const&, ::PlayerListPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::LegacyTelemetryEventPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::SpawnExperienceOrbPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ClientCameraAimAssistPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDebugRendererPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundMapItemDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundCloseFormPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::ClientCacheStatusPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::RequestChunkRadiusPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::MapCreateLockedCopyPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::MapInfoRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ChunkRadiusUpdatedPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BossEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateTradePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::VoxelShapesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateEquipPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AvailableCommandsPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::CommandRequestPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::CommandOutputPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::CommandOutputPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::CommandBlockUpdatePacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::CompletedUsingItemPacket const&);

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

    virtual void handle(::NetworkIdentifier const&, ::GameRulesChangedPacket const&);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ResourcePackDataInfoPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ResourcePackDataInfoPacket const& packet);
#endif

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

    virtual void handle(::NetworkIdentifier const&, ::PurchaseReceiptPacket const&);

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

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::DimensionDataPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::DimensionDataPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::EditorNetworkPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::RefreshEntitlementsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::RespawnPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ShowCreditsPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::PlayerSkinPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::PlayerStartItemCooldownPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::PlayerToggleCrafterSlotRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::SetLastHurtByPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BookAddPagePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BookDeletePagePacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::LecternUpdatePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::BookEditPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::BookSignPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::BookSwapPagesPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::NpcRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::PhotoTransferPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::LabTablePacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::NetworkSettingsPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::NetworkSettingsPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::NetworkStackLatencyPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ServerStatsPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::SetLocalPlayerAsInitializedPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ScriptMessagePacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::BiomeDefinitionListPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::BiomeDefinitionListPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::EducationSettingsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::EduUriResourcePacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::MultiplayerSettingsPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::SettingsCommandPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::AnvilDamagePacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::CreativeContentPacket const&);

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

    virtual void handle(::NetworkIdentifier const&, ::CreatePhotoPacket const&);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::UpdateSubChunkBlocksPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::UpdateSubChunkBlocksPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::CodeBuilderSourcePacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::AgentActionEventPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::DeathInfoPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::RequestAbilityPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::RequestPermissionsPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::UpdateAbilitiesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateAdventureSettingsPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::RequestNetworkSettingsPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::GameTestRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UpdateClientInputLocksPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::UnlockedRecipesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::TrimDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::OpenSignPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AgentAnimationPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::SetPlayerInventoryOptionsPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::SetHudPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AwardAchievementPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::ServerboundLoadingScreenPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ServerboundDiagnosticsPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::JigsawStructureDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CurrentStructureFeaturePacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::UpdateClientOptionsPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::PlayerVideoCapturePacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerUpdateEntityOverridesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PlayerLocationPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::PrimitiveShapesPacket const&);

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

    virtual void handle(::NetworkIdentifier const&, ::ServerStoreInfoPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ServerPresenceInfoPacket const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onPlayerReady(::Player&);

    MCFOLD void $onConnect(::NetworkIdentifier const& id);

    MCFOLD void $onUnableToConnect(::Connection::DisconnectFailReason, ::std::string const&, ::std::string const&);

    MCFOLD void $onTick();

    MCFOLD void $onOutgoingPacket(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

    MCFOLD void $onValidPacketReceived(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

    MCFOLD void $onStoreOfferReceive(::ShowStoreOfferRedirectType const, ::std::string const& offerID);

    MCFOLD void $onDisconnect(
        ::NetworkIdentifier const&,
        ::Connection::DisconnectFailReason const,
        ::Connection::DisconnectionStage const,
        ::std::string const& messageFromServer,
        ::std::string const& messageBodyOverride,
        bool                 skipMessage,
        ::std::string const& telemetryOverride
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

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientToServerHandshakePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ServerToClientHandshakePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ResourcePacksInfoPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ResourcePackStackPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PositionTrackingDBClientRequestPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PositionTrackingDBServerBroadcastPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayStatusPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetTimePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::TextPacket const& packet);

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

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetPlayerGameTypePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::UpdatePlayerGameTypePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetDefaultGameTypePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateBlockPacket>);

    MCFOLD void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateBlockSyncedPacket>);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SpawnParticleEffectPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::LevelSoundEventPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::LevelEventPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::LevelEventGenericPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::BlockEventPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::BlockPickRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ActorPickRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::GuiDataPickItemPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ActorEventPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::MobEffectPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::MovementEffectPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::MobEquipmentPacket> packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::MobArmorEquipmentPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetActorDataPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetActorMotionPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::MotionPredictionHintsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetHealthPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetActorLinkPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetSpawnPositionPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::InteractPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerActionPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ActorFallPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::HurtArmorPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerArmorDamagePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ItemStackRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ItemStackResponsePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ContainerOpenPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ContainerClosePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ContainerRegistryCleanupPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ContainerSetDataPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerHotbarPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::InventoryContentPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::InventorySlotPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CraftingDataPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::AnimatePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::BlockActorDataPacket> packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerAuthInputPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ClientMovementPredictionSyncPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::LevelChunkPacket>);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SubChunkPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SubChunkRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ClientCacheBlobStatusPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::ClientCacheMissResponsePacket>);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetCommandsEnabledPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetDifficultyPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SimpleEventPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ChangeDimensionPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateAttributesPacket>);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerListPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::LegacyTelemetryEventPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SpawnExperienceOrbPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ClientCameraAimAssistPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundDebugRendererPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundMapItemDataPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundCloseFormPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ClientCacheStatusPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::RequestChunkRadiusPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::MapCreateLockedCopyPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::MapInfoRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ChunkRadiusUpdatedPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::BossEventPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdateTradePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::VoxelShapesPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdateEquipPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AvailableCommandsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::CommandRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CommandOutputPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::CommandBlockUpdatePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CompletedUsingItemPacket const&);

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

    MCFOLD void $handle(::NetworkIdentifier const&, ::GameRulesChangedPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ResourcePackDataInfoPacket const&);

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

    MCFOLD void $handle(::NetworkIdentifier const&, ::PurchaseReceiptPacket const&);

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

    MCFOLD void $handle(::NetworkIdentifier const&, ::DimensionDataPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::EditorNetworkPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::RefreshEntitlementsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::RespawnPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ShowCreditsPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerSkinPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerStartItemCooldownPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PlayerToggleCrafterSlotRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetLastHurtByPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::BookAddPagePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::BookDeletePagePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::LecternUpdatePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::BookEditPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::BookSignPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::BookSwapPagesPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::NpcRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PhotoTransferPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::LabTablePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::NetworkSettingsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::NetworkStackLatencyPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ServerStatsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetLocalPlayerAsInitializedPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ScriptMessagePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::BiomeDefinitionListPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::EducationSettingsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::EduUriResourcePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::MultiplayerSettingsPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SettingsCommandPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::AnvilDamagePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CreativeContentPacket const&);

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

    MCFOLD void $handle(::NetworkIdentifier const&, ::CreatePhotoPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdateSubChunkBlocksPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::CodeBuilderSourcePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AgentActionEventPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::DeathInfoPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::RequestAbilityPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::RequestPermissionsPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdateAbilitiesPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdateAdventureSettingsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::RequestNetworkSettingsPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::GameTestRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::UpdateClientInputLocksPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::UnlockedRecipesPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::TrimDataPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::OpenSignPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AgentAnimationPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::SetPlayerInventoryOptionsPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::SetHudPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AwardAchievementPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ServerboundLoadingScreenPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ServerboundDiagnosticsPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::JigsawStructureDataPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CurrentStructureFeaturePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::UpdateClientOptionsPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerVideoCapturePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerUpdateEntityOverridesPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PlayerLocationPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::PrimitiveShapesPacket const&);

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

    MCFOLD void $handle(::NetworkIdentifier const&, ::ServerStoreInfoPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ServerPresenceInfoPacket const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
