#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/math/PairHash.h"
#include "mc/deps/core/math/TupleHash.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/network/IncomingPacketFilterResult.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetEventCallback.h"
#include "mc/network/OutgoingPacketFilterResult.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/connection/DisconnectionStage.h"
#include "mc/network/packet/ShowStoreOfferRedirectType.h"
#include "mc/network/packet/SubChunkPacket.h"

// auto generated forward declare list
// clang-format off
class ActorEventPacket;
class AddBehaviorTreePacket;
class AddVolumeEntityPacket;
class AgentActionEventPacket;
class AgentAnimationPacket;
class AnimateEntityPacket;
class AutomationClientConnectPacket;
class AvailableActorIdentifiersPacket;
class AvailableCommandsPacket;
class AwardAchievementPacket;
class BiomeDefinitionListPacket;
class BlockPos;
class BlockSource;
class BossEventPacket;
class CameraAimAssistPacket;
class CameraAimAssistPresetsPacket;
class CameraInstructionPacket;
class CameraPacket;
class CameraPresetsPacket;
class CameraShakePacket;
class ChunkPos;
class ChunkRadiusUpdatedPacket;
class ClientNetworkSystem;
class ClientboundCloseFormPacket;
class ClientboundControlSchemeSetPacket;
class ClientboundDebugRendererPacket;
class ClientboundMapItemDataPacket;
class CodeBuilderPacket;
class CommandOutputPacket;
class CommandRequestPacket;
class CompletedUsingItemPacket;
class CorrectPlayerMovePredictionPacket;
class CraftingDataPacket;
class CurrentStructureFeaturePacket;
class DataStoreSyncPacket;
class DeathInfoPacket;
class DebugDrawerPacket;
class DebugInfoPacket;
class Dimension;
class EditorNetworkPacket;
class EduUriResourcePacket;
class EducationSettingsPacket;
class EmoteListPacket;
class EmotePacket;
class FeatureRegistryPacket;
class GameTestResultsPacket;
class GraphicsOverrideParameterPacket;
class GuiDataPickItemPacket;
class IClientInstance;
class IGameConnectionListener;
class IGameServerStartup;
class ILevel;
class IPacketSecurityController;
class ItemStackResponsePacket;
class JigsawStructureDataPacket;
class LabTablePacket;
class LegacyTelemetryEventPacket;
class LessonProgressPacket;
class LevelEventGenericPacket;
class LevelEventPacket;
class LevelSoundEventPacket;
class LocalPlayer;
class MinecraftCommands;
class ModalFormRequestPacket;
class MultiplayerSettingsPacket;
class NetworkChunkPublisherUpdatePacket;
class NetworkIdentifier;
class NpcDialoguePacket;
class OnScreenTextureAnimationPacket;
class OpenSignPacket;
class Packet;
class PacketSender;
class PhotoTransferPacket;
class PlaySoundPacket;
class PlayStatusPacket;
class PlayerActionPacket;
class PlayerArmorDamagePacket;
class PlayerEnchantOptionsPacket;
class PlayerFogPacket;
class PlayerLocationPacket;
class PlayerStartItemCooldownPacket;
class PlayerVideoCapturePacket;
class PositionTrackingDBServerBroadcastPacket;
class PrivateKeyManager;
class RefreshEntitlementsPacket;
class RemoveObjectivePacket;
class RemoveVolumeEntityPacket;
class ResourcePackChunkDataPacket;
class ResourcePackDataInfoPacket;
class ResourcePackStackPacket;
class ResourcePacksInfoPacket;
class RespawnPacket;
class ScriptMessagePacket;
class ServerPlayerPostMovePositionPacket;
class ServerSettingsResponsePacket;
class ServerToClientHandshakePacket;
class SetDisplayObjectivePacket;
class SetLastHurtByPacket;
class SetPlayerGameTypePacket;
class SetPlayerInventoryOptionsPacket;
class SetScorePacket;
class SetScoreboardIdentityPacket;
class SetTitlePacket;
class ShowCreditsPacket;
class ShowProfilePacket;
class ShowStoreOfferPacket;
class SimpleEventPacket;
class SimulationTypePacket;
class StopSoundPacket;
class StructureTemplateDataResponsePacket;
class SubChunkPacket;
class SyncActorPropertyPacket;
class TakeItemActorPacket;
class TaskGroup;
class TextPacket;
class TickingAreasLoadStatusPacket;
class ToastRequestPacket;
class TransferPacket;
class TrimDataPacket;
class UnlockedRecipesClientComponent;
class UnlockedRecipesPacket;
class UpdateAttributesPacket;
class UpdateClientInputLocksPacket;
class UpdateEquipPacket;
class UpdatePlayerGameTypePacket;
class UpdateSoftEnumPacket;
class UpdateSubChunkBlocksPacket;
class UpdateTradePacket;
struct CachedHostPackIdProvider;
struct NetworkIdentifierWithSubId;
struct VideoCaptureSessionManager;
namespace ClientBlobCache { struct Cache; }
namespace SharedTypes::v1_21_20 { struct JigsawStructureData; }
// clang-format on

