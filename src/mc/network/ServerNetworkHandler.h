#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationInfo.h"
#include "mc/client/network/blob_cache/client_blob_cache/TransferBuilder.h"
#include "mc/common/SubClientId.h"
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ServiceReference.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/events/event_data/ServerTelemetryData.h"
#include "mc/network/IncomingPacketFilterResult.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetEventCallback.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/network/NetworkServerConfig.h"
#include "mc/network/OutgoingPacketFilterResult.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/network/ServerNetworkHandlerDependencies.h"
#include "mc/network/XboxLiveUserObserver.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/connection/DisconnectionStage.h"
#include "mc/platform/MultiplayerServiceObserver.h"
#include "mc/platform/UUID.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/server/DenyList.h"
#include "mc/server/ServerPlayerLoader.h"
#include "mc/server/config/server_configuration/ServerConfigurationJoinInfo.h"
#include "mc/world/level/LevelListener.h"

// auto generated forward declare list
// clang-format off
class ActorEventPacket;
class ActorPickRequestPacket;
class AllowList;
class AnimatePacket;
class AnvilDamagePacket;
class AppConfigs;
class AsyncJoinTaskManager;
class BiomeDefinitionListPacket;
class BlockActorDataPacket;
class BlockPickRequestPacket;
class BookEditPacket;
class BossEventPacket;
class ChangeMobPropertyPacket;
class ClassroomModeNetworkHandler;
class ClientCacheBlobStatusPacket;
class ClientCacheStatusPacket;
class ClientCameraAimAssistPacket;
class ClientMovementPredictionSyncPacket;
class ClientToServerHandshakePacket;
class CodeBuilderSourcePacket;
class CommandBlockUpdatePacket;
class CommandRequestPacket;
class CompletedUsingItemPacket;
class ConnectionRequest;
class ContainerClosePacket;
class CreatePhotoPacket;
class DebugInfoPacket;
class DisconnectPacket;
class EditorNetworkPacket;
class EmoteListPacket;
class EmotePacket;
class EntityContext;
class GameCallbacks;
class GameSpecificNetEventCallback;
class GameTestNetworkAdapter;
class GameTestRequestPacket;
class IEDUSystems;
class ILevel;
class IMinecraftApp;
class IPacketSecurityController;
class InteractPacket;
class InventoryTransactionPacket;
class ItemStackRequestPacket;
class LabTablePacket;
class LecternUpdatePacket;
class LevelSoundEventPacket;
class LoginPacket;
class MapCreateLockedCopyPacket;
class MapInfoRequestPacket;
class MinecraftCommands;
class MinecraftGameTest;
class MinecraftServiceKeyManager;
class MobEquipmentPacket;
class ModalFormResponsePacket;
class MultiplayerSettingsPacket;
class NetworkStackLatencyPacket;
class NpcRequestPacket;
class Packet;
class PacketSender;
class PartyChangedPacket;
class PartyDestinationCookieResponsePacket;
class PermissionsFile;
class PhotoTransferPacket;
class Player;
class PlayerActionPacket;
class PlayerAuthInputPacket;
class PlayerHotbarPacket;
class PlayerSkinPacket;
class PlayerToggleCrafterSlotRequestPacket;
class PositionTrackingDBClientRequestPacket;
class PrivateKeyManager;
class PurchaseReceiptPacket;
class RequestAbilityPacket;
class RequestChunkRadiusPacket;
class RequestNetworkSettingsPacket;
class RequestPermissionsPacket;
class ResourcePackChunkRequestPacket;
class ResourcePackClientResponsePacket;
class ResourcePackFileUploadManager;
class ResourcePacksReadyForValidationPacket;
class RespawnPacket;
class Scheduler;
class ScriptMessagePacket;
class ScriptPackSettingsCache;
class ServerConnectionAuthValidator;
class ServerLocator;
class ServerNetworkSystem;
class ServerPlayer;
class ServerboundDataDrivenScreenClosedPacket;
class ServerboundDataStorePacket;
class ServerboundDiagnosticsPacket;
class ServerboundLoadingScreenPacket;
class ServerboundPackSettingChangePacket;
class SetDefaultGameTypePacket;
class SetDifficultyPacket;
class SetLocalPlayerAsInitializedPacket;
class SetPlayerGameTypePacket;
class SetPlayerInventoryOptionsPacket;
class SettingsCommandPacket;
class ShowCreditsPacket;
class SimpleEventPacket;
class SpawnExperienceOrbPacket;
class StructureBlockUpdatePacket;
class StructureTemplateDataRequestPacket;
class SubChunkRequestPacket;
class SubClientConnectionRequest;
class SubClientLoginPacket;
class TaskGroup;
class TextFilteringProcessor;
class TextPacket;
class UpdateClientOptionsPacket;
class UpdatePlayerGameTypePacket;
class Vec3;
struct ActorUniqueID;
struct IServerNetworkController;
struct MessToken;
namespace Automation { class AutomationClient; }
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace Json { class Value; }
namespace ResourcePackPathLifetimeHelpers { class ResourcePackPathCache; }
namespace Social { class GameConnectionInfo; }
namespace Social { struct Nonce; }
namespace Social { struct OnlineId; }
// clang-format on

