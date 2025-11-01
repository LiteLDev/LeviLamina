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
class DataStoreSyncPacket;
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
    // vIndex: 1
    virtual void onPlayerReady(::Player&);

    // vIndex: 0
    virtual ~NetEventCallback() /*override*/;

    // vIndex: 2
    virtual void onConnect(::NetworkIdentifier const&);

    // vIndex: 3
    virtual void onUnableToConnect(::Connection::DisconnectFailReason, ::std::string const&);

    // vIndex: 4
    virtual void onTick();

    // vIndex: 5
    virtual void onValidPacketReceived(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId);

    // vIndex: 6
    virtual void onStoreOfferReceive(::ShowStoreOfferRedirectType const, ::std::string const& offerID);

    // vIndex: 7
    virtual void onDisconnect(
        ::NetworkIdentifier const&,
        ::Connection::DisconnectFailReason const,
        ::Connection::DisconnectionStage const,
        ::std::string const& message,
        bool                 skipMessage,
        ::std::string const& telemetryOverride
    );

    // vIndex: 8
    virtual ::IncomingPacketFilterResult
    allowIncomingPacketId(::NetworkIdentifierWithSubId const&, ::MinecraftPacketIds, uint64) = 0;

    // vIndex: 9
    virtual ::OutgoingPacketFilterResult
    allowOutgoingPacket(::std::vector<::NetworkIdentifierWithSubId> const&, ::Packet const&) = 0;

    // vIndex: 10
    virtual void onWebsocketRequest(::std::string const&, ::std::string const&, ::std::function<void()>);

    // vIndex: 11
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

    // vIndex: 12
    virtual void sendPacketViolationWarningPacket(
        ::std::error_code const&,
        ::PacketViolationResponse,
        ::MinecraftPacketIds,
        ::std::string const&,
        ::NetworkIdentifier const&,
        ::SubClientId
    );

    // vIndex: 13
    virtual void onTransferRequest(::NetworkIdentifier const&, ::Social::GameConnectionInfo const&);

    // vIndex: 14
    virtual bool getIsConnectedToApplicationLayer() const;

    // vIndex: 15
    virtual ::GameSpecificNetEventCallback* getGameSpecificNetEventCallback();

    // vIndex: 232
    virtual void handle(::NetworkIdentifier const&, ::PacketViolationWarningPacket const&);

    // vIndex: 231
    virtual void handle(::NetworkIdentifier const&, ::DisconnectPacket const&);

    // vIndex: 230
    virtual void handle(::NetworkIdentifier const&, ::EmoteListPacket const&);

    // vIndex: 229
    virtual void handle(::NetworkIdentifier const&, ::EmotePacket const&);

    // vIndex: 228
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::LoginPacket>);

    // vIndex: 227
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::SubClientLoginPacket>);

    // vIndex: 226
    virtual void handle(::NetworkIdentifier const&, ::ClientToServerHandshakePacket const&);

    // vIndex: 225
    virtual void handle(::NetworkIdentifier const&, ::ServerToClientHandshakePacket const&);

    // vIndex: 224
    virtual void handle(::NetworkIdentifier const&, ::ResourcePacksInfoPacket const&);

    // vIndex: 223
    virtual void handle(::NetworkIdentifier const&, ::ResourcePackStackPacket const&);

    // vIndex: 222
    virtual void handle(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);

    // vIndex: 221
    virtual void handle(::NetworkIdentifier const&, ::PositionTrackingDBClientRequestPacket const&);

    // vIndex: 220
    virtual void handle(::NetworkIdentifier const&, ::PositionTrackingDBServerBroadcastPacket const&);

    // vIndex: 219
    virtual void handle(::NetworkIdentifier const&, ::PlayStatusPacket const&);

    // vIndex: 218
    virtual void handle(::NetworkIdentifier const&, ::SetTimePacket const&);

    // vIndex: 217
    virtual void handle(::NetworkIdentifier const&, ::TextPacket const&);

    // vIndex: 216
    virtual void handle(::NetworkIdentifier const&, ::StartGamePacket const&);

    // vIndex: 215
    virtual void handle(::NetworkIdentifier const&, ::AddItemActorPacket const&);

    // vIndex: 214
    virtual void handle(::NetworkIdentifier const&, ::AddPaintingPacket const&);

    // vIndex: 213
    virtual void handle(::NetworkIdentifier const&, ::TakeItemActorPacket const&);

    // vIndex: 212
    virtual void handle(::NetworkIdentifier const&, ::AddActorPacket const&);

    // vIndex: 211
    virtual void handle(::NetworkIdentifier const&, ::AddMobPacket const&);

    // vIndex: 210
    virtual void handle(::NetworkIdentifier const&, ::AddPlayerPacket const&);

    // vIndex: 209
    virtual void handle(::NetworkIdentifier const&, ::RemoveActorPacket const&);

    // vIndex: 208
    virtual void handle(::NetworkIdentifier const&, ::MoveActorAbsolutePacket const&);

    // vIndex: 207
    virtual void handle(::NetworkIdentifier const&, ::MoveActorDeltaPacket const&);

    // vIndex: 206
    virtual void handle(::NetworkIdentifier const&, ::MovePlayerPacket const&);

    // vIndex: 205
    virtual void handle(::NetworkIdentifier const&, ::SetPlayerGameTypePacket const&);

    // vIndex: 204
    virtual void handle(::NetworkIdentifier const&, ::UpdatePlayerGameTypePacket const&);

    // vIndex: 203
    virtual void handle(::NetworkIdentifier const&, ::SetDefaultGameTypePacket const&);

    // vIndex: 202
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateBlockPacket>);

    // vIndex: 201
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateBlockSyncedPacket>);

    // vIndex: 200
    virtual void handle(::NetworkIdentifier const&, ::SpawnParticleEffectPacket const&);

    // vIndex: 199
    virtual void handle(::NetworkIdentifier const&, ::LevelSoundEventPacket const&);

    // vIndex: 198
    virtual void handle(::NetworkIdentifier const&, ::LevelEventPacket const&);

    // vIndex: 197
    virtual void handle(::NetworkIdentifier const&, ::LevelEventGenericPacket const&);

    // vIndex: 196
    virtual void handle(::NetworkIdentifier const&, ::BlockEventPacket const&);

    // vIndex: 195
    virtual void handle(::NetworkIdentifier const&, ::BlockPickRequestPacket const&);

    // vIndex: 194
    virtual void handle(::NetworkIdentifier const&, ::ActorPickRequestPacket const&);

    // vIndex: 193
    virtual void handle(::NetworkIdentifier const&, ::GuiDataPickItemPacket const&);

    // vIndex: 192
    virtual void handle(::NetworkIdentifier const&, ::ActorEventPacket const&);

    // vIndex: 191
    virtual void handle(::NetworkIdentifier const&, ::MobEffectPacket const&);

    // vIndex: 190
    virtual void handle(::NetworkIdentifier const&, ::MovementEffectPacket const&);

    // vIndex: 189
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::MobEquipmentPacket>);

    // vIndex: 188
    virtual void handle(::NetworkIdentifier const&, ::MobArmorEquipmentPacket const&);

    // vIndex: 187
    virtual void handle(::NetworkIdentifier const&, ::SetActorDataPacket const&);

    // vIndex: 186
    virtual void handle(::NetworkIdentifier const&, ::SetActorMotionPacket const&);

    // vIndex: 185
    virtual void handle(::NetworkIdentifier const&, ::MotionPredictionHintsPacket const&);

    // vIndex: 184
    virtual void handle(::NetworkIdentifier const&, ::SetHealthPacket const&);

    // vIndex: 183
    virtual void handle(::NetworkIdentifier const&, ::SetActorLinkPacket const&);

    // vIndex: 182
    virtual void handle(::NetworkIdentifier const&, ::SetSpawnPositionPacket const&);

    // vIndex: 181
    virtual void handle(::NetworkIdentifier const&, ::InteractPacket const&);

    // vIndex: 180
    virtual void handle(::NetworkIdentifier const&, ::PlayerActionPacket const&);

    // vIndex: 179
    virtual void handle(::NetworkIdentifier const&, ::ActorFallPacket const&);

    // vIndex: 178
    virtual void handle(::NetworkIdentifier const&, ::HurtArmorPacket const&);

    // vIndex: 177
    virtual void handle(::NetworkIdentifier const&, ::PlayerArmorDamagePacket const&);

    // vIndex: 176
    virtual void handle(::NetworkIdentifier const&, ::ItemStackRequestPacket const&);

    // vIndex: 175
    virtual void handle(::NetworkIdentifier const&, ::ItemStackResponsePacket const&);

    // vIndex: 174
    virtual void handle(::NetworkIdentifier const&, ::ContainerOpenPacket const&);

    // vIndex: 173
    virtual void handle(::NetworkIdentifier const&, ::ContainerClosePacket const&);

    // vIndex: 172
    virtual void handle(::NetworkIdentifier const&, ::ContainerRegistryCleanupPacket const&);

    // vIndex: 171
    virtual void handle(::NetworkIdentifier const&, ::ContainerSetDataPacket const&);

    // vIndex: 170
    virtual void handle(::NetworkIdentifier const&, ::PlayerHotbarPacket const&);

    // vIndex: 169
    virtual void handle(::NetworkIdentifier const&, ::InventoryContentPacket const&);

    // vIndex: 168
    virtual void handle(::NetworkIdentifier const&, ::InventorySlotPacket const&);

    // vIndex: 167
    virtual void handle(::NetworkIdentifier const&, ::CraftingDataPacket const&);

    // vIndex: 166
    virtual void handle(::NetworkIdentifier const&, ::AnimatePacket const&);

    // vIndex: 165
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::BlockActorDataPacket>);

    // vIndex: 164
    virtual void handle(::NetworkIdentifier const&, ::PlayerAuthInputPacket const&);

    // vIndex: 163
    virtual void handle(::NetworkIdentifier const&, ::ClientMovementPredictionSyncPacket const&);

    // vIndex: 162
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::LevelChunkPacket>);

    // vIndex: 161
    virtual void handle(::NetworkIdentifier const&, ::SubChunkPacket const&);

    // vIndex: 160
    virtual void handle(::NetworkIdentifier const&, ::SubChunkRequestPacket const&);

    // vIndex: 159
    virtual void handle(::NetworkIdentifier const&, ::ClientCacheBlobStatusPacket const&);

    // vIndex: 158
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::ClientCacheMissResponsePacket>);

    // vIndex: 157
    virtual void handle(::NetworkIdentifier const&, ::SetCommandsEnabledPacket const&);

    // vIndex: 156
    virtual void handle(::NetworkIdentifier const&, ::SetDifficultyPacket const&);

    // vIndex: 155
    virtual void handle(::NetworkIdentifier const&, ::SimpleEventPacket const&);

    // vIndex: 154
    virtual void handle(::NetworkIdentifier const&, ::ChangeDimensionPacket const&);

    // vIndex: 153
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateAttributesPacket>);

    // vIndex: 152
    virtual void handle(::NetworkIdentifier const&, ::PlayerListPacket const&);

    // vIndex: 151
    virtual void handle(::NetworkIdentifier const&, ::LegacyTelemetryEventPacket const&);

    // vIndex: 150
    virtual void handle(::NetworkIdentifier const&, ::SpawnExperienceOrbPacket const&);

    // vIndex: 149
    virtual void handle(::NetworkIdentifier const&, ::ClientCameraAimAssistPacket const&);

    // vIndex: 148
    virtual void handle(::NetworkIdentifier const&, ::ClientboundDebugRendererPacket const&);

    // vIndex: 147
    virtual void handle(::NetworkIdentifier const&, ::ClientboundMapItemDataPacket const&);

    // vIndex: 146
    virtual void handle(::NetworkIdentifier const&, ::ClientboundCloseFormPacket const&);

    // vIndex: 145
    virtual void handle(::NetworkIdentifier const&, ::ClientCacheStatusPacket const&);

    // vIndex: 144
    virtual void handle(::NetworkIdentifier const&, ::RequestChunkRadiusPacket const&);

    // vIndex: 143
    virtual void handle(::NetworkIdentifier const&, ::MapCreateLockedCopyPacket const&);

    // vIndex: 142
    virtual void handle(::NetworkIdentifier const&, ::MapInfoRequestPacket const&);

    // vIndex: 141
    virtual void handle(::NetworkIdentifier const&, ::ChunkRadiusUpdatedPacket const&);

    // vIndex: 140
    virtual void handle(::NetworkIdentifier const&, ::BossEventPacket const&);

    // vIndex: 139
    virtual void handle(::NetworkIdentifier const&, ::UpdateTradePacket const&);

    // vIndex: 138
    virtual void handle(::NetworkIdentifier const&, ::UpdateEquipPacket const&);

    // vIndex: 137
    virtual void handle(::NetworkIdentifier const&, ::AvailableCommandsPacket const&);

    // vIndex: 136
    virtual void handle(::NetworkIdentifier const&, ::CommandRequestPacket const&);

    // vIndex: 135
    virtual void handle(::NetworkIdentifier const&, ::CommandOutputPacket const&);

    // vIndex: 134
    virtual void handle(::NetworkIdentifier const&, ::CommandBlockUpdatePacket const&);

    // vIndex: 133
    virtual void handle(::NetworkIdentifier const&, ::CompletedUsingItemPacket const&);

    // vIndex: 132
    virtual void handle(::NetworkIdentifier const&, ::CameraAimAssistPacket const&);

    // vIndex: 131
    virtual void handle(::NetworkIdentifier const&, ::CameraAimAssistPresetsPacket const&);

    // vIndex: 130
    virtual void handle(::NetworkIdentifier const&, ::CameraInstructionPacket const&);

    // vIndex: 129
    virtual void handle(::NetworkIdentifier const&, ::CameraPacket const&);

    // vIndex: 128
    virtual void handle(::NetworkIdentifier const&, ::CameraPresetsPacket const&);

    // vIndex: 127
    virtual void handle(::NetworkIdentifier const&, ::ClientboundControlSchemeSetPacket const&);

    // vIndex: 126
    virtual void handle(::NetworkIdentifier const&, ::CameraShakePacket const&);

    // vIndex: 125
    virtual void handle(::NetworkIdentifier const&, ::InventoryActionPacket const&);

    // vIndex: 124
    virtual void handle(::NetworkIdentifier const&, ::GameRulesChangedPacket const&);

    // vIndex: 123
    virtual void handle(::NetworkIdentifier const&, ::ResourcePackDataInfoPacket const&);

    // vIndex: 122
    virtual void handle(::NetworkIdentifier const&, ::ResourcePackChunkDataPacket const&);

    // vIndex: 121
    virtual void handle(::NetworkIdentifier const&, ::ResourcePackChunkRequestPacket const&);

    // vIndex: 120
    virtual void handle(::NetworkIdentifier const&, ::NetworkChunkPublisherUpdatePacket const&);

    // vIndex: 119
    virtual void handle(::NetworkIdentifier const&, ::StructureBlockUpdatePacket const&);

    // vIndex: 118
    virtual void handle(::NetworkIdentifier const&, ::StructureTemplateDataRequestPacket const&);

    // vIndex: 117
    virtual void handle(::NetworkIdentifier const&, ::StructureTemplateDataResponsePacket const&);

    // vIndex: 116
    virtual void handle(::NetworkIdentifier const&, ::TransferPacket const&);

    // vIndex: 115
    virtual void handle(::NetworkIdentifier const&, ::PlaySoundPacket const&);

    // vIndex: 114
    virtual void handle(::NetworkIdentifier const&, ::StopSoundPacket const&);

    // vIndex: 113
    virtual void handle(::NetworkIdentifier const&, ::SetTitlePacket const&);

    // vIndex: 112
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::InventoryTransactionPacket>);

    // vIndex: 111
    virtual void handle(::NetworkIdentifier const&, ::AddBehaviorTreePacket const&);

    // vIndex: 110
    virtual void handle(::NetworkIdentifier const&, ::ShowStoreOfferPacket const&);

    // vIndex: 109
    virtual void handle(::NetworkIdentifier const&, ::PurchaseReceiptPacket const&);

    // vIndex: 108
    virtual void handle(::NetworkIdentifier const&, ::RemoveObjectivePacket const&);

    // vIndex: 107
    virtual void handle(::NetworkIdentifier const&, ::SetDisplayObjectivePacket const&);

    // vIndex: 106
    virtual void handle(::NetworkIdentifier const&, ::AutomationClientConnectPacket const&);

    // vIndex: 105
    virtual void handle(::NetworkIdentifier const&, ::ModalFormRequestPacket const&);

    // vIndex: 104
    virtual void handle(::NetworkIdentifier const&, ::ModalFormResponsePacket const&);

    // vIndex: 103
    virtual void handle(::NetworkIdentifier const&, ::ToastRequestPacket const&);

    // vIndex: 102
    virtual void handle(::NetworkIdentifier const&, ::OnScreenTextureAnimationPacket const&);

    // vIndex: 101
    virtual void handle(::NetworkIdentifier const&, ::ServerSettingsRequestPacket const&);

    // vIndex: 100
    virtual void handle(::NetworkIdentifier const&, ::ServerSettingsResponsePacket const&);

    // vIndex: 99
    virtual void handle(::NetworkIdentifier const&, ::ShowProfilePacket const&);

    // vIndex: 98
    virtual void handle(::NetworkIdentifier const&, ::SetScorePacket const&);

    // vIndex: 97
    virtual void handle(::NetworkIdentifier const&, ::SetScoreboardIdentityPacket const&);

    // vIndex: 96
    virtual void handle(::NetworkIdentifier const&, ::TickingAreasLoadStatusPacket const&);

    // vIndex: 95
    virtual void handle(::NetworkIdentifier const&, ::UpdateSoftEnumPacket const&);

    // vIndex: 94
    virtual void handle(::NetworkIdentifier const&, ::AvailableActorIdentifiersPacket const&);

    // vIndex: 93
    virtual void handle(::NetworkIdentifier const&, ::AddVolumeEntityPacket const&);

    // vIndex: 92
    virtual void handle(::NetworkIdentifier const&, ::RemoveVolumeEntityPacket const&);

    // vIndex: 91
    virtual void handle(::NetworkIdentifier const&, ::DimensionDataPacket const&);

    // vIndex: 90
    virtual void handle(::NetworkIdentifier const&, ::EditorNetworkPacket const&);

    // vIndex: 89
    virtual void handle(::NetworkIdentifier const&, ::RefreshEntitlementsPacket const&);

    // vIndex: 88
    virtual void handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const&);

    // vIndex: 87
    virtual void handle(::NetworkIdentifier const&, ::RespawnPacket const&);

    // vIndex: 86
    virtual void handle(::NetworkIdentifier const&, ::ShowCreditsPacket const&);

    // vIndex: 85
    virtual void handle(::NetworkIdentifier const&, ::PlayerSkinPacket const&);

    // vIndex: 84
    virtual void handle(::NetworkIdentifier const&, ::PlayerStartItemCooldownPacket const&);

    // vIndex: 83
    virtual void handle(::NetworkIdentifier const&, ::PlayerToggleCrafterSlotRequestPacket const&);

    // vIndex: 82
    virtual void handle(::NetworkIdentifier const&, ::SetLastHurtByPacket const&);

    // vIndex: 81
    virtual void handle(::NetworkIdentifier const&, ::BookAddPagePacket const&);

    // vIndex: 80
    virtual void handle(::NetworkIdentifier const&, ::BookDeletePagePacket const&);

    // vIndex: 79
    virtual void handle(::NetworkIdentifier const&, ::LecternUpdatePacket const&);

    // vIndex: 78
    virtual void handle(::NetworkIdentifier const&, ::BookEditPacket const&);

    // vIndex: 77
    virtual void handle(::NetworkIdentifier const&, ::BookSignPacket const&);

    // vIndex: 76
    virtual void handle(::NetworkIdentifier const&, ::BookSwapPagesPacket const&);

    // vIndex: 75
    virtual void handle(::NetworkIdentifier const&, ::NpcRequestPacket const&);

    // vIndex: 74
    virtual void handle(::NetworkIdentifier const&, ::PhotoTransferPacket const&);

    // vIndex: 73
    virtual void handle(::NetworkIdentifier const&, ::LabTablePacket const&);

    // vIndex: 72
    virtual void handle(::NetworkIdentifier const&, ::NetworkSettingsPacket const&);

    // vIndex: 71
    virtual void handle(::NetworkIdentifier const&, ::NetworkStackLatencyPacket const&);

    // vIndex: 70
    virtual void handle(::NetworkIdentifier const&, ::ServerStatsPacket const&);

    // vIndex: 69
    virtual void handle(::NetworkIdentifier const&, ::SetLocalPlayerAsInitializedPacket const&);

    // vIndex: 68
    virtual void handle(::NetworkIdentifier const&, ::ScriptMessagePacket const&);

    // vIndex: 67
    virtual void handle(::NetworkIdentifier const&, ::BiomeDefinitionListPacket const&);

    // vIndex: 66
    virtual void handle(::NetworkIdentifier const&, ::EducationSettingsPacket const&);

    // vIndex: 65
    virtual void handle(::NetworkIdentifier const&, ::EduUriResourcePacket const&);

    // vIndex: 64
    virtual void handle(::NetworkIdentifier const&, ::MultiplayerSettingsPacket const&);

    // vIndex: 63
    virtual void handle(::NetworkIdentifier const&, ::SettingsCommandPacket const&);

    // vIndex: 62
    virtual void handle(::NetworkIdentifier const&, ::AnvilDamagePacket const&);

    // vIndex: 61
    virtual void handle(::NetworkIdentifier const&, ::CreativeContentPacket const&);

    // vIndex: 60
    virtual void handle(::NetworkIdentifier const&, ::CodeBuilderPacket const&);

    // vIndex: 59
    virtual void handle(::NetworkIdentifier const&, ::PlayerEnchantOptionsPacket const&);

    // vIndex: 58
    virtual void handle(::NetworkIdentifier const&, ::DebugInfoPacket const&);

    // vIndex: 57
    virtual void handle(::NetworkIdentifier const&, ::ChangeMobPropertyPacket const&);

    // vIndex: 56
    virtual void handle(::NetworkIdentifier const&, ::AnimateEntityPacket const&);

    // vIndex: 55
    virtual void handle(::NetworkIdentifier const&, ::CorrectPlayerMovePredictionPacket const&);

    // vIndex: 54
    virtual void handle(::NetworkIdentifier const&, ::PlayerFogPacket const&);

    // vIndex: 53
    virtual void handle(::NetworkIdentifier const&, ::ItemRegistryPacket const&);

    // vIndex: 52
    virtual void handle(::NetworkIdentifier const&, ::LessonProgressPacket const&);

    // vIndex: 51
    virtual void handle(::NetworkIdentifier const&, ::FeatureRegistryPacket const&);

    // vIndex: 50
    virtual void handle(::NetworkIdentifier const&, ::SyncActorPropertyPacket const&);

    // vIndex: 49
    virtual void handle(::NetworkIdentifier const&, ::SimulationTypePacket const&);

    // vIndex: 48
    virtual void handle(::NetworkIdentifier const&, ::NpcDialoguePacket const&);

    // vIndex: 47
    virtual void handle(::NetworkIdentifier const&, ::CreatePhotoPacket const&);

    // vIndex: 46
    virtual void handle(::NetworkIdentifier const&, ::UpdateSubChunkBlocksPacket const&);

    // vIndex: 45
    virtual void handle(::NetworkIdentifier const&, ::CodeBuilderSourcePacket const&);

    // vIndex: 44
    virtual void handle(::NetworkIdentifier const&, ::AgentActionEventPacket const&);

    // vIndex: 43
    virtual void handle(::NetworkIdentifier const&, ::DeathInfoPacket const&);

    // vIndex: 42
    virtual void handle(::NetworkIdentifier const&, ::RequestAbilityPacket const&);

    // vIndex: 41
    virtual void handle(::NetworkIdentifier const&, ::RequestPermissionsPacket const&);

    // vIndex: 40
    virtual void handle(::NetworkIdentifier const&, ::UpdateAbilitiesPacket const&);

    // vIndex: 39
    virtual void handle(::NetworkIdentifier const&, ::UpdateAdventureSettingsPacket const&);

    // vIndex: 38
    virtual void handle(::NetworkIdentifier const&, ::RequestNetworkSettingsPacket const&);

    // vIndex: 37
    virtual void handle(::NetworkIdentifier const&, ::GameTestRequestPacket const&);

    // vIndex: 36
    virtual void handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&);

    // vIndex: 35
    virtual void handle(::NetworkIdentifier const&, ::UpdateClientInputLocksPacket const&);

    // vIndex: 34
    virtual void handle(::NetworkIdentifier const&, ::UnlockedRecipesPacket const&);

    // vIndex: 33
    virtual void handle(::NetworkIdentifier const&, ::TrimDataPacket const&);

    // vIndex: 32
    virtual void handle(::NetworkIdentifier const&, ::OpenSignPacket const&);

    // vIndex: 31
    virtual void handle(::NetworkIdentifier const&, ::AgentAnimationPacket const&);

    // vIndex: 30
    virtual void handle(::NetworkIdentifier const&, ::SetPlayerInventoryOptionsPacket const&);

    // vIndex: 29
    virtual void handle(::NetworkIdentifier const&, ::SetHudPacket const&);

    // vIndex: 28
    virtual void handle(::NetworkIdentifier const&, ::AwardAchievementPacket const&);

    // vIndex: 27
    virtual void handle(::NetworkIdentifier const&, ::ServerboundLoadingScreenPacket const&);

    // vIndex: 26
    virtual void handle(::NetworkIdentifier const&, ::ServerboundDiagnosticsPacket const&);

    // vIndex: 25
    virtual void handle(::NetworkIdentifier const&, ::JigsawStructureDataPacket const&);

    // vIndex: 24
    virtual void handle(::NetworkIdentifier const&, ::CurrentStructureFeaturePacket const&);

    // vIndex: 23
    virtual void handle(::NetworkIdentifier const&, ::UpdateClientOptionsPacket const&);

    // vIndex: 22
    virtual void handle(::NetworkIdentifier const&, ::PlayerVideoCapturePacket const&);

    // vIndex: 21
    virtual void handle(::NetworkIdentifier const&, ::PlayerUpdateEntityOverridesPacket const&);

    // vIndex: 20
    virtual void handle(::NetworkIdentifier const&, ::PlayerLocationPacket const&);

    // vIndex: 19
    virtual void handle(::NetworkIdentifier const&, ::DebugDrawerPacket const&);

    // vIndex: 18
    virtual void handle(::NetworkIdentifier const&, ::ServerboundPackSettingChangePacket const&);

    // vIndex: 17
    virtual void handle(::NetworkIdentifier const&, ::DataStoreSyncPacket const&);

    // vIndex: 16
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

    MCFOLD void $handle(::NetworkIdentifier const&, ::DataStoreSyncPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::GraphicsOverrideParameterPacket const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
