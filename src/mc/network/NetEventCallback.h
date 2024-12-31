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
class ClientToServerHandshakePacket;
class ClientboundCloseFormPacket;
class ClientboundDebugRendererPacket;
class ClientboundMapItemDataPacket;
class CodeBuilderPacket;
class CodeBuilderSourcePacket;
class CommandBlockUpdatePacket;
class CommandOutputPacket;
class CommandRequestPacket;
class CompletedUsingItemPacket;
class CompressedBiomeDefinitionListPacket;
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
class GuiDataPickItemPacket;
class HurtArmorPacket;
class InteractPacket;
class InventoryActionPacket;
class InventoryContentPacket;
class InventorySlotPacket;
class InventoryTransactionPacket;
class ItemComponentPacket;
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
class LevelSoundEventPacketV1;
class LevelSoundEventPacketV2;
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
class PassengerJumpPacket;
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
class PlayerInputPacket;
class PlayerListPacket;
class PlayerSkinPacket;
class PlayerStartItemCooldownPacket;
class PlayerToggleCrafterSlotRequestPacket;
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
class SetMovementAuthorityPacket;
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
class UpdateEquipPacket;
class UpdatePlayerGameTypePacket;
class UpdateSoftEnumPacket;
class UpdateSubChunkBlocksPacket;
class UpdateTradePacket;
struct NetworkIdentifierWithSubId;
// clang-format on

