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
class ClientboundMatchmakingStatePacket;
class ClientboundPlayAudioContentPacket;
class ClientboundStonecutterSetRecipePacket;
class ClientboundTextureShiftPacket;
class ClientboundUpdateSoundDataPacket;
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
class PartyDestinationCookieResponsePacket;
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
class RecordStartedPacket;
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
class SendPartyDestinationCookiePacket;
class ServerPlayerPostMovePositionPacket;
class ServerPresenceInfoPacket;
class ServerSettingsRequestPacket;
class ServerSettingsResponsePacket;
class ServerStatsPacket;
class ServerStoreInfoPacket;
class ServerToClientHandshakePacket;
class ServerboundCursorItemDragPacket;
class ServerboundDataDrivenScreenClosedPacket;
class ServerboundDataStorePacket;
class ServerboundDiagnosticsPacket;
class ServerboundLoadingScreenPacket;
class ServerboundMatchmakingCancelPacket;
class ServerboundPackSettingChangePacket;
class ServerboundRegisterAudioContentPacket;
class ServerboundStonecutterSetRecipePacket;
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
class SetPassengerOfBlockPacket;
class SetPlayerFurnaceOptionsPacket;
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
        ::NetworkIdentifier const&               id,
        ::Connection::DisconnectFailReason const discoReason,
        ::Connection::DisconnectionStage const   disconnectStage,
        ::std::string const&                     messageFromServer,
        ::std::string const&                     messageBodyOverride,
        bool                                     skipMessage,
        ::std::string const&                     telemetryOverride
    );

#ifdef LL_PLAT_S
    virtual ::IncomingPacketFilterResult allowIncomingPacketId(
        ::NetworkIdentifierWithSubId const& sender,
        ::MinecraftPacketIds                packetId,
        uint64                              packetSize
    ) = 0;
#else // LL_PLAT_C
    virtual ::IncomingPacketFilterResult
    allowIncomingPacketId(::NetworkIdentifierWithSubId const& id, ::MinecraftPacketIds packetId, uint64 packetSize) = 0;
#endif

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

    virtual void handle(::NetworkIdentifier const& source, ::PartyDestinationCookieResponsePacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::SendPartyDestinationCookiePacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::SubClientLoginPacket> packet);

    virtual void handle(::NetworkIdentifier const& source, ::ClientToServerHandshakePacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ServerToClientHandshakePacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ServerToClientHandshakePacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ResourcePacksInfoPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ResourcePacksInfoPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ResourcePackStackPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ResourcePackStackPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::PositionTrackingDBClientRequestPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::PositionTrackingDBServerBroadcastPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::PositionTrackingDBServerBroadcastPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::PlayStatusPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::PlayStatusPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::SetTimePacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::SetTimePacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::TextPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::StartGamePacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::StartGamePacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::AddItemActorPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::AddItemActorPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::AddPaintingPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::AddPaintingPacket const& packet);