class ServerNetworkHandler : public ::Bedrock::Threading::EnableQueueForMainThread,
                             public ::NetEventCallback,
                             public ::LevelListener,
                             public ::Social::MultiplayerServiceObserver,
                             public ::Social::XboxLiveUserObserver {
public:
    // ServerNetworkHandler inner types declare
    // clang-format off
    class Client;
    class TransferBuilderBatcher;
    // clang-format on

    // ServerNetworkHandler inner types define
    class Client {
    public:
        // Client inner types define
        enum class LoginState : uchar {
            AwaitingHandshake   = 0,
            AwaitingPlayerSpawn = 1,
            PlayerSpawned       = 2,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ConnectionRequest>>                           mPrimaryRequest;
        ::ll::TypedStorage<8, 384, ::PlayerAuthenticationInfo>                                     mPrimaryPlayerInfo;
        ::ll::TypedStorage<8, 32, ::std::string>                                                   mClientInfoPartyId;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::SubClientId, ::PlayerAuthenticationInfo>> mSubClientPlayerInfo;
        ::ll::TypedStorage<1, 1, ::ServerNetworkHandler::Client::LoginState>                       mLoginState;
        // NOLINTEND
    };

    class TransferBuilderBatcher {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 248, ::ClientBlobCache::Server::TransferBuilder> mTransferBuilder;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::NetworkIdentifier, ::std::unique_ptr<::ServerNetworkHandler::Client>>>
                                                                                    mClients;
    ::ll::TypedStorage<8, 8, ::GameCallbacks&>                                      mGameCallbacks;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ILevel>>                 mLevel;
    ::ll::TypedStorage<8, 24, ::ServerPlayerLoader>                                 mPlayerLoader;
    ::ll::TypedStorage<8, 8, ::ServerNetworkSystem&>                                mNetwork;
    ::ll::TypedStorage<8, 8, ::PrivateKeyManager&>                                  mServerKeys;
    ::ll::TypedStorage<8, 8, ::ServerLocator&>                                      mServerLocator;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::PacketSender*>>                      mPacketSender;
    ::ll::TypedStorage<8, 8, ::AllowList&>                                          mAllowList;
    ::ll::TypedStorage<8, 8, ::PermissionsFile*>                                    mPermissionsFile;
    ::ll::TypedStorage<8, 104, ::DenyList>                                          mServerDenyList;
    ::ll::TypedStorage<8, 72, ::NetworkServerConfig>                                mNetworkServerConfig;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ScriptPackSettingsCache>>         mPackSettingsCache;
    ::ll::TypedStorage<1, 1, bool>                                                  mHasDisplayedPackErrors;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier>                                 mMyId;
    ::ll::TypedStorage<4, 4, int const>                                             mMaxChunkRadius;
    ::ll::TypedStorage<8, 8, ::MinecraftCommands&>                                  mMinecraftCommands;
    ::ll::TypedStorage<8, 8, ::IMinecraftApp&>                                      mApp;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::TextFilteringProcessor>> mTextFilteringProcessor;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ClientBlobCache::Server::ActiveTransfersManager>> mClientCacheManager;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::NetworkIdentifierWithSubId, ::Json::Value>>
        mServerStorageForClientsConnectingAttempt;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::Social::Nonce>> mPlayerNonces;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ClassroomModeNetworkHandler>>      mCompanionHandler;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                          mValidatePlayerMutex;
    ::ll::TypedStorage<1, 1, bool>                                                  mAllowIncoming;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IServerNetworkController>>         mServerNetworkController;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mServerName;
    ::ll::TypedStorage<4, 4, int>                                                   mMaxNumPlayers;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::mce::UUID>>                    mKnownEmotePieceIdLookup;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::UUID>>                           mKnownEmotePieceIds;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            uint64,
            ::std::unordered_map<::std::string, ::std::shared_ptr<::ResourcePackFileUploadManager>>>>
        mResourceUploadManagers;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::Bedrock::Threading::SharedAsync<void>>>>
        mPreviousUpload;
    ::ll::
        TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ResourcePackPathLifetimeHelpers::ResourcePackPathCache>>>
            mResourcePackPathCache;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ServerConnectionAuthValidator>>>
                                                                                         mConnectionAuthValidator;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::TaskGroup>>>            mNetworkTaskGroup;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::AsyncJoinTaskManager>>> mAsyncJoinTaskManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                             mIOTaskGroup;
    ::ll::TypedStorage<1, 1, bool>                                                       mIsTrial;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::PackIdVersion, ::std::string>>      mPackIdToContentKey;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameSpecificNetEventCallback>>          mGameSpecificNetEventCallback;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::NetworkIdentifier, ::std::unique_ptr<::ServerNetworkHandler::TransferBuilderBatcher>>>
                                                                                   mTransferBuilderBatcher;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameTestNetworkAdapter>>          mGameTestAdapter;
    ::ll::TypedStorage<8, 40, ::ServiceReference<::AppConfigs>>                    mAppConfigs;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BiomeDefinitionListPacket const>> mBiomeDefinitionListWithoutCSCG;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BiomeDefinitionListPacket const>> mBiomeDefinitionListWithCSCG;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IEDUSystems>>           mEduSystems;
    ::ll::TypedStorage<8, 416, ::std::optional<::ServerConfiguration::ServerConfigurationJoinInfo>>
                                                                         mServerConfigurationJoinInfo;
    ::ll::TypedStorage<8, 128, ::Social::Events::ServerTelemetryData>    mServerTelemetryData;
    ::ll::TypedStorage<8, 256, ::ServerNetworkHandlerDependencies const> mDependencies;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerNetworkHandler& operator=(ServerNetworkHandler const&);
    ServerNetworkHandler(ServerNetworkHandler const&);
    ServerNetworkHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerNetworkHandler() /*override*/ = default;

    virtual void
    onValidPacketReceived(::NetworkIdentifier const&, ::MinecraftPacketIds, ::SubClientId, ::SubClientId) /*override*/;

    virtual void onWebsocketRequest(::std::string const&, ::std::string const&, ::std::function<void()>) /*override*/;

    virtual void onInvalidPlayerJoinedLobby(::mce::UUID const&, ::std::string const&) /*override*/;

    virtual void onPlayerJoinedLobby(::Social::OnlineId const&, ::Social::Nonce const&) /*override*/;

    virtual void onPlayerLeftLobby(::Social::OnlineId const&) /*override*/;

    virtual void onXboxUserBlocked(::std::string const&) /*override*/;

    virtual void onXboxUserUnblocked(::std::string const&) /*override*/;

    virtual void onPlayerReady(::Player&) /*override*/;

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

    virtual void sendServerLegacyParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int) /*override*/;

    virtual void onTransferRequest(::NetworkIdentifier const&, ::Social::GameConnectionInfo const&) /*override*/;

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

    virtual void handle(::NetworkIdentifier const&, ::ActorEventPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ActorPickRequestPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AnimatePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::BlockActorDataPacket>) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::BlockPickRequestPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::LecternUpdatePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::BookEditPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::BossEventPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientCameraAimAssistPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientCacheStatusPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientCacheBlobStatusPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientMovementPredictionSyncPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ClientToServerHandshakePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CommandBlockUpdatePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CommandRequestPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CompletedUsingItemPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ContainerClosePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::DebugInfoPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CreatePhotoPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::DisconnectPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::EmoteListPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::EmotePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::InteractPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::InventoryTransactionPacket>) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ItemStackRequestPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::LabTablePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::LevelSoundEventPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::LoginPacket>) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PartyChangedPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::MapCreateLockedCopyPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::MapInfoRequestPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::MobEquipmentPacket>) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ModalFormResponsePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::NetworkStackLatencyPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::NpcRequestPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PhotoTransferPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerActionPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerAuthInputPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerHotbarPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerSkinPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PlayerToggleCrafterSlotRequestPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PositionTrackingDBClientRequestPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PurchaseReceiptPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::RequestChunkRadiusPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackChunkRequestPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ResourcePacksReadyForValidationPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::RespawnPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetDefaultGameTypePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetDifficultyPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetLocalPlayerAsInitializedPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetPlayerGameTypePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::UpdatePlayerGameTypePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ScriptMessagePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::PartyDestinationCookieResponsePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ShowCreditsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SimpleEventPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SpawnExperienceOrbPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::StructureBlockUpdatePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::StructureTemplateDataRequestPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::std::shared_ptr<::SubClientLoginPacket>) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::TextPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::MultiplayerSettingsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SettingsCommandPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::AnvilDamagePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SubChunkRequestPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::CodeBuilderSourcePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ChangeMobPropertyPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::RequestAbilityPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::RequestNetworkSettingsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::RequestPermissionsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::EditorNetworkPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::GameTestRequestPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::SetPlayerInventoryOptionsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ServerboundLoadingScreenPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ServerboundDiagnosticsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::UpdateClientOptionsPacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ServerboundPackSettingChangePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ServerboundDataStorePacket const&) /*override*/;

    virtual void handle(::NetworkIdentifier const&, ::ServerboundDataDrivenScreenClosedPacket const&) /*override*/;

    virtual void sendSubClientLoginMessageLocal(
        ::NetworkIdentifier const&,
        ::SubClientConnectionRequest const&,
        ::PlayerAuthenticationInfo const&,
        ::SubClientId
    );

    virtual void onTick() /*override*/;

    virtual ::GameSpecificNetEventCallback* getGameSpecificNetEventCallback() /*override*/;

    virtual void onConnect(::NetworkIdentifier const&) /*override*/;

    virtual void completeHandshake(::NetworkIdentifier const&);

    virtual ::std::optional<::PlayerAuthenticationInfo>
    _validateLoginPacket(::NetworkIdentifier const&, ::LoginPacket const&);

    virtual void _onClientAsyncAuthorized(
        ::NetworkIdentifier const&,
        ::ConnectionRequest const&,
        ::PlayerAuthenticationInfo const&,
        ::std::optional<::MessToken> const&
    );

    virtual ::ServerPlayer* _getServerPlayer(::NetworkIdentifier const&, ::SubClientId);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerNetworkHandler(
        ::GameCallbacks&                                                           gameCallbacks,
        ::Bedrock::NonOwnerPointer<::ILevel> const&                                level,
        ::std::optional<::ServerConfiguration::ServerConfigurationJoinInfo> const& serverJoinInfo,
        ::Social::Events::ServerTelemetryData const&                               serveTelemetryData,
        ::ServerNetworkSystem&                                                     network,
        ::PrivateKeyManager&                                                       serverKeys,
        ::Bedrock::NotNullNonOwnerPtr<::MinecraftServiceKeyManager>                minecraftServiceKeys,
        ::ServerLocator&                                                           serverLocator,
        ::PacketSender&                                                            packetSender,
        ::AllowList&                                                               allowList,
        ::PermissionsFile*                                                         permissionsFile,
        ::std::string const&                                                       hostPublicKey,
        int                                                                        maxChunkRadius,
        int                                                                        maxNumPlayers,
        ::MinecraftCommands&                                                       commandHandler,
        ::IMinecraftApp&                                                           app,
        ::std::unordered_map<::PackIdVersion, ::std::string> const&                packIdToContentKey,
        ::Scheduler&                                                               scheduler,
        ::Bedrock::NonOwnerPointer<::TextFilteringProcessor>                       textFilteringProcessor,
        ::optional_ref<::MinecraftGameTest>                                        gameTest,
        ::ServiceReference<::AppConfigs>                                           appConfigs,
        ::NetworkServerConfig                                                      networkServerConfig,
        ::std::shared_ptr<::ScriptPackSettingsCache>                               packSettingsCache,
        ::ServerNetworkHandlerDependencies&&                                       dependencies
    );

    MCAPI int _getActiveAndInProgressPlayerCount(::mce::UUID excludePlayer) const;

    MCAPI void addToDenyList(::mce::UUID const& uuid, ::std::string const& xuid);

    MCAPI void allowIncomingConnections(::std::string const& serverName, bool shouldAnnounce);

    MCAPI ::OwnerPtr<::EntityContext> createNewPlayer(
        ::NetworkIdentifier const&        source,
        ::ConnectionRequest const&        connectionRequest,
        ::PlayerAuthenticationInfo const& playerInfo
    );

    MCAPI ::OwnerPtr<::EntityContext> createSimulatedPlayer(
        ::std::string const&             name,
        ::std::string const&             xuid,
        ::std::optional<::ActorUniqueID> idOverride
    );

    MCAPI void disconnectClientWithMessage(
        ::NetworkIdentifier const&         id,
        ::SubClientId                      subId,
        ::Connection::DisconnectFailReason discoReason,
        ::std::string const&               message,
        ::std::optional<::std::string>     filteredMessage
    );

    MCAPI void
    disconnectPrimaryClient(::NetworkIdentifier const& id, ::Connection::DisconnectFailReason disconnectReason);

    MCAPI void
    engineCancelResponseHelper(::NetworkIdentifier const& source, ::ResourcePackClientResponsePacket const& packet);

    MCAPI void engineDownloadingFinishedResponseHelper(
        ::NetworkIdentifier const&                source,
        ::ResourcePackClientResponsePacket const& packet
    );

    MCAPI void engineDownloadingResponseHelper(
        ::NetworkIdentifier const&                source,
        ::ResourcePackClientResponsePacket const& packet
    );

    MCAPI ::PlayerAuthenticationInfo fetchPlayerAuthenticationInfo(::NetworkIdentifier const& source);