class ClientNetworkHandler : public ::NetEventCallback {
public:
    // ClientNetworkHandler inner types declare
    // clang-format off
    struct PackDependencies;
    // clang-format on

    // ClientNetworkHandler inner types define
    struct PackDependencies {};

    using ChunkKey = ::std::pair<::Dimension const*, ::ChunkPos>;

    using ChunkCallbackKey = ::std::tuple<::NetworkIdentifier, ::Dimension const*, ::ChunkPos>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlobCache::Cache>>                    mBlobCache;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MPMCQueue<uint64>>>                         mCacheMisses;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MPMCQueue<uint64>>>                         mCacheHits;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SharedTypes::v1_21_20::JigsawStructureData>> mJigsawStructureData;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                              mClient;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::IGameConnectionListener>>                     mGameConnectionListener;
    ::ll::TypedStorage<8, 8, ::IGameServerStartup&>                                           mGameServerStartup;
    ::ll::TypedStorage<8, 8, ::ClientNetworkSystem&>                                          mNetwork;
    ::ll::TypedStorage<8, 8, ::PacketSender&>                                                 mPacketSender;
    ::ll::TypedStorage<8, 8, ::PrivateKeyManager&>                                            mClientKeys;
    ::ll::TypedStorage<8, 8, ::MinecraftCommands&>                                            mMinecraftCommands;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ILevel>>                           mLevel;
    ::ll::TypedStorage<1, 1, bool>                                                            mHasMessage;
    ::ll::TypedStorage<1, 1, bool>                                                            mIsLoggedIn;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                                        mExistenceTracker;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::pair<::Dimension const*, ::ChunkPos>,
            uint64,
            ::mce::Math::PairHash,
            ::std::equal_to<::std::pair<::Dimension const*, ::ChunkPos>>>>
        mPendingChunks;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::tuple<::NetworkIdentifier, ::Dimension const*, ::ChunkPos>,
            ::std::function<void(::BlockSource&)>,
            ::mce::Math::TupleHash,
            ::std::equal_to<::std::tuple<::NetworkIdentifier, ::Dimension const*, ::ChunkPos>>>>
                                                                                        mConnectionPausedCallbacks;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                            mIOTaskGroup;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::VideoCaptureSessionManager>> mVideoCaptureSessionManager;
    ::ll::TypedStorage<8, 72, ::ClientNetworkHandler::PackDependencies>                 mPackDependencies;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::CachedHostPackIdProvider>>            mCachedHostPackIdProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                          mHostPacksReceivedSub;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientNetworkHandler& operator=(ClientNetworkHandler const&);
    ClientNetworkHandler(ClientNetworkHandler const&);
    ClientNetworkHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientNetworkHandler() /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ActorEventPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AddBehaviorTreePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AnimateEntityPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AvailableActorIdentifiersPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::AvailableCommandsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AutomationClientConnectPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::BiomeDefinitionListPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::BossEventPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CameraAimAssistPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CameraAimAssistPresetsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CameraInstructionPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CameraPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CameraPresetsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CameraShakePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ChunkRadiusUpdatedPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientboundControlSchemeSetPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientboundMapItemDataPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::CommandOutputPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::CommandRequestPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CompletedUsingItemPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CraftingDataPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::EmoteListPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::DebugInfoPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::EmotePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::LegacyTelemetryEventPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::FeatureRegistryPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::LessonProgressPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::GuiDataPickItemPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ItemStackResponsePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::LabTablePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::LevelEventPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::LevelEventGenericPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::LevelSoundEventPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ModalFormRequestPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ToastRequestPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::OnScreenTextureAnimationPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::NetworkChunkPublisherUpdatePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PhotoTransferPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::PlayerArmorDamagePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::PlayerStartItemCooldownPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlaySoundPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::PlayStatusPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerFogPacket const& packet) /*override*/;

    virtual void
    handle(::NetworkIdentifier const& source, ::PositionTrackingDBServerBroadcastPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::RemoveObjectivePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackChunkDataPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ResourcePackDataInfoPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ResourcePacksInfoPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ResourcePackStackPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::RespawnPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ScriptMessagePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ServerSettingsResponsePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ServerToClientHandshakePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetDisplayObjectivePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetLastHurtByPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetPlayerGameTypePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::UpdatePlayerGameTypePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetScoreboardIdentityPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetScorePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetTitlePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ShowCreditsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ShowProfilePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ShowStoreOfferPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SimpleEventPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::StopSoundPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SubChunkPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::TakeItemActorPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::TextPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::TickingAreasLoadStatusPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::TransferPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateAttributesPacket> packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::UpdateEquipPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::UpdateSoftEnumPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::UpdateTradePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::StructureTemplateDataResponsePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::EducationSettingsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::EduUriResourcePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::MultiplayerSettingsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerEnchantOptionsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CodeBuilderPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CorrectPlayerMovePredictionPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SyncActorPropertyPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::NpcDialoguePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ClientboundDebugRendererPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AddVolumeEntityPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::RemoveVolumeEntityPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SimulationTypePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AgentActionEventPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::UpdateSubChunkBlocksPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::DeathInfoPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::EditorNetworkPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::UpdateClientInputLocksPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerActionPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::UnlockedRecipesPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::TrimDataPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::OpenSignPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AgentAnimationPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::RefreshEntitlementsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetPlayerInventoryOptionsPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AwardAchievementPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ClientboundCloseFormPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::JigsawStructureDataPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CurrentStructureFeaturePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::PlayerVideoCapturePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::DebugDrawerPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerLocationPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::DataStoreSyncPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::GraphicsOverrideParameterPacket const& packet) /*override*/;

    virtual void
    onStoreOfferReceive(::ShowStoreOfferRedirectType const redirectType, ::std::string const& offerID) /*override*/;

    virtual void onDisconnect(
        ::NetworkIdentifier const&               source,
        ::Connection::DisconnectFailReason const discoReason,
        ::Connection::DisconnectionStage const   disconnectStage,
        ::std::string const&                     message,
        bool                                     skipMessage,
        ::std::string const&                     telemetryOverride
    ) /*override*/;

    virtual ::IncomingPacketFilterResult allowIncomingPacketId(
        ::NetworkIdentifierWithSubId const& id,
        ::MinecraftPacketIds                packetId,
        uint64                              packetSize
    ) /*override*/;

    virtual ::OutgoingPacketFilterResult
    allowOutgoingPacket(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet) /*override*/;

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
    ) /*override*/;

    virtual void sendPacketViolationWarningPacket(
        ::std::error_code const&,
        ::PacketViolationResponse,
        ::MinecraftPacketIds,
        ::std::string const&,
        ::NetworkIdentifier const&,
        ::SubClientId
    ) /*override*/;

    virtual void onSuccessfulLogin(::NetworkIdentifier const& id);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ClientNetworkHandler(
        ::std::weak_ptr<::IGameConnectionListener>               gameConnectionListener,
        ::IGameServerStartup&                                    gameServerStartup,
        ::ClientNetworkSystem&                                   network,
        ::PacketSender&                                          packetSender,
        ::PrivateKeyManager&                                     clientKeys,
        ::IClientInstance&                                       client,
        ::MinecraftCommands&                                     commands,
        ::std::shared_ptr<::ClientBlobCache::Cache>              clientBlobCache,
        ::Bedrock::NonOwnerPointer<::ILevel> const&              level,
        ::Bedrock::NonOwnerPointer<::VideoCaptureSessionManager> videoCaptureSessionManager,
        ::ClientNetworkHandler::PackDependencies&&               packDependencies
    );

    MCAPI void _disconnectFromServer(::NetworkIdentifier const& source);

    MCAPI ::ILevel* _getLevelIfValid();

    MCAPI void _handleLevelEvent(::SharedTypes::Legacy::LevelEvent type, ::LevelEventPacket const& packet);

    MCAPI void _handleLevelMusicEvent(::SharedTypes::Legacy::LevelEvent type, ::LevelEventGenericPacket const& packet);

    MCAPI void _handleSubChunkData(
        ::NetworkIdentifier const&,
        ::SubChunkPacket const&                     packet,
        ::SubChunkPacket::SubChunkPacketData const& subChunkData,
        ::LocalPlayer const*                        localPlayer,
        bool                                        levelAndPlayerExists
    );

    MCAPI void
    _handleUnlockedRecipes(::UnlockedRecipesPacket const& packet, ::UnlockedRecipesClientComponent& component);

    MCAPI void _respondBlobCacheStatusForSubChunk(::SubChunkPacket::SubChunkPacketData const& subChunkData);

    MCAPI void
    onChunkHandleCompleted(::NetworkIdentifier const& source, ::ChunkPos const& cp, ::Dimension const& dimension);

    MCAPI void queueHandleWorldChangePacket(
        ::NetworkIdentifier const&              source,
        ::BlockPos const&                       requiredPos,
        ::std::function<void(::BlockSource&)>&& handler
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::weak_ptr<::IGameConnectionListener>               gameConnectionListener,
        ::IGameServerStartup&                                    gameServerStartup,
        ::ClientNetworkSystem&                                   network,
        ::PacketSender&                                          packetSender,
        ::PrivateKeyManager&                                     clientKeys,
        ::IClientInstance&                                       client,
        ::MinecraftCommands&                                     commands,
        ::std::shared_ptr<::ClientBlobCache::Cache>              clientBlobCache,
        ::Bedrock::NonOwnerPointer<::ILevel> const&              level,
        ::Bedrock::NonOwnerPointer<::VideoCaptureSessionManager> videoCaptureSessionManager,
        ::ClientNetworkHandler::PackDependencies&&               packDependencies
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $handle(::NetworkIdentifier const& source, ::ActorEventPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AddBehaviorTreePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::AnimateEntityPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::AvailableActorIdentifiersPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::AvailableCommandsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::AutomationClientConnectPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::BiomeDefinitionListPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::BossEventPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CameraAimAssistPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CameraAimAssistPresetsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CameraInstructionPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CameraPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CameraPresetsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CameraShakePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ChunkRadiusUpdatedPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ClientboundControlSchemeSetPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ClientboundMapItemDataPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::CommandOutputPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::CommandRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CompletedUsingItemPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CraftingDataPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::EmoteListPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::DebugInfoPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::EmotePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::LegacyTelemetryEventPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::FeatureRegistryPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::LessonProgressPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::GuiDataPickItemPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ItemStackResponsePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::LabTablePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::LevelEventPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::LevelEventGenericPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::LevelSoundEventPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ModalFormRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ToastRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::OnScreenTextureAnimationPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::NetworkChunkPublisherUpdatePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::PhotoTransferPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerArmorDamagePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerStartItemCooldownPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlaySoundPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayStatusPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlayerFogPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PositionTrackingDBServerBroadcastPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::RemoveObjectivePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ResourcePackChunkDataPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ResourcePackDataInfoPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ResourcePacksInfoPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ResourcePackStackPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::RespawnPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ScriptMessagePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ServerSettingsResponsePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ServerToClientHandshakePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetDisplayObjectivePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetLastHurtByPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetPlayerGameTypePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::UpdatePlayerGameTypePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetScoreboardIdentityPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetScorePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetTitlePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ShowCreditsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ShowProfilePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::ShowStoreOfferPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SimpleEventPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::StopSoundPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SubChunkPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::TakeItemActorPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::TextPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::TickingAreasLoadStatusPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::TransferPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateAttributesPacket> packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::UpdateEquipPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::UpdateSoftEnumPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::UpdateTradePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::StructureTemplateDataResponsePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::EducationSettingsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::EduUriResourcePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::MultiplayerSettingsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlayerEnchantOptionsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CodeBuilderPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CorrectPlayerMovePredictionPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::SyncActorPropertyPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::NpcDialoguePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::ClientboundDebugRendererPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::AddVolumeEntityPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::RemoveVolumeEntityPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::SimulationTypePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::AgentActionEventPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::UpdateSubChunkBlocksPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::DeathInfoPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::EditorNetworkPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& source, ::UpdateClientInputLocksPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlayerActionPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::UnlockedRecipesPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::TrimDataPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::OpenSignPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::AgentAnimationPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::RefreshEntitlementsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::SetPlayerInventoryOptionsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::AwardAchievementPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ClientboundCloseFormPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::JigsawStructureDataPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::CurrentStructureFeaturePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerVideoCapturePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::DebugDrawerPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::PlayerLocationPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::DataStoreSyncPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const&, ::GraphicsOverrideParameterPacket const& packet);

    MCAPI void $onStoreOfferReceive(::ShowStoreOfferRedirectType const redirectType, ::std::string const& offerID);

    MCAPI void $onDisconnect(
        ::NetworkIdentifier const&               source,
        ::Connection::DisconnectFailReason const discoReason,
        ::Connection::DisconnectionStage const   disconnectStage,
        ::std::string const&                     message,
        bool                                     skipMessage,
        ::std::string const&                     telemetryOverride
    );

    MCAPI ::IncomingPacketFilterResult
    $allowIncomingPacketId(::NetworkIdentifierWithSubId const& id, ::MinecraftPacketIds packetId, uint64 packetSize);

    MCFOLD ::OutgoingPacketFilterResult
    $allowOutgoingPacket(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet);

    MCAPI void $onSuccessfulLogin(::NetworkIdentifier const& id);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