#endif

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

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::RemoveActorPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::RemoveActorPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::MoveActorAbsolutePacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::MoveActorAbsolutePacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::MoveActorDeltaPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::MoveActorDeltaPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::MovePlayerPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::MovePlayerPacket const& packet);
#endif

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

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::SpawnParticleEffectPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::SpawnParticleEffectPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::LevelSoundEventPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::LevelEventPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::LevelEventPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::LevelEventGenericPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::LevelEventGenericPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::BlockEventPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::BlockEventPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::BlockPickRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ActorPickRequestPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::GuiDataPickItemPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::GuiDataPickItemPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::ActorEventPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::MobEffectPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::MovementEffectPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::std::shared_ptr<::MobEquipmentPacket> packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::MobArmorEquipmentPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::MobArmorEquipmentPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::SetActorDataPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::SetActorDataPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::SetActorMotionPacket const&);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::MotionPredictionHintsPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::MotionPredictionHintsPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::SetHealthPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::SetHealthPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::SetActorLinkPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::SetActorLinkPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::SetSpawnPositionPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::SetSpawnPositionPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::InteractPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::PlayerActionPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ActorFallPacket const&);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::HurtArmorPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::HurtArmorPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::PlayerArmorDamagePacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::PlayerArmorDamagePacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::ItemStackRequestPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ItemStackResponsePacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ItemStackResponsePacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ContainerOpenPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ContainerOpenPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::ContainerClosePacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ContainerRegistryCleanupPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ContainerRegistryCleanupPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ContainerSetDataPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ContainerSetDataPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::PlayerHotbarPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::InventoryContentPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::InventoryContentPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::InventorySlotPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::InventorySlotPacket const& packet);
#endif

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

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::SetCommandsEnabledPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::SetCommandsEnabledPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::SetDifficultyPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::SimpleEventPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ChangeDimensionPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ChangeDimensionPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateAttributesPacket>);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::PlayerListPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::PlayerListPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::LegacyTelemetryEventPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::SpawnExperienceOrbPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ClientCameraAimAssistPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ClientboundDebugRendererPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ClientboundDebugRendererPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ClientboundMapItemDataPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ClientboundMapItemDataPacket const& packet);
#endif

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

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::AvailableCommandsPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::AvailableCommandsPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::CommandRequestPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::CommandOutputPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::CommandOutputPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::CommandBlockUpdatePacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::CompletedUsingItemPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ServerboundCursorItemDragPacket const& packet);

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

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::GameRulesChangedPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::GameRulesChangedPacket const& packet);
#endif

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

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::SetScorePacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::SetScorePacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::SetScoreboardIdentityPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::SetScoreboardIdentityPacket const& packet);
#endif

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

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::RefreshEntitlementsPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::RefreshEntitlementsPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::RespawnPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ShowCreditsPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::PlayerSkinPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::PlayerStartItemCooldownPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::PlayerStartItemCooldownPacket const& packet);
#endif

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

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::NetworkSettingsPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::NetworkSettingsPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::NetworkStackLatencyPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::ServerStatsPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::ServerStatsPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::SetLocalPlayerAsInitializedPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::SetPassengerOfBlockPacket const&);

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

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::CreativeContentPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::CreativeContentPacket const& packet);
#endif

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

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::UpdateAbilitiesPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::UpdateAbilitiesPacket const& packet);
#endif

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::UpdateAdventureSettingsPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::UpdateAdventureSettingsPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const& source, ::RequestNetworkSettingsPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::GameTestRequestPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::UpdateClientInputLocksPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::UpdateClientInputLocksPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::UnlockedRecipesPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::TrimDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::OpenSignPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::AgentAnimationPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::SetPlayerInventoryOptionsPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::SetPlayerFurnaceOptionsPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::SetHudPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::SetHudPacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::AwardAchievementPacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::ServerboundLoadingScreenPacket const& packet);

    virtual void handle(::NetworkIdentifier const& source, ::ServerboundDiagnosticsPacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::JigsawStructureDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::CurrentStructureFeaturePacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::UpdateClientOptionsPacket const& packet);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::PlayerVideoCapturePacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::PlayerVideoCapturePacket const& packet);
#endif

    virtual void handle(::NetworkIdentifier const&, ::PlayerUpdateEntityOverridesPacket const&);

#ifdef LL_PLAT_S
    virtual void handle(::NetworkIdentifier const&, ::PlayerLocationPacket const&);
#else // LL_PLAT_C
    virtual void handle(::NetworkIdentifier const& source, ::PlayerLocationPacket const& packet);
#endif

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

    virtual void handle(::NetworkIdentifier const&, ::ClientboundUpdateSoundDataPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundPlayAudioContentPacket const&);

    virtual void
    handle(::NetworkIdentifier const& source, ::std::shared_ptr<::ServerboundRegisterAudioContentPacket> packet);

    virtual void handle(::NetworkIdentifier const&, ::RecordStartedPacket const&);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundMatchmakingStatePacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::ServerboundStonecutterSetRecipePacket const& packet);

    virtual void handle(::NetworkIdentifier const&, ::ClientboundStonecutterSetRecipePacket const&);

    virtual void handle(::NetworkIdentifier const& source, ::ServerboundMatchmakingCancelPacket const& packet);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onPlayerReady(::Player& player);

    MCNAPI void $onConnect(::NetworkIdentifier const& id);

