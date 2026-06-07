#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/ClientNetworkPackDependencies.h"
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
class CachedHostPackIdProvider;
class CameraAimAssistActorPriorityPacket;
class CameraAimAssistPacket;
class CameraAimAssistPresetsPacket;
class CameraInstructionPacket;
class CameraPacket;
class CameraPresetsPacket;
class CameraShakePacket;
class CameraSplinePacket;
class ChunkPos;
class ChunkRadiusUpdatedPacket;
class ClientNetworkSystem;
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
class CommandOutputPacket;
class CommandRequestPacket;
class CompletedUsingItemPacket;
class CorrectPlayerMovePredictionPacket;
class CraftingDataPacket;
class CurrentStructureFeaturePacket;
class DeathInfoPacket;
class DebugInfoPacket;
class Dimension;
class EditorNetworkPacket;
class EduUriResourcePacket;
class EducationSettingsPacket;
class EmoteListPacket;
class EmotePacket;
class Experiments;
class FeatureRegistryPacket;
class GameTestResultsPacket;
class GraphicsOverrideParameterPacket;
class GuiDataPickItemPacket;
class HashedString;
class IClientInstance;
class IContentManager;
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
class LocatorBarPacket;
class MinecraftCommands;
class ModalFormRequestPacket;
class MultiplayerSettingsPacket;
class NetworkChunkPublisherUpdatePacket;
class NetworkIdentifier;
class NpcDialoguePacket;
class OnScreenTextureAnimationPacket;
class OpenSignPacket;
class PackDownloadManager;
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
class PrimitiveShapesPacket;
class PrivateKeyManager;
class Recipe;
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
class ServerPresenceInfoPacket;
class ServerSettingsResponsePacket;
class ServerStoreInfoPacket;
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
class SyncWorldClocksPacket;
class TakeItemActorPacket;
class TaskGroup;
class TextPacket;
class TextureShiftManager;
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
class VideoCaptureSessionManager;
class VoxelShapesPacket;
struct ClientNetworkHandlerArguments;
struct NetworkIdentifierWithSubId;
struct ToastIconData;
namespace ClientBlobCache { class Cache; }
namespace SharedTypes::v1_21_20 { struct JigsawStructureData; }
namespace VoxelShapes { class VoxelShapeRegistry; }
// clang-format on

class ClientNetworkHandler : public ::NetEventCallback {
public:
    // ClientNetworkHandler inner types declare
    // clang-format off
    struct SubscribedHostPacks;
    // clang-format on

    // ClientNetworkHandler inner types define
    struct SubscribedHostPacks {};

    using ChunkKey = ::std::pair<::Dimension const*, ::ChunkPos>;

    using ChunkCallbackKey = ::std::tuple<::NetworkIdentifier, ::Dimension const*, ::ChunkPos>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlobCache::Cache>>                    mBlobCache;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MPMCQueue<uint64>>>                         mCacheMisses;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MPMCQueue<uint64>>>                         mCacheHits;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SharedTypes::v1_21_20::JigsawStructureData>> mJigsawStructureData;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VoxelShapes::VoxelShapeRegistry>>            mVoxelShapeRegistry;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                              mClient;
    ::ll::TypedStorage<8, 8, ::PacketSender&>                                                 mPacketSender;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::IGameConnectionListener>>                     mGameConnectionListener;
    ::ll::TypedStorage<8, 8, ::IGameServerStartup&>                                           mGameServerStartup;
    ::ll::TypedStorage<8, 8, ::ClientNetworkSystem&>                                          mNetwork;
    ::ll::TypedStorage<8, 8, ::PrivateKeyManager const&>                                      mClientKeys;
    ::ll::TypedStorage<8, 8, ::MinecraftCommands&>                                            mMinecraftCommands;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ILevel>>                           mLevel;
    ::ll::TypedStorage<1, 1, bool>                                                            mHasMessage;
    ::ll::TypedStorage<1, 1, bool>                                                            mIsLoggedIn;
    ::ll::TypedStorage<1, 1, bool>                                                            mHasHandshaked;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                                        mExistenceTracker;
    ::ll::TypedStorage<1, 1, bool>                                                            mPacketTelemetryEnabled;
    ::ll::TypedStorage<1, 1, bool> mEventSynchronizationEnabled;
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
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::TextureShiftManager>>     mTextureShiftManager;
    ::ll::TypedStorage<8, 128, ::ClientNetworkPackDependencies>                         mPackDependencies;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::CachedHostPackIdProvider>>            mCachedHostPackIdProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                          mHostPacksReceivedSub;
    ::ll::TypedStorage<1, 1, bool>                                                      mAllowFurnaceRecipesUnlocking;
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

