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
#include "mc/network/IncomingPacketFilterResult.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetEventCallback.h"
#include "mc/network/OutgoingPacketFilterResult.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/connection/DisconnectionStage.h"
#include "mc/network/packet/ShowStoreOfferRedirectType.h"

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
class ClientboundUpdateSoundDataPacket;
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
class FeatureRegistryPacket;
class GameTestResultsPacket;
class GraphicsOverrideParameterPacket;
class GuiDataPickItemPacket;
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
class RefreshEntitlementsPacket;
class RemoveObjectivePacket;
class RemoveVolumeEntityPacket;
class ResourcePackChunkDataPacket;
class ResourcePackDataInfoPacket;
class ResourcePackStackPacket;
class ResourcePacksInfoPacket;
class RespawnPacket;
class ScriptMessagePacket;
class SendPartyDestinationCookiePacket;
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
struct NetworkIdentifierWithSubId;
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
    // NOLINTEND

public:
    // prevent constructor by default
    ClientNetworkHandler& operator=(ClientNetworkHandler const&);
    ClientNetworkHandler(ClientNetworkHandler const&);
    ClientNetworkHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientNetworkHandler() /*override*/ = default;

    virtual void handle(::NetworkIdentifier const&, ::ActorEventPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AddBehaviorTreePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AnimateEntityPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AvailableActorIdentifiersPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AvailableCommandsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AutomationClientConnectPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::BiomeDefinitionListPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::BossEventPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CameraAimAssistPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CameraAimAssistPresetsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CameraAimAssistActorPriorityPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CameraInstructionPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CameraPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CameraPresetsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CameraShakePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CameraSplinePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ChunkRadiusUpdatedPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientboundControlSchemeSetPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientboundMapItemDataPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CommandOutputPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CommandRequestPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CompletedUsingItemPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CraftingDataPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::EmoteListPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::DebugInfoPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::EmotePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::LegacyTelemetryEventPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::FeatureRegistryPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::LessonProgressPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::GuiDataPickItemPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ItemStackResponsePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::LabTablePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::LevelEventPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::LevelEventGenericPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::LevelSoundEventPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ModalFormRequestPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ToastRequestPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::OnScreenTextureAnimationPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::NetworkChunkPublisherUpdatePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PhotoTransferPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerArmorDamagePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerStartItemCooldownPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlaySoundPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayStatusPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerFogPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PositionTrackingDBServerBroadcastPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::RemoveObjectivePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackChunkDataPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackDataInfoPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ResourcePacksInfoPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackStackPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::RespawnPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ScriptMessagePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ServerPlayerPostMovePositionPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ServerSettingsResponsePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ServerToClientHandshakePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetDisplayObjectivePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetLastHurtByPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetPlayerGameTypePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::UpdatePlayerGameTypePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetScoreboardIdentityPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetScorePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetTitlePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ShowCreditsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ShowProfilePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ShowStoreOfferPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SimpleEventPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::StopSoundPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SubChunkPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::TakeItemActorPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::TextPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::TickingAreasLoadStatusPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::TransferPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::UpdateAttributesPacket>) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::UpdateEquipPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::UpdateSoftEnumPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::UpdateTradePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::StructureTemplateDataResponsePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::EducationSettingsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::EduUriResourcePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::MultiplayerSettingsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerEnchantOptionsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CodeBuilderPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CorrectPlayerMovePredictionPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SyncActorPropertyPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::NpcDialoguePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDebugRendererPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AddVolumeEntityPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::RemoveVolumeEntityPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SimulationTypePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AgentActionEventPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::UpdateSubChunkBlocksPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::DeathInfoPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::EditorNetworkPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::GameTestResultsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::UpdateClientInputLocksPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerActionPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::UnlockedRecipesPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::TrimDataPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::OpenSignPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AgentAnimationPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::RefreshEntitlementsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetPlayerInventoryOptionsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AwardAchievementPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientboundCloseFormPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::JigsawStructureDataPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CurrentStructureFeaturePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerVideoCapturePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerLocationPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PrimitiveShapesPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataStorePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::GraphicsOverrideParameterPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUICloseScreenPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIReloadPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientboundDataDrivenUIShowScreenPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientboundTextureShiftPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::VoxelShapesPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::LocatorBarPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SyncWorldClocksPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientboundAttributeLayerSyncPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ServerStoreInfoPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ServerPresenceInfoPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SendPartyDestinationCookiePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientboundUpdateSoundDataPacket const&) /*override*/;

    virtual void
    onOutgoingPacket(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId) /*override*/;

    virtual void
    onValidPacketReceived(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId) /*override*/;

    virtual void onStoreOfferReceive(::ShowStoreOfferRedirectType const, ::std::string const&) /*override*/;

    virtual void onDisconnect(
        ::NetworkIdentifier const&,
        ::Connection::DisconnectFailReason const,
        ::Connection::DisconnectionStage const,
        ::std::string const&,
        ::std::string const&,
        bool,
        ::std::string const&
    ) /*override*/;

    virtual ::IncomingPacketFilterResult
    allowIncomingPacketId(::NetworkIdentifierWithSubId const&, ::MinecraftPacketIds, uint64) /*override*/;

    virtual ::OutgoingPacketFilterResult
    allowOutgoingPacket(::std::vector<::NetworkIdentifierWithSubId> const&, ::Packet const&) /*override*/;

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

    virtual void onSuccessfulLogin(::NetworkIdentifier const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ClientNetworkHandler::SubscribedHostPacks
    createHostPacks(::PackDownloadManager& downloadMaager, ::IContentManager& contentManager);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