#ifdef LL_PLAT_C
    MCAPI ::std::string getServerName() const;

    MCAPI void onReady_ClientGeneration(::Player& newPlayer, ::NetworkIdentifier const& source);
#endif

    MCAPI void onStartShutdown();

    MCAPI void sendLoginMessageLocal(
        ::NetworkIdentifier const& source,
        ::ConnectionRequest const& connectionRequest,
        ::ServerPlayer&            player
    );

#ifdef LL_PLAT_S
    MCAPI void setAutomationClient(::Bedrock::NonOwnerPointer<::Automation::AutomationClient> client);
#endif

#ifdef LL_PLAT_C
    MCAPI void setEduSystems(::Bedrock::NonOwnerPointer<::IEDUSystems> eduSystems);
#endif

    MCAPI void setNewPlayerPermissions(::ServerPlayer& newPlayer);

    MCAPI bool tryToLoadPlayer(
        ::ServerPlayer&                   player,
        ::ConnectionRequest const&        connectionRequest,
        ::PlayerAuthenticationInfo const& playerInfo
    );

    MCAPI void updateServerAnnouncement();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::GameCallbacks&                                                           gameCallbacks,
        ::Bedrock::NonOwnerPointer<::ILevel> const&                                level,
        ::std::optional<::ServerConfiguration::ServerConfigurationJoinInfo> const& serverJoinInfo,
        ::Social::Events::ServerTelemetryData const&                               serveTelemetryData,
        ::ServerNetworkSystem&                                                     network,
        ::PrivateKeyManager&                                                       serverKeys,
        ::Bedrock::NotNullNonOwnerPtr<::MinecraftServiceKeyManager>                minecraftServiceKeys,
        ::ServerLocator&                                                           serverLocator,
        ::PacketSender&                                                            packetSender,
        ::AllowList&                                                               allowList,
        ::PermissionsFile*                                                         permissionsFile,
        ::std::string const&                                                       hostPublicKey,
        int                                                                        maxChunkRadius,
        int                                                                        maxNumPlayers,
        ::MinecraftCommands&                                                       commandHandler,
        ::IMinecraftApp&                                                           app,
        ::std::unordered_map<::PackIdVersion, ::std::string> const&                packIdToContentKey,
        ::Scheduler&                                                               scheduler,
        ::Bedrock::NonOwnerPointer<::TextFilteringProcessor>                       textFilteringProcessor,
        ::optional_ref<::MinecraftGameTest>                                        gameTest,
        ::ServiceReference<::AppConfigs>                                           appConfigs,
        ::NetworkServerConfig                                                      networkServerConfig,
        ::std::shared_ptr<::ScriptPackSettingsCache>                               packSettingsCache,
        ::ServerNetworkHandlerDependencies&&                                       dependencies
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