    virtual void handle(::NetworkIdentifier const& packet, ::ActorEventPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AddBehaviorTreePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::AnimateEntityPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::AvailableActorIdentifiersPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::AvailableCommandsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::AutomationClientConnectPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::BiomeDefinitionListPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::BossEventPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::CameraAimAssistPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::CameraAimAssistPresetsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::CameraAimAssistActorPriorityPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::CameraInstructionPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::CameraPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::CameraPresetsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::CameraShakePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::CameraSplinePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ChunkRadiusUpdatedPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ClientboundControlSchemeSetPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ClientboundMapItemDataPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::CommandOutputPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CommandRequestPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::CompletedUsingItemPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::CraftingDataPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::EmoteListPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::DebugInfoPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::EmotePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::LegacyTelemetryEventPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::FeatureRegistryPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::LessonProgressPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::GuiDataPickItemPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ItemStackResponsePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::LabTablePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::LevelEventPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::LevelEventGenericPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::LevelSoundEventPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ModalFormRequestPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ToastRequestPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::OnScreenTextureAnimationPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::NetworkChunkPublisherUpdatePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::PhotoTransferPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::PlayerArmorDamagePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::PlayerStartItemCooldownPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::PlaySoundPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::PlayStatusPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::PlayerFogPacket const&) /*override*/;

