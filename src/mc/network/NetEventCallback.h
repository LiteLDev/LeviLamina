#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/packet/ShowStoreOfferRedirectType.h"

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
    // vIndex: 0
    virtual ~NetEventCallback();

    // vIndex: 1
    virtual void onPlayerReady(class Player&);

    // vIndex: 2
    virtual void onConnect(class NetworkIdentifier const&);

    // vIndex: 3
    virtual void onUnableToConnect(::Connection::DisconnectFailReason, std::string const&);

    // vIndex: 4
    virtual void onTick();

    // vIndex: 5
    virtual void onStoreOfferReceive(::ShowStoreOfferRedirectType, std::string const& offerID);

    // vIndex: 6
    virtual void onDisconnect(
        class NetworkIdentifier const&,
        ::Connection::DisconnectFailReason,
        std::string const& message,
        bool               skipMessage,
        std::string const& telemetryOverride
    );

    // vIndex: 7
    virtual void __unk_vfn_7() = 0;

    // vIndex: 8
    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void()>);

    // vIndex: 9
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

    // vIndex: 10
    virtual void onTransferRequest(class NetworkIdentifier const&, std::string const&, int);

    // vIndex: 11
    virtual bool getIsConnectedToApplicationLayer() const;

    // vIndex: 12
    virtual class GameSpecificNetEventCallback* getGameSpecificNetEventCallback();

    // vIndex: 13
    virtual void handle(class NetworkIdentifier const&, class PacketViolationWarningPacket const&);

    // vIndex: 14
    virtual void handle(class NetworkIdentifier const&, class DisconnectPacket const&);

    // vIndex: 15
    virtual void handle(class NetworkIdentifier const&, class EmoteListPacket const&);

    // vIndex: 16
    virtual void handle(class NetworkIdentifier const&, class EmotePacket const&);

    // vIndex: 17
    virtual void handle(class NetworkIdentifier const&, class LoginPacket const&);

    // vIndex: 18
    virtual void handle(class NetworkIdentifier const&, class SubClientLoginPacket const&);

    // vIndex: 19
    virtual void handle(class NetworkIdentifier const&, class ClientToServerHandshakePacket const&);

    // vIndex: 20
    virtual void handle(class NetworkIdentifier const&, class ServerToClientHandshakePacket const&);

    // vIndex: 21
    virtual void handle(class NetworkIdentifier const&, class ResourcePacksInfoPacket const&);

    // vIndex: 22
    virtual void handle(class NetworkIdentifier const&, class ResourcePackStackPacket const&);

    // vIndex: 23
    virtual void handle(class NetworkIdentifier const&, class ResourcePackClientResponsePacket const&);

    // vIndex: 24
    virtual void handle(class NetworkIdentifier const&, class PositionTrackingDBClientRequestPacket const&);

    // vIndex: 25
    virtual void handle(class NetworkIdentifier const&, class PositionTrackingDBServerBroadcastPacket const&);

    // vIndex: 26
    virtual void handle(class NetworkIdentifier const&, class PlayStatusPacket const&);

    // vIndex: 27
    virtual void handle(class NetworkIdentifier const&, class SetTimePacket const&);

    // vIndex: 28
    virtual void handle(class NetworkIdentifier const&, class TextPacket const&);

    // vIndex: 29
    virtual void handle(class NetworkIdentifier const&, class StartGamePacket const&);

    // vIndex: 30
    virtual void handle(class NetworkIdentifier const&, class AddItemActorPacket const&);

    // vIndex: 31
    virtual void handle(class NetworkIdentifier const&, class AddPaintingPacket const&);

    // vIndex: 32
    virtual void handle(class NetworkIdentifier const&, class TakeItemActorPacket const&);

    // vIndex: 33
    virtual void handle(class NetworkIdentifier const&, class AddActorPacket const&);

    // vIndex: 34
    virtual void handle(class NetworkIdentifier const&, class AddMobPacket const&);

    // vIndex: 35
    virtual void handle(class NetworkIdentifier const&, class AddPlayerPacket const&);

    // vIndex: 36
    virtual void handle(class NetworkIdentifier const&, class RemoveActorPacket const&);

    // vIndex: 37
    virtual void handle(class NetworkIdentifier const&, class MoveActorAbsolutePacket const&);

    // vIndex: 38
    virtual void handle(class NetworkIdentifier const&, class MoveActorDeltaPacket const&);

    // vIndex: 39
    virtual void handle(class NetworkIdentifier const&, class MovePlayerPacket const&);

    // vIndex: 40
    virtual void handle(class NetworkIdentifier const&, class PassengerJumpPacket const&);

    // vIndex: 41
    virtual void handle(class NetworkIdentifier const&, class SetPlayerGameTypePacket const&);

    // vIndex: 42
    virtual void handle(class NetworkIdentifier const&, class UpdatePlayerGameTypePacket const&);

    // vIndex: 43
    virtual void handle(class NetworkIdentifier const&, class SetDefaultGameTypePacket const&);

    // vIndex: 44
    virtual void handle(class NetworkIdentifier const&, std::shared_ptr<class UpdateBlockPacket>);

    // vIndex: 45
    virtual void handle(class NetworkIdentifier const&, std::shared_ptr<class UpdateBlockSyncedPacket>);

    // vIndex: 46
    virtual void handle(class NetworkIdentifier const&, class SpawnParticleEffectPacket const&);

    // vIndex: 47
    virtual void handle(class NetworkIdentifier const&, class LevelSoundEventPacket const&);

    // vIndex: 48
    virtual void handle(class NetworkIdentifier const&, class LevelSoundEventPacketV1 const&);

    // vIndex: 49
    virtual void handle(class NetworkIdentifier const&, class LevelSoundEventPacketV2 const&);

    // vIndex: 50
    virtual void handle(class NetworkIdentifier const&, class LevelEventPacket const&);

    // vIndex: 51
    virtual void handle(class NetworkIdentifier const&, class LevelEventGenericPacket const&);

    // vIndex: 52
    virtual void handle(class NetworkIdentifier const&, class BlockEventPacket const&);

    // vIndex: 53
    virtual void handle(class NetworkIdentifier const&, class BlockPickRequestPacket const&);

    // vIndex: 54
    virtual void handle(class NetworkIdentifier const&, class ActorPickRequestPacket const&);

    // vIndex: 55
    virtual void handle(class NetworkIdentifier const&, class GuiDataPickItemPacket const&);

    // vIndex: 56
    virtual void handle(class NetworkIdentifier const&, class ActorEventPacket const&);

    // vIndex: 57
    virtual void handle(class NetworkIdentifier const&, class MobEffectPacket const&);

    // vIndex: 58
    virtual void handle(class NetworkIdentifier const&, class MobEquipmentPacket const&);

    // vIndex: 59
    virtual void handle(class NetworkIdentifier const&, class MobArmorEquipmentPacket const&);

    // vIndex: 60
    virtual void handle(class NetworkIdentifier const&, class SetActorDataPacket const&);

    // vIndex: 61
    virtual void handle(class NetworkIdentifier const&, class SetActorMotionPacket const&);

    // vIndex: 62
    virtual void handle(class NetworkIdentifier const&, class MotionPredictionHintsPacket const&);

    // vIndex: 63
    virtual void handle(class NetworkIdentifier const&, class SetHealthPacket const&);

    // vIndex: 64
    virtual void handle(class NetworkIdentifier const&, class SetActorLinkPacket const&);

    // vIndex: 65
    virtual void handle(class NetworkIdentifier const&, class SetSpawnPositionPacket const&);

    // vIndex: 66
    virtual void handle(class NetworkIdentifier const&, class InteractPacket const&);

    // vIndex: 67
    virtual void handle(class NetworkIdentifier const&, class PlayerActionPacket const&);

    // vIndex: 68
    virtual void handle(class NetworkIdentifier const&, class ActorFallPacket const&);

    // vIndex: 69
    virtual void handle(class NetworkIdentifier const&, class HurtArmorPacket const&);

    // vIndex: 70
    virtual void handle(class NetworkIdentifier const&, class PlayerArmorDamagePacket const&);

    // vIndex: 71
    virtual void handle(class NetworkIdentifier const&, class ItemStackRequestPacket const&);

    // vIndex: 72
    virtual void handle(class NetworkIdentifier const&, class ItemStackResponsePacket const&);

    // vIndex: 73
    virtual void handle(class NetworkIdentifier const&, class ContainerOpenPacket const&);

    // vIndex: 74
    virtual void handle(class NetworkIdentifier const&, class ContainerClosePacket const&);

    // vIndex: 75
    virtual void handle(class NetworkIdentifier const&, class ContainerSetDataPacket const&);

    // vIndex: 76
    virtual void handle(class NetworkIdentifier const&, class PlayerHotbarPacket const&);

    // vIndex: 77
    virtual void handle(class NetworkIdentifier const&, class InventoryContentPacket const&);

    // vIndex: 78
    virtual void handle(class NetworkIdentifier const&, class InventorySlotPacket const&);

    // vIndex: 79
    virtual void handle(class NetworkIdentifier const&, class CraftingDataPacket const&);

    // vIndex: 80
    virtual void handle(class NetworkIdentifier const&, class AnimatePacket const&);

    // vIndex: 81
    virtual void handle(class NetworkIdentifier const&, std::shared_ptr<class BlockActorDataPacket>);

    // vIndex: 82
    virtual void handle(class NetworkIdentifier const&, class PlayerAuthInputPacket const&);

    // vIndex: 83
    virtual void handle(class NetworkIdentifier const&, class PlayerInputPacket const&);

    // vIndex: 84
    virtual void handle(class NetworkIdentifier const&, std::shared_ptr<class LevelChunkPacket>);

    // vIndex: 85
    virtual void handle(class NetworkIdentifier const&, class SubChunkPacket const&);

    // vIndex: 86
    virtual void handle(class NetworkIdentifier const&, class SubChunkRequestPacket const&);

    // vIndex: 87
    virtual void handle(class NetworkIdentifier const&, class ClientCacheBlobStatusPacket const&);

    // vIndex: 88
    virtual void handle(class NetworkIdentifier const&, std::shared_ptr<class ClientCacheMissResponsePacket>);

    // vIndex: 89
    virtual void handle(class NetworkIdentifier const&, class SetCommandsEnabledPacket const&);

    // vIndex: 90
    virtual void handle(class NetworkIdentifier const&, class SetDifficultyPacket const&);

    // vIndex: 91
    virtual void handle(class NetworkIdentifier const&, class SimpleEventPacket const&);

    // vIndex: 92
    virtual void handle(class NetworkIdentifier const&, class ChangeDimensionPacket const&);

    // vIndex: 93
    virtual void handle(class NetworkIdentifier const&, std::shared_ptr<class UpdateAttributesPacket>);

    // vIndex: 94
    virtual void handle(class NetworkIdentifier const&, class PlayerListPacket const&);

    // vIndex: 95
    virtual void handle(class NetworkIdentifier const&, class LegacyTelemetryEventPacket const&);

    // vIndex: 96
    virtual void handle(class NetworkIdentifier const&, class SpawnExperienceOrbPacket const&);

    // vIndex: 97
    virtual void handle(class NetworkIdentifier const&, class ClientboundDebugRendererPacket const&);

    // vIndex: 98
    virtual void handle(class NetworkIdentifier const&, class ClientboundMapItemDataPacket const&);

    // vIndex: 99
    virtual void handle(class NetworkIdentifier const&, class ClientboundCloseFormPacket const&);

    // vIndex: 100
    virtual void handle(class NetworkIdentifier const&, class ClientCacheStatusPacket const&);

    // vIndex: 101
    virtual void handle(class NetworkIdentifier const&, class RequestChunkRadiusPacket const&);

    // vIndex: 102
    virtual void handle(class NetworkIdentifier const&, class MapCreateLockedCopyPacket const&);

    // vIndex: 103
    virtual void handle(class NetworkIdentifier const&, class MapInfoRequestPacket const&);

    // vIndex: 104
    virtual void handle(class NetworkIdentifier const&, class ChunkRadiusUpdatedPacket const&);

    // vIndex: 105
    virtual void handle(class NetworkIdentifier const&, class BossEventPacket const&);

    // vIndex: 106
    virtual void handle(class NetworkIdentifier const&, class UpdateTradePacket const&);

    // vIndex: 107
    virtual void handle(class NetworkIdentifier const&, class UpdateEquipPacket const&);

    // vIndex: 108
    virtual void handle(class NetworkIdentifier const&, class AvailableCommandsPacket const&);

    // vIndex: 109
    virtual void handle(class NetworkIdentifier const&, class CommandRequestPacket const&);

    // vIndex: 110
    virtual void handle(class NetworkIdentifier const&, class CommandOutputPacket const&);

    // vIndex: 111
    virtual void handle(class NetworkIdentifier const&, class CommandBlockUpdatePacket const&);

    // vIndex: 112
    virtual void handle(class NetworkIdentifier const&, class CompletedUsingItemPacket const&);

    // vIndex: 113
    virtual void handle(class NetworkIdentifier const&, class CameraInstructionPacket const&);

    // vIndex: 114
    virtual void handle(class NetworkIdentifier const&, class CameraPacket const&);

    // vIndex: 115
    virtual void handle(class NetworkIdentifier const&, class CameraPresetsPacket const&);

    // vIndex: 116
    virtual void handle(class NetworkIdentifier const&, class CameraShakePacket const&);

    // vIndex: 117
    virtual void handle(class NetworkIdentifier const&, class InventoryActionPacket const&);

    // vIndex: 118
    virtual void handle(class NetworkIdentifier const&, class GameRulesChangedPacket const&);

    // vIndex: 119
    virtual void handle(class NetworkIdentifier const&, class ResourcePackDataInfoPacket const&);

    // vIndex: 120
    virtual void handle(class NetworkIdentifier const&, class ResourcePackChunkDataPacket const&);

    // vIndex: 121
    virtual void handle(class NetworkIdentifier const&, class ResourcePackChunkRequestPacket const&);

    // vIndex: 122
    virtual void handle(class NetworkIdentifier const&, class NetworkChunkPublisherUpdatePacket const&);

    // vIndex: 123
    virtual void handle(class NetworkIdentifier const&, class StructureBlockUpdatePacket const&);

    // vIndex: 124
    virtual void handle(class NetworkIdentifier const&, class StructureTemplateDataRequestPacket const&);

    // vIndex: 125
    virtual void handle(class NetworkIdentifier const&, class StructureTemplateDataResponsePacket const&);

    // vIndex: 126
    virtual void handle(class NetworkIdentifier const&, class TransferPacket const&);

    // vIndex: 127
    virtual void handle(class NetworkIdentifier const&, class PlaySoundPacket const&);

    // vIndex: 128
    virtual void handle(class NetworkIdentifier const&, class StopSoundPacket const&);

    // vIndex: 129
    virtual void handle(class NetworkIdentifier const&, class SetTitlePacket const&);

    // vIndex: 130
    virtual void handle(class NetworkIdentifier const&, std::shared_ptr<class InventoryTransactionPacket>);

    // vIndex: 131
    virtual void handle(class NetworkIdentifier const&, class AddBehaviorTreePacket const&);

    // vIndex: 132
    virtual void handle(class NetworkIdentifier const&, class ShowStoreOfferPacket const&);

    // vIndex: 133
    virtual void handle(class NetworkIdentifier const&, class PurchaseReceiptPacket const&);

    // vIndex: 134
    virtual void handle(class NetworkIdentifier const&, class RemoveObjectivePacket const&);

    // vIndex: 135
    virtual void handle(class NetworkIdentifier const&, class SetDisplayObjectivePacket const&);

    // vIndex: 136
    virtual void handle(class NetworkIdentifier const&, class AutomationClientConnectPacket const&);

    // vIndex: 137
    virtual void handle(class NetworkIdentifier const&, class ModalFormRequestPacket const&);

    // vIndex: 138
    virtual void handle(class NetworkIdentifier const&, class ModalFormResponsePacket const&);

    // vIndex: 139
    virtual void handle(class NetworkIdentifier const&, class ToastRequestPacket const&);

    // vIndex: 140
    virtual void handle(class NetworkIdentifier const&, class OnScreenTextureAnimationPacket const&);

    // vIndex: 141
    virtual void handle(class NetworkIdentifier const&, class ServerSettingsRequestPacket const&);

    // vIndex: 142
    virtual void handle(class NetworkIdentifier const&, class ServerSettingsResponsePacket const&);

    // vIndex: 143
    virtual void handle(class NetworkIdentifier const&, class ShowProfilePacket const&);

    // vIndex: 144
    virtual void handle(class NetworkIdentifier const&, class SetScorePacket const&);

    // vIndex: 145
    virtual void handle(class NetworkIdentifier const&, class SetScoreboardIdentityPacket const&);

    // vIndex: 146
    virtual void handle(class NetworkIdentifier const&, class TickingAreasLoadStatusPacket const&);

    // vIndex: 147
    virtual void handle(class NetworkIdentifier const&, class UpdateSoftEnumPacket const&);

    // vIndex: 148
    virtual void handle(class NetworkIdentifier const&, class AvailableActorIdentifiersPacket const&);

    // vIndex: 149
    virtual void handle(class NetworkIdentifier const&, class AddVolumeEntityPacket const&);

    // vIndex: 150
    virtual void handle(class NetworkIdentifier const&, class RemoveVolumeEntityPacket const&);

    // vIndex: 151
    virtual void handle(class NetworkIdentifier const&, class DimensionDataPacket const&);

    // vIndex: 152
    virtual void handle(class NetworkIdentifier const&, class EditorNetworkPacket const&);

    // vIndex: 153
    virtual void handle(class NetworkIdentifier const&, class RefreshEntitlementsPacket const&);

    // vIndex: 154
    virtual void handle(class NetworkIdentifier const&, class ServerPlayerPostMovePositionPacket const&);

    // vIndex: 155
    virtual void handle(class NetworkIdentifier const&, class RespawnPacket const&);

    // vIndex: 156
    virtual void handle(class NetworkIdentifier const&, class ShowCreditsPacket const&);

    // vIndex: 157
    virtual void handle(class NetworkIdentifier const&, class PlayerSkinPacket const&);

    // vIndex: 158
    virtual void handle(class NetworkIdentifier const&, class PlayerStartItemCooldownPacket const&);

    // vIndex: 159
    virtual void handle(class NetworkIdentifier const&, class PlayerToggleCrafterSlotRequestPacket const&);

    // vIndex: 160
    virtual void handle(class NetworkIdentifier const&, class SetLastHurtByPacket const&);

    // vIndex: 161
    virtual void handle(class NetworkIdentifier const&, class BookAddPagePacket const&);

    // vIndex: 162
    virtual void handle(class NetworkIdentifier const&, class BookDeletePagePacket const&);

    // vIndex: 163
    virtual void handle(class NetworkIdentifier const&, class LecternUpdatePacket const&);

    // vIndex: 164
    virtual void handle(class NetworkIdentifier const&, class BookEditPacket const&);

    // vIndex: 165
    virtual void handle(class NetworkIdentifier const&, class BookSignPacket const&);

    // vIndex: 166
    virtual void handle(class NetworkIdentifier const&, class BookSwapPagesPacket const&);

    // vIndex: 167
    virtual void handle(class NetworkIdentifier const&, class NpcRequestPacket const&);

    // vIndex: 168
    virtual void handle(class NetworkIdentifier const&, class PhotoTransferPacket const&);

    // vIndex: 169
    virtual void handle(class NetworkIdentifier const&, class LabTablePacket const&);

    // vIndex: 170
    virtual void handle(class NetworkIdentifier const&, class NetworkSettingsPacket const&);

    // vIndex: 171
    virtual void handle(class NetworkIdentifier const&, class NetworkStackLatencyPacket const&);

    // vIndex: 172
    virtual void handle(class NetworkIdentifier const&, class ServerStatsPacket const&);

    // vIndex: 173
    virtual void handle(class NetworkIdentifier const&, class SetLocalPlayerAsInitializedPacket const&);

    // vIndex: 174
    virtual void handle(class NetworkIdentifier const&, class ScriptMessagePacket const&);

    // vIndex: 175
    virtual void handle(class NetworkIdentifier const&, class BiomeDefinitionListPacket const&);

    // vIndex: 176
    virtual void handle(class NetworkIdentifier const&, class EducationSettingsPacket const&);

    // vIndex: 177
    virtual void handle(class NetworkIdentifier const&, class EduUriResourcePacket const&);

    // vIndex: 178
    virtual void handle(class NetworkIdentifier const&, class MultiplayerSettingsPacket const&);

    // vIndex: 179
    virtual void handle(class NetworkIdentifier const&, class SettingsCommandPacket const&);

    // vIndex: 180
    virtual void handle(class NetworkIdentifier const&, class AnvilDamagePacket const&);

    // vIndex: 181
    virtual void handle(class NetworkIdentifier const&, class CreativeContentPacket const&);

    // vIndex: 182
    virtual void handle(class NetworkIdentifier const&, class CodeBuilderPacket const&);

    // vIndex: 183
    virtual void handle(class NetworkIdentifier const&, class PlayerEnchantOptionsPacket const&);

    // vIndex: 184
    virtual void handle(class NetworkIdentifier const&, class DebugInfoPacket const&);

    // vIndex: 185
    virtual void handle(class NetworkIdentifier const&, class ChangeMobPropertyPacket const&);

    // vIndex: 186
    virtual void handle(class NetworkIdentifier const&, class AnimateEntityPacket const&);

    // vIndex: 187
    virtual void handle(class NetworkIdentifier const&, class CorrectPlayerMovePredictionPacket const&);

    // vIndex: 188
    virtual void handle(class NetworkIdentifier const&, class PlayerFogPacket const&);

    // vIndex: 189
    virtual void handle(class NetworkIdentifier const&, class ItemComponentPacket const&);

    // vIndex: 190
    virtual void handle(class NetworkIdentifier const&, class LessonProgressPacket const&);

    // vIndex: 191
    virtual void handle(class NetworkIdentifier const&, class FeatureRegistryPacket const&);

    // vIndex: 192
    virtual void handle(class NetworkIdentifier const&, class SyncActorPropertyPacket const&);

    // vIndex: 193
    virtual void handle(class NetworkIdentifier const&, class SimulationTypePacket const&);

    // vIndex: 194
    virtual void handle(class NetworkIdentifier const&, class NpcDialoguePacket const&);

    // vIndex: 195
    virtual void handle(class NetworkIdentifier const&, class CreatePhotoPacket const&);

    // vIndex: 196
    virtual void handle(class NetworkIdentifier const&, class UpdateSubChunkBlocksPacket const&);

    // vIndex: 197
    virtual void handle(class NetworkIdentifier const&, class CodeBuilderSourcePacket const&);

    // vIndex: 198
    virtual void handle(class NetworkIdentifier const&, class AgentActionEventPacket const&);

    // vIndex: 199
    virtual void handle(class NetworkIdentifier const&, class DeathInfoPacket const&);

    // vIndex: 200
    virtual void handle(class NetworkIdentifier const&, class RequestAbilityPacket const&);

    // vIndex: 201
    virtual void handle(class NetworkIdentifier const&, class RequestPermissionsPacket const&);

    // vIndex: 202
    virtual void handle(class NetworkIdentifier const&, class UpdateAbilitiesPacket const&);

    // vIndex: 203
    virtual void handle(class NetworkIdentifier const&, class UpdateAdventureSettingsPacket const&);

    // vIndex: 204
    virtual void handle(class NetworkIdentifier const&, class RequestNetworkSettingsPacket const&);

    // vIndex: 205
    virtual void handle(class NetworkIdentifier const&, class GameTestRequestPacket const&);

    // vIndex: 206
    virtual void handle(class NetworkIdentifier const&, class GameTestResultsPacket const&);

    // vIndex: 207
    virtual void handle(class NetworkIdentifier const&, class UpdateClientInputLocksPacket const&);

    // vIndex: 208
    virtual void handle(class NetworkIdentifier const&, class UnlockedRecipesPacket const&);

    // vIndex: 209
    virtual void handle(class NetworkIdentifier const&, class CompressedBiomeDefinitionListPacket const&);

    // vIndex: 210
    virtual void handle(class NetworkIdentifier const&, class TrimDataPacket const&);

    // vIndex: 211
    virtual void handle(class NetworkIdentifier const&, class OpenSignPacket const&);

    // vIndex: 212
    virtual void handle(class NetworkIdentifier const&, class AgentAnimationPacket const&);

    // vIndex: 213
    virtual void handle(class NetworkIdentifier const&, class SetPlayerInventoryOptionsPacket const&);

    // vIndex: 214
    virtual void handle(class NetworkIdentifier const&, class SetHudPacket const&);

    // vIndex: 215
    virtual void handle(class NetworkIdentifier const&, class AwardAchievementPacket const&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI class GameSpecificNetEventCallback* getGameSpecificNetEventCallback$();

    MCAPI bool getIsConnectedToApplicationLayer$() const;

    MCAPI void handle$(class NetworkIdentifier const&, class PacketViolationWarningPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class DisconnectPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class EmoteListPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class EmotePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class LoginPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SubClientLoginPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ClientToServerHandshakePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ServerToClientHandshakePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ResourcePacksInfoPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ResourcePackStackPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ResourcePackClientResponsePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class PositionTrackingDBClientRequestPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class PositionTrackingDBServerBroadcastPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class PlayStatusPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SetTimePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class TextPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class StartGamePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class AddItemActorPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class AddPaintingPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class TakeItemActorPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class AddActorPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class AddMobPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class AddPlayerPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class RemoveActorPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class MoveActorAbsolutePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class MoveActorDeltaPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class MovePlayerPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class PassengerJumpPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SetPlayerGameTypePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class UpdatePlayerGameTypePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SetDefaultGameTypePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, std::shared_ptr<class UpdateBlockPacket>);

    MCAPI void handle$(class NetworkIdentifier const&, std::shared_ptr<class UpdateBlockSyncedPacket>);

    MCAPI void handle$(class NetworkIdentifier const&, class SpawnParticleEffectPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class LevelSoundEventPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class LevelSoundEventPacketV1 const&);

    MCAPI void handle$(class NetworkIdentifier const&, class LevelSoundEventPacketV2 const&);

    MCAPI void handle$(class NetworkIdentifier const&, class LevelEventPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class LevelEventGenericPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class BlockEventPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class BlockPickRequestPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ActorPickRequestPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class GuiDataPickItemPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ActorEventPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class MobEffectPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class MobEquipmentPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class MobArmorEquipmentPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SetActorDataPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SetActorMotionPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class MotionPredictionHintsPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SetHealthPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SetActorLinkPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SetSpawnPositionPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class InteractPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class PlayerActionPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ActorFallPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class HurtArmorPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class PlayerArmorDamagePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ItemStackRequestPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ItemStackResponsePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ContainerOpenPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ContainerClosePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ContainerSetDataPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class PlayerHotbarPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class InventoryContentPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class InventorySlotPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class CraftingDataPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class AnimatePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, std::shared_ptr<class BlockActorDataPacket>);

    MCAPI void handle$(class NetworkIdentifier const&, class PlayerAuthInputPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class PlayerInputPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, std::shared_ptr<class LevelChunkPacket>);

    MCAPI void handle$(class NetworkIdentifier const&, class SubChunkPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SubChunkRequestPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ClientCacheBlobStatusPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, std::shared_ptr<class ClientCacheMissResponsePacket>);

    MCAPI void handle$(class NetworkIdentifier const&, class SetCommandsEnabledPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SetDifficultyPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SimpleEventPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ChangeDimensionPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, std::shared_ptr<class UpdateAttributesPacket>);

    MCAPI void handle$(class NetworkIdentifier const&, class PlayerListPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class LegacyTelemetryEventPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SpawnExperienceOrbPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ClientboundDebugRendererPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ClientboundMapItemDataPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ClientboundCloseFormPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ClientCacheStatusPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class RequestChunkRadiusPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class MapCreateLockedCopyPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class MapInfoRequestPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ChunkRadiusUpdatedPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class BossEventPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class UpdateTradePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class UpdateEquipPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class AvailableCommandsPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class CommandRequestPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class CommandOutputPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class CommandBlockUpdatePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class CompletedUsingItemPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class CameraInstructionPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class CameraPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class CameraPresetsPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class CameraShakePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class InventoryActionPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class GameRulesChangedPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ResourcePackDataInfoPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ResourcePackChunkDataPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ResourcePackChunkRequestPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class NetworkChunkPublisherUpdatePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class StructureBlockUpdatePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class StructureTemplateDataRequestPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class StructureTemplateDataResponsePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class TransferPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class PlaySoundPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class StopSoundPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SetTitlePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, std::shared_ptr<class InventoryTransactionPacket>);

    MCAPI void handle$(class NetworkIdentifier const&, class AddBehaviorTreePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ShowStoreOfferPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class PurchaseReceiptPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class RemoveObjectivePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SetDisplayObjectivePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class AutomationClientConnectPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ModalFormRequestPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ModalFormResponsePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ToastRequestPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class OnScreenTextureAnimationPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ServerSettingsRequestPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ServerSettingsResponsePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ShowProfilePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SetScorePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SetScoreboardIdentityPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class TickingAreasLoadStatusPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class UpdateSoftEnumPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class AvailableActorIdentifiersPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class AddVolumeEntityPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class RemoveVolumeEntityPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class DimensionDataPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class EditorNetworkPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class RefreshEntitlementsPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ServerPlayerPostMovePositionPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class RespawnPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ShowCreditsPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class PlayerSkinPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class PlayerStartItemCooldownPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class PlayerToggleCrafterSlotRequestPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SetLastHurtByPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class BookAddPagePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class BookDeletePagePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class LecternUpdatePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class BookEditPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class BookSignPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class BookSwapPagesPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class NpcRequestPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class PhotoTransferPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class LabTablePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class NetworkSettingsPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class NetworkStackLatencyPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ServerStatsPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SetLocalPlayerAsInitializedPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ScriptMessagePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class BiomeDefinitionListPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class EducationSettingsPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class EduUriResourcePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class MultiplayerSettingsPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SettingsCommandPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class AnvilDamagePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class CreativeContentPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class CodeBuilderPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class PlayerEnchantOptionsPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class DebugInfoPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ChangeMobPropertyPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class AnimateEntityPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class CorrectPlayerMovePredictionPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class PlayerFogPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class ItemComponentPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class LessonProgressPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class FeatureRegistryPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SyncActorPropertyPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SimulationTypePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class NpcDialoguePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class CreatePhotoPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class UpdateSubChunkBlocksPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class CodeBuilderSourcePacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class AgentActionEventPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class DeathInfoPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class RequestAbilityPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class RequestPermissionsPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class UpdateAbilitiesPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class UpdateAdventureSettingsPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class RequestNetworkSettingsPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class GameTestRequestPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class GameTestResultsPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class UpdateClientInputLocksPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class UnlockedRecipesPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class CompressedBiomeDefinitionListPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class TrimDataPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class OpenSignPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class AgentAnimationPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SetPlayerInventoryOptionsPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class SetHudPacket const&);

    MCAPI void handle$(class NetworkIdentifier const&, class AwardAchievementPacket const&);

    MCAPI void onConnect$(class NetworkIdentifier const&);

    MCAPI void onDisconnect$(
        class NetworkIdentifier const&,
        ::Connection::DisconnectFailReason,
        std::string const& message,
        bool               skipMessage,
        std::string const& telemetryOverride
    );

    MCAPI void onPlayerReady$(class Player&);

    MCAPI void onStoreOfferReceive$(::ShowStoreOfferRedirectType, std::string const& offerID);

    MCAPI void onTick$();

    MCAPI void onTransferRequest$(class NetworkIdentifier const&, std::string const&, int);

    MCAPI void onUnableToConnect$(::Connection::DisconnectFailReason, std::string const&);

    MCAPI void onWebsocketRequest$(std::string const&, std::string const&, std::function<void()>);

    MCAPI void sendPacketViolationDetectedTelemetryData$(
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

    // NOLINTEND
};