#ifdef LL_PLAT_S
    MCNAPI void $onUnableToConnect(::Connection::DisconnectFailReason, ::std::string const&, ::std::string const&);
#else // LL_PLAT_C
    MCNAPI void $onUnableToConnect(
        ::Connection::DisconnectFailReason discoReason,
        ::std::string const&               messageFromServer,
        ::std::string const&               messageBodyOverride
    );
#endif

    MCNAPI void $onTick();

    MCNAPI void $onOutgoingPacket(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

    MCNAPI void $onValidPacketReceived(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

#ifdef LL_PLAT_S
    MCNAPI void $onStoreOfferReceive(::ShowStoreOfferRedirectType const, ::std::string const& offerID);
#else // LL_PLAT_C
    MCNAPI void $onStoreOfferReceive(::ShowStoreOfferRedirectType const redirectType, ::std::string const& offerID);
#endif

    MCNAPI void $onDisconnect(
        ::NetworkIdentifier const&               id,
        ::Connection::DisconnectFailReason const discoReason,
        ::Connection::DisconnectionStage const   disconnectStage,
        ::std::string const&                     messageFromServer,
        ::std::string const&                     messageBodyOverride,
        bool                                     skipMessage,
        ::std::string const&                     telemetryOverride
    );

    MCNAPI void $onWebsocketRequest(
        ::std::string const&    serverAddress,
        ::std::string const&    payload,
        ::std::function<void()> errorCallback
    );

    MCNAPI void $handlePacketViolation(
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

    MCNAPI void $sendPacketViolationWarningPacket(
        ::std::error_code const&   errorCode,
        ::PacketViolationResponse  violationResponse,
        ::MinecraftPacketIds       violatingPacketId,
        ::std::string const&       context,
        ::NetworkIdentifier const& netId,
        ::SubClientId              clientSubId
    );

    MCNAPI void $onTransferRequest(::NetworkIdentifier const& id, ::Social::GameConnectionInfo const& destination);

    MCNAPI bool $getIsConnectedToApplicationLayer() const;

    MCNAPI ::GameSpecificNetEventCallback* $getGameSpecificNetEventCallback();

    MCNAPI void $handle(::NetworkIdentifier const&, ::PacketViolationWarningPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::DisconnectPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::EmoteListPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::EmotePacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::LoginPacket> packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::PartyChangedPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::PartyDestinationCookieResponsePacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SendPartyDestinationCookiePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::SubClientLoginPacket> packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::ClientToServerHandshakePacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerToClientHandshakePacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::ServerToClientHandshakePacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePacksInfoPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::ResourcePacksInfoPacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePackStackPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::ResourcePackStackPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::PositionTrackingDBClientRequestPacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::PositionTrackingDBServerBroadcastPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::PositionTrackingDBServerBroadcastPacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayStatusPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::PlayStatusPacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetTimePacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::SetTimePacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const& source, ::TextPacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::StartGamePacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::StartGamePacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::AddItemActorPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::AddItemActorPacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::AddPaintingPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::AddPaintingPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const&, ::TakeItemActorPacket const&);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::AddActorPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::AddActorPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const&, ::AddMobPacket const&);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::AddPlayerPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::AddPlayerPacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::RemoveActorPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::RemoveActorPacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::MoveActorAbsolutePacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::MoveActorAbsolutePacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::MoveActorDeltaPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::MoveActorDeltaPacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::MovePlayerPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::MovePlayerPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const& source, ::SetPlayerGameTypePacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::UpdatePlayerGameTypePacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::SetDefaultGameTypePacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateBlockPacket>);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockPacket> packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateBlockSyncedPacket>);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::UpdateBlockSyncedPacket> packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::SpawnParticleEffectPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::SpawnParticleEffectPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const& source, ::LevelSoundEventPacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::LevelEventPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::LevelEventPacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::LevelEventGenericPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::LevelEventGenericPacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::BlockEventPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::BlockEventPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const& source, ::BlockPickRequestPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::ActorPickRequestPacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::GuiDataPickItemPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::GuiDataPickItemPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const& source, ::ActorEventPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const&, ::MobEffectPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::MovementEffectPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::MobEquipmentPacket> packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::MobArmorEquipmentPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::MobArmorEquipmentPacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetActorDataPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::SetActorDataPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetActorMotionPacket const&);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::MotionPredictionHintsPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::MotionPredictionHintsPacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetHealthPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::SetHealthPacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetActorLinkPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::SetActorLinkPacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetSpawnPositionPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::SetSpawnPositionPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const& source, ::InteractPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::PlayerActionPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ActorFallPacket const&);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::HurtArmorPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::HurtArmorPacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerArmorDamagePacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::PlayerArmorDamagePacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const& source, ::ItemStackRequestPacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::ItemStackResponsePacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::ItemStackResponsePacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::ContainerOpenPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::ContainerOpenPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const& source, ::ContainerClosePacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::ContainerRegistryCleanupPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::ContainerRegistryCleanupPacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::ContainerSetDataPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::ContainerSetDataPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const& source, ::PlayerHotbarPacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::InventoryContentPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::InventoryContentPacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::InventorySlotPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::InventorySlotPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const&, ::CraftingDataPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::AnimatePacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::BlockActorDataPacket> packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::PlayerAuthInputPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::ClientMovementPredictionSyncPacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::LevelChunkPacket>);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::LevelChunkPacket> packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::SubChunkPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::SubChunkPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const& source, ::SubChunkRequestPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::ClientCacheBlobStatusPacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::ClientCacheMissResponsePacket>);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::ClientCacheMissResponsePacket> packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetCommandsEnabledPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::SetCommandsEnabledPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const& source, ::SetDifficultyPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::SimpleEventPacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::ChangeDimensionPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::ChangeDimensionPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateAttributesPacket>);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerListPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::PlayerListPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const&, ::LegacyTelemetryEventPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::SpawnExperienceOrbPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::ClientCameraAimAssistPacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundDebugRendererPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::ClientboundDebugRendererPacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundMapItemDataPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::ClientboundMapItemDataPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundCloseFormPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::ClientCacheStatusPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::RequestChunkRadiusPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::MapCreateLockedCopyPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::MapInfoRequestPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ChunkRadiusUpdatedPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::BossEventPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateTradePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::VoxelShapesPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateEquipPacket const&);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::AvailableCommandsPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::AvailableCommandsPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const& source, ::CommandRequestPacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::CommandOutputPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::CommandOutputPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const& source, ::CommandBlockUpdatePacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::CompletedUsingItemPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::ServerboundCursorItemDragPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraAimAssistActorPriorityPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraAimAssistPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraAimAssistPresetsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraInstructionPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraPresetsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundControlSchemeSetPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraShakePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CameraSplinePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::InventoryActionPacket const&);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::GameRulesChangedPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::GameRulesChangedPacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePackDataInfoPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::ResourcePackDataInfoPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePackChunkDataPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::ResourcePackChunkRequestPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePacksReadyForValidationPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::NetworkChunkPublisherUpdatePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::StructureBlockUpdatePacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::StructureTemplateDataRequestPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const&, ::StructureTemplateDataResponsePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::TransferPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlaySoundPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::StopSoundPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetTitlePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::InventoryTransactionPacket> packet);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AddBehaviorTreePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ShowStoreOfferPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::PurchaseReceiptPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const&, ::RemoveObjectivePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetDisplayObjectivePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AutomationClientConnectPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ModalFormRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::ModalFormResponsePacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ToastRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::OnScreenTextureAnimationPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerSettingsRequestPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerSettingsResponsePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ShowProfilePacket const&);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetScorePacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::SetScorePacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetScoreboardIdentityPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::SetScoreboardIdentityPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const&, ::TickingAreasLoadStatusPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateSoftEnumPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AvailableActorIdentifiersPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AddVolumeEntityPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::RemoveVolumeEntityPacket const&);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::DimensionDataPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::DimensionDataPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const& source, ::EditorNetworkPacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::RefreshEntitlementsPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::RefreshEntitlementsPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::RespawnPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::ShowCreditsPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::PlayerSkinPacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerStartItemCooldownPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::PlayerStartItemCooldownPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const& source, ::PlayerToggleCrafterSlotRequestPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetLastHurtByPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::BookAddPagePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::BookDeletePagePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::LecternUpdatePacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::BookEditPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const&, ::BookSignPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::BookSwapPagesPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::NpcRequestPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::PhotoTransferPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::LabTablePacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::NetworkSettingsPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::NetworkSettingsPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const& source, ::NetworkStackLatencyPacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerStatsPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::ServerStatsPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const& source, ::SetLocalPlayerAsInitializedPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SetPassengerOfBlockPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::ScriptMessagePacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::BiomeDefinitionListPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::BiomeDefinitionListPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const&, ::EducationSettingsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::EduUriResourcePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::MultiplayerSettingsPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::SettingsCommandPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::AnvilDamagePacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::CreativeContentPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::CreativeContentPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const&, ::CodeBuilderPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerEnchantOptionsPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::DebugInfoPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ChangeMobPropertyPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AnimateEntityPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CorrectPlayerMovePredictionPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerFogPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ItemRegistryPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::LessonProgressPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::FeatureRegistryPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SyncActorPropertyPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SimulationTypePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::NpcDialoguePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::CreatePhotoPacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateSubChunkBlocksPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::UpdateSubChunkBlocksPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const& source, ::CodeBuilderSourcePacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AgentActionEventPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::DeathInfoPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::RequestAbilityPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::RequestPermissionsPacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateAbilitiesPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::UpdateAbilitiesPacket const& packet);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateAdventureSettingsPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::UpdateAdventureSettingsPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const& source, ::RequestNetworkSettingsPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::GameTestRequestPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::UpdateClientInputLocksPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::UpdateClientInputLocksPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const&, ::UnlockedRecipesPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::TrimDataPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::OpenSignPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::AgentAnimationPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::SetPlayerInventoryOptionsPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::SetPlayerFurnaceOptionsPacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::SetHudPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::SetHudPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const&, ::AwardAchievementPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::ServerboundLoadingScreenPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::ServerboundDiagnosticsPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const&, ::JigsawStructureDataPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::CurrentStructureFeaturePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::UpdateClientOptionsPacket const& packet);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerVideoCapturePacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::PlayerVideoCapturePacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerUpdateEntityOverridesPacket const&);

#ifdef LL_PLAT_S
    MCNAPI void $handle(::NetworkIdentifier const&, ::PlayerLocationPacket const&);
#else // LL_PLAT_C
    MCNAPI void $handle(::NetworkIdentifier const& source, ::PlayerLocationPacket const& packet);
#endif

    MCNAPI void $handle(::NetworkIdentifier const&, ::PrimitiveShapesPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::LocatorBarPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::ServerboundPackSettingChangePacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::ServerboundDataStorePacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundDataStorePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::GraphicsOverrideParameterPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUICloseScreenPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIReloadPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIShowScreenPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::ServerboundDataDrivenScreenClosedPacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundTextureShiftPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::SyncWorldClocksPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundAttributeLayerSyncPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerStoreInfoPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ServerPresenceInfoPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundUpdateSoundDataPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundPlayAudioContentPacket const&);

    MCNAPI void
    $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::ServerboundRegisterAudioContentPacket> packet);

    MCNAPI void $handle(::NetworkIdentifier const&, ::RecordStartedPacket const&);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundMatchmakingStatePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::ServerboundStonecutterSetRecipePacket const& packet);

    MCNAPI void $handle(::NetworkIdentifier const&, ::ClientboundStonecutterSetRecipePacket const&);

    MCNAPI void $handle(::NetworkIdentifier const& source, ::ServerboundMatchmakingCancelPacket const& packet);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