    virtual void
    handle(::NetworkIdentifier const& packet, ::PositionTrackingDBServerBroadcastPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::RemoveObjectivePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ResourcePackChunkDataPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ResourcePackDataInfoPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ResourcePacksInfoPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ResourcePackStackPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::RespawnPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ScriptMessagePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ServerSettingsResponsePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::ServerToClientHandshakePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::SetDisplayObjectivePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::SetLastHurtByPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::SetPlayerGameTypePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::UpdatePlayerGameTypePacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::SetScoreboardIdentityPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::SetScorePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::SetTitlePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ShowCreditsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ShowProfilePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ShowStoreOfferPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::SimpleEventPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::StopSoundPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::SubChunkPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::TakeItemActorPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::TextPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::TickingAreasLoadStatusPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::TransferPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::std::shared_ptr<::UpdateAttributesPacket>) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::UpdateEquipPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::UpdateSoftEnumPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::UpdateTradePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::StructureTemplateDataResponsePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::EducationSettingsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::EduUriResourcePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::MultiplayerSettingsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::PlayerEnchantOptionsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::CodeBuilderPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::CorrectPlayerMovePredictionPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::SyncActorPropertyPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::NpcDialoguePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDebugRendererPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::AddVolumeEntityPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::RemoveVolumeEntityPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::SimulationTypePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::AgentActionEventPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& source, ::UpdateSubChunkBlocksPacket const& packet) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::DeathInfoPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::EditorNetworkPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::UpdateClientInputLocksPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::PlayerActionPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::UnlockedRecipesPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::TrimDataPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::OpenSignPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::AgentAnimationPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::RefreshEntitlementsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::SetPlayerInventoryOptionsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::AwardAchievementPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientboundCloseFormPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::JigsawStructureDataPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::CurrentStructureFeaturePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::PlayerVideoCapturePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::PlayerLocationPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::PrimitiveShapesPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ClientboundDataStorePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::GraphicsOverrideParameterPacket const&) /*override*/;

    virtual void
    handle(::NetworkIdentifier const& packet, ::ClientboundDataDrivenUICloseScreenPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIReloadPacket const&) /*override*/;

    virtual void
    handle(::NetworkIdentifier const& packet, ::ClientboundDataDrivenUIShowScreenPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ClientboundTextureShiftPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::VoxelShapesPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::LocatorBarPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::SyncWorldClocksPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ClientboundAttributeLayerSyncPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ServerStoreInfoPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const& packet, ::ServerPresenceInfoPacket const&) /*override*/;

    virtual void onOutgoingPacket(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId              recipientSubId,
        ::SubClientId
    ) /*override*/;

    virtual void onValidPacketReceived(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId              recipientSubId,
        ::SubClientId
    ) /*override*/;

    virtual void
    onStoreOfferReceive(::ShowStoreOfferRedirectType const redirectType, ::std::string const& offerID) /*override*/;

    virtual void onDisconnect(
        ::NetworkIdentifier const&               discoReason,
        ::Connection::DisconnectFailReason const disconnectStage,
        ::Connection::DisconnectionStage const   messageFromServer,
        ::std::string const&                     messageBodyOverride,
        ::std::string const&                     skipMessage,
        bool                                     telemetryOverride,
        ::std::string const&
    ) /*override*/;

    virtual ::IncomingPacketFilterResult
    allowIncomingPacketId(::NetworkIdentifierWithSubId const& packetId, ::MinecraftPacketIds, uint64) /*override*/;

    virtual ::OutgoingPacketFilterResult
    allowOutgoingPacket(::std::vector<::NetworkIdentifierWithSubId> const&, ::Packet const&) /*override*/;

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
    ) /*override*/;

    virtual void sendPacketViolationWarningPacket(
        ::std::error_code const&   errorCode,
        ::PacketViolationResponse  violationResponse,
        ::MinecraftPacketIds       violatingPacketId,
        ::std::string const&       context,
        ::NetworkIdentifier const& netId,
        ::SubClientId              clientSubId
    ) /*override*/;

    virtual void onSuccessfulLogin(::NetworkIdentifier const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ClientNetworkHandler(::ClientNetworkHandlerArguments&& args);

    MCAPI void _disconnectFromServer(::NetworkIdentifier const& source);

    MCAPI void _ensureVoxelShapeRegistryExists(::Experiments const& experiments);

    MCAPI void _handleLevelEvent(::SharedTypes::Legacy::LevelEvent type, ::LevelEventGenericPacket const& packet);

    MCAPI void _handleLevelEvent(::SharedTypes::Legacy::LevelEvent type, ::LevelEventPacket const& packet);

    MCAPI void _handleLevelMusicEvent(::SharedTypes::Legacy::LevelEvent type, ::LevelEventGenericPacket const& packet);

    MCAPI void _handleSubChunkData(
        ::NetworkIdentifier const&                  packet,
        ::SubChunkPacket const&                     subChunkData,
        ::SubChunkPacket::SubChunkPacketData const& localPlayer,
        ::LocalPlayer const*                        levelAndPlayerExists,
        bool
    );

    MCAPI void
    _handleUnlockedRecipes(::UnlockedRecipesPacket const& packet, ::UnlockedRecipesClientComponent& component);

    MCAPI void _handleUnlockedRecipesByTag(
        ::UnlockedRecipesClientComponent const&                                                   component,
        ::std::map<::HashedString, ::std::map<::std::string, ::std::shared_ptr<::Recipe>>> const& allRecipes,
        ::std::string const&                                                                      recipeId,
        ::HashedString const&                                                                     tag,
        ::std::vector<::ToastIconData>&                                                           newRecipeToastDataRef
    );

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
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ClientNetworkHandler::SubscribedHostPacks
    createHostPacks(::PackDownloadManager& downloadMaager, ::IContentManager& contentManager);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ClientNetworkHandlerArguments&& args);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $handle(::NetworkIdentifier const& packet, ::ActorEventPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::AddBehaviorTreePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::AnimateEntityPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::AvailableActorIdentifiersPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::AvailableCommandsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::AutomationClientConnectPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& source, ::BiomeDefinitionListPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::BossEventPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::CameraAimAssistPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::CameraAimAssistPresetsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::CameraAimAssistActorPriorityPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::CameraInstructionPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::CameraPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::CameraPresetsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::CameraShakePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::CameraSplinePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ChunkRadiusUpdatedPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ClientboundControlSchemeSetPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ClientboundMapItemDataPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& source, ::CommandOutputPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::CommandRequestPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::CompletedUsingItemPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::CraftingDataPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::EmoteListPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::DebugInfoPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::EmotePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::LegacyTelemetryEventPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::FeatureRegistryPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::LessonProgressPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::GuiDataPickItemPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ItemStackResponsePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& source, ::LabTablePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::LevelEventPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::LevelEventGenericPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::LevelSoundEventPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ModalFormRequestPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ToastRequestPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::OnScreenTextureAnimationPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::NetworkChunkPublisherUpdatePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::PhotoTransferPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::PlayerArmorDamagePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::PlayerStartItemCooldownPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::PlaySoundPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayStatusPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::PlayerFogPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::PositionTrackingDBServerBroadcastPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::RemoveObjectivePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ResourcePackChunkDataPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ResourcePackDataInfoPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ResourcePacksInfoPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ResourcePackStackPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::RespawnPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ScriptMessagePacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ServerSettingsResponsePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ServerToClientHandshakePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::SetDisplayObjectivePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::SetLastHurtByPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::SetPlayerGameTypePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& source, ::UpdatePlayerGameTypePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::SetScoreboardIdentityPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::SetScorePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::SetTitlePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ShowCreditsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ShowProfilePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ShowStoreOfferPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::SimpleEventPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::StopSoundPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SubChunkPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::TakeItemActorPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::TextPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::TickingAreasLoadStatusPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::TransferPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::std::shared_ptr<::UpdateAttributesPacket>);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::UpdateEquipPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::UpdateSoftEnumPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::UpdateTradePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::StructureTemplateDataResponsePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::EducationSettingsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::EduUriResourcePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::MultiplayerSettingsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::PlayerEnchantOptionsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::CodeBuilderPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::CorrectPlayerMovePredictionPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::SyncActorPropertyPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::NpcDialoguePacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ClientboundDebugRendererPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::AddVolumeEntityPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::RemoveVolumeEntityPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::SimulationTypePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::AgentActionEventPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& source, ::UpdateSubChunkBlocksPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::DeathInfoPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::EditorNetworkPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::UpdateClientInputLocksPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::PlayerActionPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::UnlockedRecipesPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::TrimDataPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::OpenSignPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::AgentAnimationPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::RefreshEntitlementsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::SetPlayerInventoryOptionsPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::AwardAchievementPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ClientboundCloseFormPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::JigsawStructureDataPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::CurrentStructureFeaturePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::PlayerVideoCapturePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::PlayerLocationPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::PrimitiveShapesPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ClientboundDataStorePacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::GraphicsOverrideParameterPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ClientboundDataDrivenUICloseScreenPacket const&);

    MCAPI void $handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIReloadPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ClientboundDataDrivenUIShowScreenPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ClientboundTextureShiftPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::VoxelShapesPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::LocatorBarPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& packet, ::SyncWorldClocksPacket const&);

    MCFOLD void $handle(::NetworkIdentifier const& packet, ::ClientboundAttributeLayerSyncPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ServerStoreInfoPacket const&);

    MCAPI void $handle(::NetworkIdentifier const& packet, ::ServerPresenceInfoPacket const&);

    MCAPI void $onOutgoingPacket(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId              recipientSubId,
        ::SubClientId
    );

    MCAPI void $onValidPacketReceived(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId              recipientSubId,
        ::SubClientId
    );

    MCAPI void $onStoreOfferReceive(::ShowStoreOfferRedirectType const redirectType, ::std::string const& offerID);

    MCAPI void $onDisconnect(
        ::NetworkIdentifier const&               discoReason,
        ::Connection::DisconnectFailReason const disconnectStage,
        ::Connection::DisconnectionStage const   messageFromServer,
        ::std::string const&                     messageBodyOverride,
        ::std::string const&                     skipMessage,
        bool                                     telemetryOverride,
        ::std::string const&
    );

    MCAPI ::IncomingPacketFilterResult
    $allowIncomingPacketId(::NetworkIdentifierWithSubId const& packetId, ::MinecraftPacketIds, uint64);

    MCFOLD ::OutgoingPacketFilterResult
    $allowOutgoingPacket(::std::vector<::NetworkIdentifierWithSubId> const&, ::Packet const&);

    MCAPI void $handlePacketViolation(
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

    MCAPI void $sendPacketViolationWarningPacket(
        ::std::error_code const&   errorCode,
        ::PacketViolationResponse  violationResponse,
        ::MinecraftPacketIds       violatingPacketId,
        ::std::string const&       context,
        ::NetworkIdentifier const& netId,
        ::SubClientId              clientSubId
    );

    MCAPI void $onSuccessfulLogin(::NetworkIdentifier const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