class NetEventCallback : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    NetEventCallback& operator=(NetEventCallback const&);
    NetEventCallback(NetEventCallback const&);
    NetEventCallback();

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
    virtual void onStoreOfferReceive(::ShowStoreOfferRedirectType const, ::std::string const& offerID);

    // vIndex: 6
    virtual void onDisconnect(
        ::NetworkIdentifier const&,
        ::Connection::DisconnectFailReason const,
        ::std::string const& message,
        bool                 skipMessage,
        ::std::string const& telemetryOverride
    );

    // vIndex: 7
    virtual ::IncomingPacketFilterResult
    allowIncomingPacketId(::NetworkIdentifierWithSubId const&, ::MinecraftPacketIds, uint64) = 0;

    // vIndex: 8
    virtual ::OutgoingPacketFilterResult
    allowOutgoingPacket(::std::vector<::NetworkIdentifierWithSubId> const&, ::Packet const&) = 0;

    // vIndex: 9
    virtual void onWebsocketRequest(::std::string const&, ::std::string const&, ::std::function<void()>);

    // vIndex: 10
    virtual void sendPacketViolationDetectedTelemetryData(
        uint64,
        ::std::string,
        ::PacketViolationResponse,
        ::MinecraftPacketIds,
        ::NetworkIdentifier const&,
        uint,
        ::SubClientId,
        ::SubClientId,
        uint
    );

    // vIndex: 11
    virtual void onTransferRequest(::NetworkIdentifier const&, ::std::string const&, int);

    // vIndex: 12
    virtual bool getIsConnectedToApplicationLayer() const;

    // vIndex: 13
    virtual ::GameSpecificNetEventCallback* getGameSpecificNetEventCallback();

    // vIndex: 225
    virtual void handle(::NetworkIdentifier const&, ::PacketViolationWarningPacket const&);

    // vIndex: 224
    virtual void handle(::NetworkIdentifier const&, ::DisconnectPacket const&);

    // vIndex: 223
    virtual void handle(::NetworkIdentifier const&, ::EmoteListPacket const&);

    // vIndex: 222
    virtual void handle(::NetworkIdentifier const&, ::EmotePacket const&);

    // vIndex: 221
    virtual void handle(::NetworkIdentifier const&, ::LoginPacket const&);

    // vIndex: 220
    virtual void handle(::NetworkIdentifier const&, ::SubClientLoginPacket const&);

    // vIndex: 219
    virtual void handle(::NetworkIdentifier const&, ::ClientToServerHandshakePacket const&);

    // vIndex: 218
    virtual void handle(::NetworkIdentifier const&, ::ServerToClientHandshakePacket const&);

    // vIndex: 217
    virtual void handle(::NetworkIdentifier const&, ::ResourcePacksInfoPacket const&);

    // vIndex: 216
    virtual void handle(::NetworkIdentifier const&, ::ResourcePackStackPacket const&);

    // vIndex: 215
    virtual void handle(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);

    // vIndex: 214
    virtual void handle(::NetworkIdentifier const&, ::PositionTrackingDBClientRequestPacket const&);

    // vIndex: 213
    virtual void handle(::NetworkIdentifier const&, ::PositionTrackingDBServerBroadcastPacket const&);

    // vIndex: 212
    virtual void handle(::NetworkIdentifier const&, ::PlayStatusPacket const&);

    // vIndex: 211
    virtual void handle(::NetworkIdentifier const&, ::SetTimePacket const&);

    // vIndex: 210
    virtual void handle(::NetworkIdentifier const&, ::TextPacket const&);

    // vIndex: 209
    virtual void handle(::NetworkIdentifier const&, ::StartGamePacket const&);

    // vIndex: 208
    virtual void handle(::NetworkIdentifier const&, ::AddItemActorPacket const&);

    // vIndex: 207
    virtual void handle(::NetworkIdentifier const&, ::AddPaintingPacket const&);

    // vIndex: 206
    virtual void handle(::NetworkIdentifier const&, ::TakeItemActorPacket const&);

    // vIndex: 205
    virtual void handle(::NetworkIdentifier const&, ::AddActorPacket const&);

    // vIndex: 204
    virtual void handle(::NetworkIdentifier const&, ::AddMobPacket const&);

    // vIndex: 203
    virtual void handle(::NetworkIdentifier const&, ::AddPlayerPacket const&);

    // vIndex: 202
    virtual void handle(::NetworkIdentifier const&, ::RemoveActorPacket const&);

    // vIndex: 201
    virtual void handle(::NetworkIdentifier const&, ::MoveActorAbsolutePacket const&);

    // vIndex: 200
    virtual void handle(::NetworkIdentifier const&, ::MoveActorDeltaPacket const&);

    // vIndex: 199
    virtual void handle(::NetworkIdentifier const&, ::MovePlayerPacket const&);

    // vIndex: 198
    virtual void handle(::NetworkIdentifier const&, ::PassengerJumpPacket const&);

    // vIndex: 197
    virtual void handle(::NetworkIdentifier const&, ::SetPlayerGameTypePacket const&);

    // vIndex: 196
    virtual void handle(::NetworkIdentifier const&, ::UpdatePlayerGameTypePacket const&);

    // vIndex: 195
    virtual void handle(::NetworkIdentifier const&, ::SetDefaultGameTypePacket const&);

    // vIndex: 194
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateBlockPacket>);

    // vIndex: 193
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateBlockSyncedPacket>);

    // vIndex: 192
    virtual void handle(::NetworkIdentifier const&, ::SpawnParticleEffectPacket const&);

    // vIndex: 191
    virtual void handle(::NetworkIdentifier const&, ::LevelSoundEventPacket const&);

    // vIndex: 190
    virtual void handle(::NetworkIdentifier const&, ::LevelSoundEventPacketV1 const&);

    // vIndex: 189
    virtual void handle(::NetworkIdentifier const&, ::LevelSoundEventPacketV2 const&);

    // vIndex: 188
    virtual void handle(::NetworkIdentifier const&, ::LevelEventPacket const&);

    // vIndex: 187
    virtual void handle(::NetworkIdentifier const&, ::LevelEventGenericPacket const&);

    // vIndex: 186
    virtual void handle(::NetworkIdentifier const&, ::BlockEventPacket const&);

    // vIndex: 185
    virtual void handle(::NetworkIdentifier const&, ::BlockPickRequestPacket const&);

    // vIndex: 184
    virtual void handle(::NetworkIdentifier const&, ::ActorPickRequestPacket const&);

    // vIndex: 183
    virtual void handle(::NetworkIdentifier const&, ::GuiDataPickItemPacket const&);

    // vIndex: 182
    virtual void handle(::NetworkIdentifier const&, ::ActorEventPacket const&);

    // vIndex: 181
    virtual void handle(::NetworkIdentifier const&, ::MobEffectPacket const&);

    // vIndex: 180
    virtual void handle(::NetworkIdentifier const&, ::MovementEffectPacket const&);

    // vIndex: 179
    virtual void handle(::NetworkIdentifier const&, ::MobEquipmentPacket const&);

    // vIndex: 178
    virtual void handle(::NetworkIdentifier const&, ::MobArmorEquipmentPacket const&);

    // vIndex: 177
    virtual void handle(::NetworkIdentifier const&, ::SetActorDataPacket const&);

    // vIndex: 176
    virtual void handle(::NetworkIdentifier const&, ::SetActorMotionPacket const&);

    // vIndex: 175
    virtual void handle(::NetworkIdentifier const&, ::MotionPredictionHintsPacket const&);

    // vIndex: 174
    virtual void handle(::NetworkIdentifier const&, ::SetHealthPacket const&);

    // vIndex: 173
    virtual void handle(::NetworkIdentifier const&, ::SetActorLinkPacket const&);

    // vIndex: 172
    virtual void handle(::NetworkIdentifier const&, ::SetSpawnPositionPacket const&);

    // vIndex: 171
    virtual void handle(::NetworkIdentifier const&, ::InteractPacket const&);

    // vIndex: 170
    virtual void handle(::NetworkIdentifier const&, ::PlayerActionPacket const&);

    // vIndex: 169
    virtual void handle(::NetworkIdentifier const&, ::ActorFallPacket const&);

    // vIndex: 168
    virtual void handle(::NetworkIdentifier const&, ::HurtArmorPacket const&);

    // vIndex: 167
    virtual void handle(::NetworkIdentifier const&, ::PlayerArmorDamagePacket const&);

    // vIndex: 166
    virtual void handle(::NetworkIdentifier const&, ::ItemStackRequestPacket const&);

    // vIndex: 165
    virtual void handle(::NetworkIdentifier const&, ::ItemStackResponsePacket const&);

    // vIndex: 164
    virtual void handle(::NetworkIdentifier const&, ::ContainerOpenPacket const&);

    // vIndex: 163
    virtual void handle(::NetworkIdentifier const&, ::ContainerClosePacket const&);

    // vIndex: 162
    virtual void handle(::NetworkIdentifier const&, ::ContainerRegistryCleanupPacket const&);

    // vIndex: 161
    virtual void handle(::NetworkIdentifier const&, ::ContainerSetDataPacket const&);

    // vIndex: 160
    virtual void handle(::NetworkIdentifier const&, ::PlayerHotbarPacket const&);

    // vIndex: 159
    virtual void handle(::NetworkIdentifier const&, ::InventoryContentPacket const&);

    // vIndex: 158
    virtual void handle(::NetworkIdentifier const&, ::InventorySlotPacket const&);

    // vIndex: 157
    virtual void handle(::NetworkIdentifier const&, ::CraftingDataPacket const&);

    // vIndex: 156
    virtual void handle(::NetworkIdentifier const&, ::AnimatePacket const&);

    // vIndex: 155
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::BlockActorDataPacket>);

    // vIndex: 154
    virtual void handle(::NetworkIdentifier const&, ::PlayerAuthInputPacket const&);

    // vIndex: 153
    virtual void handle(::NetworkIdentifier const&, ::PlayerInputPacket const&);

    // vIndex: 152
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::LevelChunkPacket>);

    // vIndex: 151
    virtual void handle(::NetworkIdentifier const&, ::SubChunkPacket const&);

    // vIndex: 150
    virtual void handle(::NetworkIdentifier const&, ::SubChunkRequestPacket const&);

    // vIndex: 149
    virtual void handle(::NetworkIdentifier const&, ::ClientCacheBlobStatusPacket const&);

    // vIndex: 148
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::ClientCacheMissResponsePacket>);

    // vIndex: 147
    virtual void handle(::NetworkIdentifier const&, ::SetCommandsEnabledPacket const&);

    // vIndex: 146
    virtual void handle(::NetworkIdentifier const&, ::SetDifficultyPacket const&);

    // vIndex: 145
    virtual void handle(::NetworkIdentifier const&, ::SimpleEventPacket const&);

    // vIndex: 144
    virtual void handle(::NetworkIdentifier const&, ::ChangeDimensionPacket const&);

    // vIndex: 143
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateAttributesPacket>);

    // vIndex: 142
    virtual void handle(::NetworkIdentifier const&, ::PlayerListPacket const&);

    // vIndex: 141
    virtual void handle(::NetworkIdentifier const&, ::LegacyTelemetryEventPacket const&);

    // vIndex: 140
    virtual void handle(::NetworkIdentifier const&, ::SpawnExperienceOrbPacket const&);

    // vIndex: 139
    virtual void handle(::NetworkIdentifier const&, ::ClientboundDebugRendererPacket const&);

    // vIndex: 138
    virtual void handle(::NetworkIdentifier const&, ::ClientboundMapItemDataPacket const&);

    // vIndex: 137
    virtual void handle(::NetworkIdentifier const&, ::ClientboundCloseFormPacket const&);

    // vIndex: 136
    virtual void handle(::NetworkIdentifier const&, ::ClientCacheStatusPacket const&);

    // vIndex: 135
    virtual void handle(::NetworkIdentifier const&, ::RequestChunkRadiusPacket const&);

    // vIndex: 134
    virtual void handle(::NetworkIdentifier const&, ::MapCreateLockedCopyPacket const&);

    // vIndex: 133
    virtual void handle(::NetworkIdentifier const&, ::MapInfoRequestPacket const&);

    // vIndex: 132
    virtual void handle(::NetworkIdentifier const&, ::ChunkRadiusUpdatedPacket const&);

    // vIndex: 131
    virtual void handle(::NetworkIdentifier const&, ::BossEventPacket const&);

    // vIndex: 130
    virtual void handle(::NetworkIdentifier const&, ::UpdateTradePacket const&);

    // vIndex: 129
    virtual void handle(::NetworkIdentifier const&, ::UpdateEquipPacket const&);

    // vIndex: 128
    virtual void handle(::NetworkIdentifier const&, ::AvailableCommandsPacket const&);

    // vIndex: 127
    virtual void handle(::NetworkIdentifier const&, ::CommandRequestPacket const&);

    // vIndex: 126
    virtual void handle(::NetworkIdentifier const&, ::CommandOutputPacket const&);

    // vIndex: 125
    virtual void handle(::NetworkIdentifier const&, ::CommandBlockUpdatePacket const&);

    // vIndex: 124
    virtual void handle(::NetworkIdentifier const&, ::CompletedUsingItemPacket const&);

    // vIndex: 123
    virtual void handle(::NetworkIdentifier const&, ::CameraAimAssistPacket const&);

    // vIndex: 122
    virtual void handle(::NetworkIdentifier const&, ::CameraAimAssistPresetsPacket const&);

    // vIndex: 121
    virtual void handle(::NetworkIdentifier const&, ::CameraInstructionPacket const&);

    // vIndex: 120
    virtual void handle(::NetworkIdentifier const&, ::CameraPacket const&);

    // vIndex: 119
    virtual void handle(::NetworkIdentifier const&, ::CameraPresetsPacket const&);

    // vIndex: 118
    virtual void handle(::NetworkIdentifier const&, ::CameraShakePacket const&);

    // vIndex: 117
    virtual void handle(::NetworkIdentifier const&, ::InventoryActionPacket const&);

    // vIndex: 116
    virtual void handle(::NetworkIdentifier const&, ::GameRulesChangedPacket const&);

    // vIndex: 115
    virtual void handle(::NetworkIdentifier const&, ::ResourcePackDataInfoPacket const&);

    // vIndex: 114
    virtual void handle(::NetworkIdentifier const&, ::ResourcePackChunkDataPacket const&);

    // vIndex: 113
    virtual void handle(::NetworkIdentifier const&, ::ResourcePackChunkRequestPacket const&);

    // vIndex: 112
    virtual void handle(::NetworkIdentifier const&, ::NetworkChunkPublisherUpdatePacket const&);

    // vIndex: 111
    virtual void handle(::NetworkIdentifier const&, ::StructureBlockUpdatePacket const&);

    // vIndex: 110
    virtual void handle(::NetworkIdentifier const&, ::StructureTemplateDataRequestPacket const&);

    // vIndex: 109
    virtual void handle(::NetworkIdentifier const&, ::StructureTemplateDataResponsePacket const&);

    // vIndex: 108
    virtual void handle(::NetworkIdentifier const&, ::TransferPacket const&);

    // vIndex: 107
    virtual void handle(::NetworkIdentifier const&, ::PlaySoundPacket const&);

    // vIndex: 106
    virtual void handle(::NetworkIdentifier const&, ::StopSoundPacket const&);

    // vIndex: 105
    virtual void handle(::NetworkIdentifier const&, ::SetTitlePacket const&);

    // vIndex: 104
    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::InventoryTransactionPacket>);

    // vIndex: 103
    virtual void handle(::NetworkIdentifier const&, ::AddBehaviorTreePacket const&);

    // vIndex: 102
    virtual void handle(::NetworkIdentifier const&, ::ShowStoreOfferPacket const&);

    // vIndex: 101
    virtual void handle(::NetworkIdentifier const&, ::PurchaseReceiptPacket const&);

    // vIndex: 100
    virtual void handle(::NetworkIdentifier const&, ::RemoveObjectivePacket const&);

    // vIndex: 99
    virtual void handle(::NetworkIdentifier const&, ::SetDisplayObjectivePacket const&);

    // vIndex: 98
    virtual void handle(::NetworkIdentifier const&, ::AutomationClientConnectPacket const&);

    // vIndex: 97
    virtual void handle(::NetworkIdentifier const&, ::ModalFormRequestPacket const&);

    // vIndex: 96
    virtual void handle(::NetworkIdentifier const&, ::ModalFormResponsePacket const&);

    // vIndex: 95
    virtual void handle(::NetworkIdentifier const&, ::ToastRequestPacket const&);

    // vIndex: 94
    virtual void handle(::NetworkIdentifier const&, ::OnScreenTextureAnimationPacket const&);

    // vIndex: 93
    virtual void handle(::NetworkIdentifier const&, ::ServerSettingsRequestPacket const&);

    // vIndex: 92
    virtual void handle(::NetworkIdentifier const&, ::ServerSettingsResponsePacket const&);

    // vIndex: 91
    virtual void handle(::NetworkIdentifier const&, ::ShowProfilePacket const&);

    // vIndex: 90
    virtual void handle(::NetworkIdentifier const&, ::SetScorePacket const&);

    // vIndex: 89
    virtual void handle(::NetworkIdentifier const&, ::SetScoreboardIdentityPacket const&);

    // vIndex: 88
    virtual void handle(::NetworkIdentifier const&, ::TickingAreasLoadStatusPacket const&);

    // vIndex: 87
    virtual void handle(::NetworkIdentifier const&, ::UpdateSoftEnumPacket const&);

    // vIndex: 86
    virtual void handle(::NetworkIdentifier const&, ::AvailableActorIdentifiersPacket const&);

    // vIndex: 85
    virtual void handle(::NetworkIdentifier const&, ::AddVolumeEntityPacket const&);

    // vIndex: 84
    virtual void handle(::NetworkIdentifier const&, ::RemoveVolumeEntityPacket const&);

    // vIndex: 83
    virtual void handle(::NetworkIdentifier const&, ::DimensionDataPacket const&);

    // vIndex: 82
    virtual void handle(::NetworkIdentifier const&, ::EditorNetworkPacket const&);

    // vIndex: 81
    virtual void handle(::NetworkIdentifier const&, ::RefreshEntitlementsPacket const&);

    // vIndex: 80
    virtual void handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const&);

    // vIndex: 79
    virtual void handle(::NetworkIdentifier const&, ::RespawnPacket const&);

    // vIndex: 78
    virtual void handle(::NetworkIdentifier const&, ::ShowCreditsPacket const&);

    // vIndex: 77
    virtual void handle(::NetworkIdentifier const&, ::PlayerSkinPacket const&);

    // vIndex: 76
    virtual void handle(::NetworkIdentifier const&, ::PlayerStartItemCooldownPacket const&);

    // vIndex: 75
    virtual void handle(::NetworkIdentifier const&, ::PlayerToggleCrafterSlotRequestPacket const&);

    // vIndex: 74
    virtual void handle(::NetworkIdentifier const&, ::SetLastHurtByPacket const&);

    // vIndex: 73
    virtual void handle(::NetworkIdentifier const&, ::BookAddPagePacket const&);

    // vIndex: 72
    virtual void handle(::NetworkIdentifier const&, ::BookDeletePagePacket const&);

    // vIndex: 71
    virtual void handle(::NetworkIdentifier const&, ::LecternUpdatePacket const&);

    // vIndex: 70
    virtual void handle(::NetworkIdentifier const&, ::BookEditPacket const&);

    // vIndex: 69
    virtual void handle(::NetworkIdentifier const&, ::BookSignPacket const&);

    // vIndex: 68
    virtual void handle(::NetworkIdentifier const&, ::BookSwapPagesPacket const&);

    // vIndex: 67
    virtual void handle(::NetworkIdentifier const&, ::NpcRequestPacket const&);

    // vIndex: 66
    virtual void handle(::NetworkIdentifier const&, ::PhotoTransferPacket const&);

    // vIndex: 65
    virtual void handle(::NetworkIdentifier const&, ::LabTablePacket const&);

    // vIndex: 64
    virtual void handle(::NetworkIdentifier const&, ::NetworkSettingsPacket const&);

    // vIndex: 63
    virtual void handle(::NetworkIdentifier const&, ::NetworkStackLatencyPacket const&);

    // vIndex: 62
    virtual void handle(::NetworkIdentifier const&, ::ServerStatsPacket const&);

    // vIndex: 61
    virtual void handle(::NetworkIdentifier const&, ::SetLocalPlayerAsInitializedPacket const&);

    // vIndex: 60
    virtual void handle(::NetworkIdentifier const&, ::ScriptMessagePacket const&);

    // vIndex: 59
    virtual void handle(::NetworkIdentifier const&, ::BiomeDefinitionListPacket const&);

    // vIndex: 58
    virtual void handle(::NetworkIdentifier const&, ::EducationSettingsPacket const&);

    // vIndex: 57
    virtual void handle(::NetworkIdentifier const&, ::EduUriResourcePacket const&);

    // vIndex: 56
    virtual void handle(::NetworkIdentifier const&, ::MultiplayerSettingsPacket const&);

    // vIndex: 55
    virtual void handle(::NetworkIdentifier const&, ::SettingsCommandPacket const&);

    // vIndex: 54
    virtual void handle(::NetworkIdentifier const&, ::AnvilDamagePacket const&);

    // vIndex: 53
    virtual void handle(::NetworkIdentifier const&, ::CreativeContentPacket const&);

    // vIndex: 52
    virtual void handle(::NetworkIdentifier const&, ::CodeBuilderPacket const&);

    // vIndex: 51
    virtual void handle(::NetworkIdentifier const&, ::PlayerEnchantOptionsPacket const&);

    // vIndex: 50
    virtual void handle(::NetworkIdentifier const&, ::DebugInfoPacket const&);

    // vIndex: 49
    virtual void handle(::NetworkIdentifier const&, ::ChangeMobPropertyPacket const&);

    // vIndex: 48
    virtual void handle(::NetworkIdentifier const&, ::AnimateEntityPacket const&);

    // vIndex: 47
    virtual void handle(::NetworkIdentifier const&, ::CorrectPlayerMovePredictionPacket const&);

    // vIndex: 46
    virtual void handle(::NetworkIdentifier const&, ::PlayerFogPacket const&);

    // vIndex: 45
    virtual void handle(::NetworkIdentifier const&, ::ItemComponentPacket const&);

    // vIndex: 44
    virtual void handle(::NetworkIdentifier const&, ::LessonProgressPacket const&);

    // vIndex: 43
    virtual void handle(::NetworkIdentifier const&, ::FeatureRegistryPacket const&);

    // vIndex: 42
    virtual void handle(::NetworkIdentifier const&, ::SyncActorPropertyPacket const&);

    // vIndex: 41
    virtual void handle(::NetworkIdentifier const&, ::SimulationTypePacket const&);

    // vIndex: 40
    virtual void handle(::NetworkIdentifier const&, ::NpcDialoguePacket const&);

    // vIndex: 39
    virtual void handle(::NetworkIdentifier const&, ::CreatePhotoPacket const&);

    // vIndex: 38
    virtual void handle(::NetworkIdentifier const&, ::UpdateSubChunkBlocksPacket const&);

    // vIndex: 37
    virtual void handle(::NetworkIdentifier const&, ::CodeBuilderSourcePacket const&);

    // vIndex: 36
    virtual void handle(::NetworkIdentifier const&, ::AgentActionEventPacket const&);

    // vIndex: 35
    virtual void handle(::NetworkIdentifier const&, ::DeathInfoPacket const&);

    // vIndex: 34
    virtual void handle(::NetworkIdentifier const&, ::RequestAbilityPacket const&);

    // vIndex: 33
    virtual void handle(::NetworkIdentifier const&, ::RequestPermissionsPacket const&);

    // vIndex: 32
    virtual void handle(::NetworkIdentifier const&, ::UpdateAbilitiesPacket const&);

    // vIndex: 31
    virtual void handle(::NetworkIdentifier const&, ::UpdateAdventureSettingsPacket const&);

    // vIndex: 30
    virtual void handle(::NetworkIdentifier const&, ::RequestNetworkSettingsPacket const&);

    // vIndex: 29
    virtual void handle(::NetworkIdentifier const&, ::GameTestRequestPacket const&);

    // vIndex: 28
    virtual void handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&);

    // vIndex: 27
    virtual void handle(::NetworkIdentifier const&, ::UpdateClientInputLocksPacket const&);

    // vIndex: 26
    virtual void handle(::NetworkIdentifier const&, ::UnlockedRecipesPacket const&);

    // vIndex: 25
    virtual void handle(::NetworkIdentifier const&, ::CompressedBiomeDefinitionListPacket const&);

    // vIndex: 24
    virtual void handle(::NetworkIdentifier const&, ::TrimDataPacket const&);

    // vIndex: 23
    virtual void handle(::NetworkIdentifier const&, ::OpenSignPacket const&);

    // vIndex: 22
    virtual void handle(::NetworkIdentifier const&, ::AgentAnimationPacket const&);

    // vIndex: 21
    virtual void handle(::NetworkIdentifier const&, ::SetPlayerInventoryOptionsPacket const&);

    // vIndex: 20
    virtual void handle(::NetworkIdentifier const&, ::SetHudPacket const&);

    // vIndex: 19
    virtual void handle(::NetworkIdentifier const&, ::AwardAchievementPacket const&);

    // vIndex: 18
    virtual void handle(::NetworkIdentifier const&, ::ServerboundLoadingScreenPacket const&);

    // vIndex: 17
    virtual void handle(::NetworkIdentifier const&, ::ServerboundDiagnosticsPacket const&);

    // vIndex: 16
    virtual void handle(::NetworkIdentifier const&, ::JigsawStructureDataPacket const&);

    // vIndex: 15
    virtual void handle(::NetworkIdentifier const&, ::CurrentStructureFeaturePacket const&);

    // vIndex: 14
    virtual void handle(::NetworkIdentifier const&, ::SetMovementAuthorityPacket const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onPlayerReady(::Player&);

    MCAPI void $onConnect(::NetworkIdentifier const&);

    MCAPI void $onUnableToConnect(::Connection::DisconnectFailReason, ::std::string const&);

    MCAPI void $onTick();

    MCAPI void $onStoreOfferReceive(::ShowStoreOfferRedirectType const, ::std::string const& offerID);

    MCAPI void $onDisconnect(
        ::NetworkIdentifier const&,
        ::Connection::DisconnectFailReason const,
        ::std::string const& message,
        bool                 skipMessage,
        ::std::string const& telemetryOverride
    );

    MCAPI void $onWebsocketRequest(::std::string const&, ::std::string const&, ::std::function<void()>);

    MCAPI void $onTransferRequest(::NetworkIdentifier const&, ::std::string const&, int);

    MCAPI bool $getIsConnectedToApplicationLayer() const;

    MCAPI ::GameSpecificNetEventCallback* $getGameSpecificNetEventCallback();

    MCAPI void $handle(::NetworkIdentifier const&, ::PacketViolationWarningPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::DisconnectPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::EmoteListPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::EmotePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::LoginPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SubClientLoginPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ClientToServerHandshakePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ServerToClientHandshakePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ResourcePacksInfoPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ResourcePackStackPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::PositionTrackingDBClientRequestPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::PositionTrackingDBServerBroadcastPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlayStatusPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetTimePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::TextPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::StartGamePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::AddItemActorPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::AddPaintingPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::TakeItemActorPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::AddActorPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::AddMobPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::AddPlayerPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::RemoveActorPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::MoveActorAbsolutePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::MoveActorDeltaPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::MovePlayerPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::PassengerJumpPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetPlayerGameTypePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::UpdatePlayerGameTypePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetDefaultGameTypePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateBlockPacket>);

    MCAPI void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateBlockSyncedPacket>);

    MCAPI void $handle(::NetworkIdentifier const&, ::SpawnParticleEffectPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::LevelSoundEventPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::LevelSoundEventPacketV1 const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::LevelSoundEventPacketV2 const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::LevelEventPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::LevelEventGenericPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::BlockEventPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::BlockPickRequestPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ActorPickRequestPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::GuiDataPickItemPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ActorEventPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::MobEffectPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::MovementEffectPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::MobEquipmentPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::MobArmorEquipmentPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetActorDataPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetActorMotionPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::MotionPredictionHintsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetHealthPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetActorLinkPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetSpawnPositionPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::InteractPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlayerActionPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ActorFallPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::HurtArmorPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlayerArmorDamagePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ItemStackRequestPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ItemStackResponsePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ContainerOpenPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ContainerClosePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ContainerRegistryCleanupPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ContainerSetDataPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlayerHotbarPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::InventoryContentPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::InventorySlotPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::CraftingDataPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::AnimatePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::BlockActorDataPacket>);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlayerAuthInputPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlayerInputPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::LevelChunkPacket>);

    MCAPI void $handle(::NetworkIdentifier const&, ::SubChunkPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SubChunkRequestPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ClientCacheBlobStatusPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::ClientCacheMissResponsePacket>);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetCommandsEnabledPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetDifficultyPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SimpleEventPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ChangeDimensionPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateAttributesPacket>);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlayerListPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::LegacyTelemetryEventPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SpawnExperienceOrbPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ClientboundDebugRendererPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ClientboundMapItemDataPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ClientboundCloseFormPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ClientCacheStatusPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::RequestChunkRadiusPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::MapCreateLockedCopyPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::MapInfoRequestPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ChunkRadiusUpdatedPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::BossEventPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::UpdateTradePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::UpdateEquipPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::AvailableCommandsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::CommandRequestPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::CommandOutputPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::CommandBlockUpdatePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::CompletedUsingItemPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::CameraAimAssistPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::CameraAimAssistPresetsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::CameraInstructionPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::CameraPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::CameraPresetsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::CameraShakePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::InventoryActionPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::GameRulesChangedPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ResourcePackDataInfoPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ResourcePackChunkDataPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ResourcePackChunkRequestPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::NetworkChunkPublisherUpdatePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::StructureBlockUpdatePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::StructureTemplateDataRequestPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::StructureTemplateDataResponsePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::TransferPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlaySoundPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::StopSoundPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetTitlePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::InventoryTransactionPacket>);

    MCAPI void $handle(::NetworkIdentifier const&, ::AddBehaviorTreePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ShowStoreOfferPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::PurchaseReceiptPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::RemoveObjectivePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetDisplayObjectivePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::AutomationClientConnectPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ModalFormRequestPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ModalFormResponsePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ToastRequestPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::OnScreenTextureAnimationPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ServerSettingsRequestPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ServerSettingsResponsePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ShowProfilePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetScorePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetScoreboardIdentityPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::TickingAreasLoadStatusPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::UpdateSoftEnumPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::AvailableActorIdentifiersPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::AddVolumeEntityPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::RemoveVolumeEntityPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::DimensionDataPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::EditorNetworkPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::RefreshEntitlementsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::RespawnPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ShowCreditsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlayerSkinPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlayerStartItemCooldownPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlayerToggleCrafterSlotRequestPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetLastHurtByPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::BookAddPagePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::BookDeletePagePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::LecternUpdatePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::BookEditPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::BookSignPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::BookSwapPagesPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::NpcRequestPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::PhotoTransferPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::LabTablePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::NetworkSettingsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::NetworkStackLatencyPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ServerStatsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetLocalPlayerAsInitializedPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ScriptMessagePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::BiomeDefinitionListPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::EducationSettingsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::EduUriResourcePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::MultiplayerSettingsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SettingsCommandPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::AnvilDamagePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::CreativeContentPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::CodeBuilderPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlayerEnchantOptionsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::DebugInfoPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ChangeMobPropertyPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::AnimateEntityPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::CorrectPlayerMovePredictionPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlayerFogPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ItemComponentPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::LessonProgressPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::FeatureRegistryPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SyncActorPropertyPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SimulationTypePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::NpcDialoguePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::CreatePhotoPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::UpdateSubChunkBlocksPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::CodeBuilderSourcePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::AgentActionEventPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::DeathInfoPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::RequestAbilityPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::RequestPermissionsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::UpdateAbilitiesPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::UpdateAdventureSettingsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::RequestNetworkSettingsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::GameTestRequestPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::UpdateClientInputLocksPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::UnlockedRecipesPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::CompressedBiomeDefinitionListPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::TrimDataPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::OpenSignPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::AgentAnimationPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetPlayerInventoryOptionsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetHudPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::AwardAchievementPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ServerboundLoadingScreenPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ServerboundDiagnosticsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::JigsawStructureDataPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::CurrentStructureFeaturePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetMovementAuthorityPacket const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
