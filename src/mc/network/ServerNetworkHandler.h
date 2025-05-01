#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ServiceReference.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/network/IncomingPacketFilterResult.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetEventCallback.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/NetworkServerConfig.h"
#include "mc/network/OutgoingPacketFilterResult.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/network/XboxLiveUserObserver.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/platform/MultiplayerServiceObserver.h"
#include "mc/platform/UUID.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/server/DenyList.h"
#include "mc/server/ServerTextEvent.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/level/LevelListener.h"

// auto generated forward declare list
// clang-format off
class Abilities;
class ActorEventPacket;
class ActorPickRequestPacket;
class AllowList;
class AnimatePacket;
class AnvilDamagePacket;
class AppConfigs;
class BlockActorDataPacket;
class BlockPickRequestPacket;
class BlockSource;
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
class CompressedBiomeDefinitionListPacket;
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
class GameServerToken;
class GameSpecificNetEventCallback;
class GameTestNetworkAdapter;
class GameTestRequestPacket;
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
class MobEquipmentPacket;
class ModalFormResponsePacket;
class MoveActorAbsolutePacket;
class MovePlayerPacket;
class MultiplayerSettingsPacket;
class NetworkStackLatencyPacket;
class NpcRequestPacket;
class Packet;
class PacketSender;
class PassengerJumpPacket;
class PermissionsFile;
class PermissionsHandler;
class PhotoTransferPacket;
class Player;
class PlayerActionPacket;
class PlayerAuthInputPacket;
class PlayerHotbarPacket;
class PlayerInputPacket;
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
class RespawnPacket;
class Scheduler;
class ScriptMessagePacket;
class SerializedSkin;
class ServerLocator;
class ServerNetworkSystem;
class ServerPlayer;
class ServerboundDiagnosticsPacket;
class ServerboundLoadingScreenPacket;
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
class SubChunkPacket;
class SubChunkRequestPacket;
class SubClientConnectionRequest;
class SubClientLoginPacket;
class TaskGroup;
class TextFilteringProcessor;
class TextPacket;
class UpdateClientOptionsPacket;
class UpdatePlayerGameTypePacket;
class UserEntityIdentifierComponent;
class Vec3;
struct ActorUniqueID;
struct ChatEvent;
struct IServerNetworkController;
struct MessToken;
struct NetworkIdentifierWithSubId;
struct PackIdVersion;
namespace Automation { class AutomationClient; }
namespace Bedrock::Safety { class RedactableString; }
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace Identity { class IEduAuth; }
namespace Social { class MultiplayerServiceManager; }
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
    class TransferBuilderBatcher {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 232> mUnke6ab0b;
        // NOLINTEND

    public:
        // prevent constructor by default
        TransferBuilderBatcher& operator=(TransferBuilderBatcher const&);
        TransferBuilderBatcher(TransferBuilderBatcher const&);
        TransferBuilderBatcher();
    };

    class Client {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ConnectionRequest>> mPrimaryRequest;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::SubClientId, ::std::unique_ptr<::SubClientConnectionRequest>>>
            mSubClientRequests;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void removeSubClientRequest(::SubClientId subClientId);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::GameCallbacks&>                                      mGameCallbacks;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ILevel>>                 mLevel;
    ::ll::TypedStorage<8, 8, ::ServerNetworkSystem&>                                mNetwork;
    ::ll::TypedStorage<8, 8, ::PrivateKeyManager&>                                  mServerKeys;
    ::ll::TypedStorage<8, 8, ::ServerLocator&>                                      mServerLocator;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::PacketSender*>>                      mPacketSender;
    ::ll::TypedStorage<1, 1, bool>                                                  mUseAllowList;
    ::ll::TypedStorage<8, 8, ::AllowList&>                                          mAllowList;
    ::ll::TypedStorage<8, 8, ::PermissionsFile*>                                    mPermissionsFile;
    ::ll::TypedStorage<8, 104, ::DenyList>                                          mServerDenyList;
    ::ll::TypedStorage<8, 72, ::NetworkServerConfig>                                mNetworkServerConfig;
    ::ll::TypedStorage<1, 1, bool>                                                  mHasDisplayedPackErrors;
    ::ll::TypedStorage<8, 160, ::NetworkIdentifier>                                 mMyId;
    ::ll::TypedStorage<4, 4, int const>                                             mMaxChunkRadius;
    ::ll::TypedStorage<8, 8, ::MinecraftCommands&>                                  mMinecraftCommands;
    ::ll::TypedStorage<8, 8, ::IMinecraftApp&>                                      mApp;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::TextFilteringProcessor>> mTextFilteringProcessor;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ClientBlobCache::Server::ActiveTransfersManager>> mClientCacheManager;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::string>> mServerStorageForClientsConnectingAttempt;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ClassroomModeNetworkHandler>> mCompanionHandler;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                     mValidatePlayerMutex;
    ::ll::TypedStorage<1, 1, bool>                                             mAllowIncoming;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IServerNetworkController>>    mServerNetworkController;
    ::ll::TypedStorage<8, 32, ::std::string>                                   mServerName;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                    mTrustedKeys;
    ::ll::TypedStorage<4, 4, int>                                              mMaxNumPlayers;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::mce::UUID>>               mKnownEmotePieceIdLookup;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::UUID>>                      mKnownEmotePieceIds;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            uint64,
            ::std::unordered_map<::std::string, ::std::shared_ptr<::ResourcePackFileUploadManager>>>>
                                                             mResourceUploadManagers;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>> mIOTaskGroup;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::NetworkIdentifier, ::std::unique_ptr<::ServerNetworkHandler::Client>>>
                                                                                    mClients;
    ::ll::TypedStorage<1, 1, bool>                                                  mIsTrial;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::PackIdVersion, ::std::string>> mPackIdToContentKey;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameSpecificNetEventCallback>>     mGameSpecificNetEventCallback;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::NetworkIdentifier, ::std::unique_ptr<::ServerNetworkHandler::TransferBuilderBatcher>>>
                                                                                       mTransferBuilderBatcher;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameTestNetworkAdapter>>              mGameTestAdapter;
    ::ll::TypedStorage<8, 40, ::ServiceReference<::AppConfigs>>                        mAppConfigs;
    ::ll::TypedStorage<8, 40, ::ServiceReference<::Social::MultiplayerServiceManager>> mMultiplayerServiceManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompressedBiomeDefinitionListPacket const>>
                                                                       mCompressedBiomeDefinitionList;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Identity::IEduAuth>> mEduAuth;
    ::ll::TypedStorage<8, 32, ::std::string>                           mServerId;
    ::ll::TypedStorage<8, 32, ::std::string>                           mScenarioId;
    ::ll::TypedStorage<8, 32, ::std::string>                           mWorldId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerNetworkHandler() /*override*/;

    // vIndex: 5
    virtual void onValidPacketReceived(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId              senderSubId,
        ::SubClientId
    ) /*override*/;

    // vIndex: 10
    virtual void onWebsocketRequest(
        ::std::string const&    serverAddress,
        ::std::string const&    payload,
        ::std::function<void()> errorCallback
    ) /*override*/;

    // vIndex: 2
    virtual void onInvalidPlayerJoinedLobby(::mce::UUID const& uuid, ::std::string const& xuid) /*override*/;

    // vIndex: 2
    virtual void onXboxUserBlocked(::std::string const& xuid) /*override*/;

    // vIndex: 3
    virtual void onXboxUserUnblocked(::std::string const& xuid) /*override*/;

    // vIndex: 1
    virtual void onPlayerReady(::Player& player) /*override*/;

    // vIndex: 11
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

    // vIndex: 12
    virtual void sendPacketViolationWarningPacket(
        ::std::error_code const&   errorCode,
        ::PacketViolationResponse  violationResponse,
        ::MinecraftPacketIds       violatingPacketId,
        ::std::string const&       context,
        ::NetworkIdentifier const& netId,
        ::SubClientId              clientSubId
    ) /*override*/;

    // vIndex: 10
    virtual void sendServerLegacyParticle(::ParticleType name, ::Vec3 const& pos, ::Vec3 const&, int data) /*override*/;

    // vIndex: 13
    virtual void
    onTransferRequest(::NetworkIdentifier const& id, ::std::string const& serverAddress, int serverPort) /*override*/;

    // vIndex: 7
    virtual void
    onDisconnect(::NetworkIdentifier const&, ::Connection::DisconnectFailReason const, ::std::string const&, bool, ::std::string const&) /*override*/
        ;

    // vIndex: 8
    virtual ::IncomingPacketFilterResult allowIncomingPacketId(
        ::NetworkIdentifierWithSubId const& sender,
        ::MinecraftPacketIds                packetId,
        uint64                              packetSize
    ) /*override*/;

    // vIndex: 9
    virtual ::OutgoingPacketFilterResult
    allowOutgoingPacket(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet) /*override*/;

    // vIndex: 189
    virtual void handle(::NetworkIdentifier const& source, ::ActorEventPacket const& packet) /*override*/;

    // vIndex: 191
    virtual void handle(::NetworkIdentifier const& source, ::ActorPickRequestPacket const& packet) /*override*/;

    // vIndex: 163
    virtual void handle(::NetworkIdentifier const& source, ::AnimatePacket const& packet) /*override*/;

    // vIndex: 162
    virtual void
    handle(::NetworkIdentifier const& source, ::std::shared_ptr<::BlockActorDataPacket> packet) /*override*/;

    // vIndex: 192
    virtual void handle(::NetworkIdentifier const& source, ::BlockPickRequestPacket const& packet) /*override*/;

    // vIndex: 76
    virtual void handle(::NetworkIdentifier const& source, ::LecternUpdatePacket const& packet) /*override*/;

    // vIndex: 75
    virtual void handle(::NetworkIdentifier const& source, ::BookEditPacket const& packet) /*override*/;

    // vIndex: 136
    virtual void handle(::NetworkIdentifier const& source, ::BossEventPacket const& packet) /*override*/;

    // vIndex: 145
    virtual void handle(::NetworkIdentifier const& source, ::ClientCameraAimAssistPacket const& packet) /*override*/;

    // vIndex: 141
    virtual void handle(::NetworkIdentifier const& source, ::ClientCacheStatusPacket const& packet) /*override*/;

    // vIndex: 155
    virtual void handle(::NetworkIdentifier const& source, ::ClientCacheBlobStatusPacket const& packet) /*override*/;

    // vIndex: 159
    virtual void
    handle(::NetworkIdentifier const& source, ::ClientMovementPredictionSyncPacket const& packet) /*override*/;

    // vIndex: 224
    virtual void handle(::NetworkIdentifier const& source, ::ClientToServerHandshakePacket const& packet) /*override*/;

    // vIndex: 130
    virtual void handle(::NetworkIdentifier const& source, ::CommandBlockUpdatePacket const& packet) /*override*/;

    // vIndex: 132
    virtual void handle(::NetworkIdentifier const& source, ::CommandRequestPacket const& packet) /*override*/;

    // vIndex: 129
    virtual void handle(::NetworkIdentifier const& source, ::CompletedUsingItemPacket const& packet) /*override*/;

    // vIndex: 170
    virtual void handle(::NetworkIdentifier const& source, ::ContainerClosePacket const& packet) /*override*/;

    // vIndex: 55
    virtual void handle(::NetworkIdentifier const& source, ::DebugInfoPacket const& packet) /*override*/;

    // vIndex: 44
    virtual void handle(::NetworkIdentifier const& source, ::CreatePhotoPacket const& packet) /*override*/;

    // vIndex: 229
    virtual void handle(::NetworkIdentifier const& source, ::DisconnectPacket const& packet) /*override*/;

    // vIndex: 228
    virtual void handle(::NetworkIdentifier const& source, ::EmoteListPacket const& packet) /*override*/;

    // vIndex: 227
    virtual void handle(::NetworkIdentifier const& source, ::EmotePacket const& packet) /*override*/;

    // vIndex: 178
    virtual void handle(::NetworkIdentifier const& source, ::InteractPacket const& packet) /*override*/;

    // vIndex: 109
    virtual void
    handle(::NetworkIdentifier const& source, ::std::shared_ptr<::InventoryTransactionPacket> packet) /*override*/;

    // vIndex: 173
    virtual void handle(::NetworkIdentifier const& source, ::ItemStackRequestPacket const& packet) /*override*/;

    // vIndex: 70
    virtual void handle(::NetworkIdentifier const& source, ::LabTablePacket const& packet) /*override*/;

    // vIndex: 196
    virtual void handle(::NetworkIdentifier const& source, ::LevelSoundEventPacket const& packet) /*override*/;

    // vIndex: 226
    virtual void handle(::NetworkIdentifier const& source, ::LoginPacket const& packet) /*override*/;

    // vIndex: 139
    virtual void handle(::NetworkIdentifier const& source, ::MapCreateLockedCopyPacket const& packet) /*override*/;

    // vIndex: 138
    virtual void handle(::NetworkIdentifier const& source, ::MapInfoRequestPacket const& packet) /*override*/;

    // vIndex: 186
    virtual void handle(::NetworkIdentifier const& source, ::MobEquipmentPacket const& packet) /*override*/;

    // vIndex: 101
    virtual void handle(::NetworkIdentifier const& source, ::ModalFormResponsePacket const& packet) /*override*/;

    // vIndex: 206
    virtual void handle(::NetworkIdentifier const& source, ::MoveActorAbsolutePacket const& packet) /*override*/;

    // vIndex: 204
    virtual void handle(::NetworkIdentifier const& source, ::MovePlayerPacket const& packet) /*override*/;

    // vIndex: 68
    virtual void handle(::NetworkIdentifier const& source, ::NetworkStackLatencyPacket const& packet) /*override*/;

    // vIndex: 72
    virtual void handle(::NetworkIdentifier const& source, ::NpcRequestPacket const& packet) /*override*/;

    // vIndex: 71
    virtual void handle(::NetworkIdentifier const& source, ::PhotoTransferPacket const& packet) /*override*/;

    // vIndex: 177
    virtual void handle(::NetworkIdentifier const& source, ::PlayerActionPacket const& packet) /*override*/;

    // vIndex: 161
    virtual void handle(::NetworkIdentifier const& source, ::PlayerAuthInputPacket const& packet) /*override*/;

    // vIndex: 167
    virtual void handle(::NetworkIdentifier const& source, ::PlayerHotbarPacket const& packet) /*override*/;

    // vIndex: 160
    virtual void handle(::NetworkIdentifier const& source, ::PlayerInputPacket const& packet) /*override*/;

    // vIndex: 82
    virtual void handle(::NetworkIdentifier const& source, ::PlayerSkinPacket const& packet) /*override*/;

    // vIndex: 80
    virtual void
    handle(::NetworkIdentifier const& source, ::PlayerToggleCrafterSlotRequestPacket const& packet) /*override*/;

    // vIndex: 219
    virtual void
    handle(::NetworkIdentifier const& source, ::PositionTrackingDBClientRequestPacket const& packet) /*override*/;

    // vIndex: 106
    virtual void handle(::NetworkIdentifier const& source, ::PurchaseReceiptPacket const& packet) /*override*/;

    // vIndex: 140
    virtual void handle(::NetworkIdentifier const& source, ::RequestChunkRadiusPacket const& packet) /*override*/;

    // vIndex: 118
    virtual void handle(::NetworkIdentifier const& source, ::ResourcePackChunkRequestPacket const& packet) /*override*/;

    // vIndex: 84
    virtual void handle(::NetworkIdentifier const& source, ::RespawnPacket const& packet) /*override*/;

    // vIndex: 203
    virtual void handle(::NetworkIdentifier const& source, ::PassengerJumpPacket const& packet) /*override*/;

    // vIndex: 200
    virtual void handle(::NetworkIdentifier const& source, ::SetDefaultGameTypePacket const& packet) /*override*/;

    // vIndex: 152
    virtual void handle(::NetworkIdentifier const& source, ::SetDifficultyPacket const& packet) /*override*/;

    // vIndex: 66
    virtual void
    handle(::NetworkIdentifier const& source, ::SetLocalPlayerAsInitializedPacket const& packet) /*override*/;

    // vIndex: 202
    virtual void handle(::NetworkIdentifier const& source, ::SetPlayerGameTypePacket const& packet) /*override*/;

    // vIndex: 201
    virtual void handle(::NetworkIdentifier const& source, ::UpdatePlayerGameTypePacket const& packet) /*override*/;

    // vIndex: 65
    virtual void handle(::NetworkIdentifier const& source, ::ScriptMessagePacket const& packet) /*override*/;

    // vIndex: 83
    virtual void handle(::NetworkIdentifier const& source, ::ShowCreditsPacket const& packet) /*override*/;

    // vIndex: 151
    virtual void handle(::NetworkIdentifier const& source, ::SimpleEventPacket const& packet) /*override*/;

    // vIndex: 146
    virtual void handle(::NetworkIdentifier const& source, ::SpawnExperienceOrbPacket const& packet) /*override*/;

    // vIndex: 116
    virtual void handle(::NetworkIdentifier const& source, ::StructureBlockUpdatePacket const& packet) /*override*/;

    // vIndex: 115
    virtual void
    handle(::NetworkIdentifier const& source, ::StructureTemplateDataRequestPacket const& packet) /*override*/;

    // vIndex: 225
    virtual void handle(::NetworkIdentifier const& source, ::SubClientLoginPacket const& packet) /*override*/;

    // vIndex: 215
    virtual void handle(::NetworkIdentifier const& source, ::TextPacket const& packet) /*override*/;

    // vIndex: 61
    virtual void handle(::NetworkIdentifier const& source, ::MultiplayerSettingsPacket const& packet) /*override*/;

    // vIndex: 60
    virtual void handle(::NetworkIdentifier const& source, ::SettingsCommandPacket const& packet) /*override*/;

    // vIndex: 59
    virtual void handle(::NetworkIdentifier const& source, ::AnvilDamagePacket const& packet) /*override*/;

    // vIndex: 156
    virtual void handle(::NetworkIdentifier const& source, ::SubChunkRequestPacket const& packet) /*override*/;

    // vIndex: 42
    virtual void handle(::NetworkIdentifier const& source, ::CodeBuilderSourcePacket const& packet) /*override*/;

    // vIndex: 54
    virtual void handle(::NetworkIdentifier const&, ::ChangeMobPropertyPacket const& packet) /*override*/;

    // vIndex: 39
    virtual void handle(::NetworkIdentifier const& source, ::RequestAbilityPacket const& packet) /*override*/;

    // vIndex: 35
    virtual void handle(::NetworkIdentifier const& source, ::RequestNetworkSettingsPacket const& packet) /*override*/;

    // vIndex: 38
    virtual void handle(::NetworkIdentifier const& source, ::RequestPermissionsPacket const& packet) /*override*/;

    // vIndex: 87
    virtual void handle(::NetworkIdentifier const& source, ::EditorNetworkPacket const& packet) /*override*/;

    // vIndex: 34
    virtual void handle(::NetworkIdentifier const& source, ::GameTestRequestPacket const& packet) /*override*/;

    // vIndex: 26
    virtual void
    handle(::NetworkIdentifier const& source, ::SetPlayerInventoryOptionsPacket const& packet) /*override*/;

    // vIndex: 23
    virtual void handle(::NetworkIdentifier const& source, ::ServerboundLoadingScreenPacket const& packet) /*override*/;

    // vIndex: 22
    virtual void handle(::NetworkIdentifier const& source, ::ServerboundDiagnosticsPacket const& packet) /*override*/;

    // vIndex: 18
    virtual void handle(::NetworkIdentifier const& source, ::UpdateClientOptionsPacket const& packet) /*override*/;

    // vIndex: 4
    virtual void onTick() /*override*/;

    // vIndex: 15
    virtual ::GameSpecificNetEventCallback* getGameSpecificNetEventCallback() /*override*/;

    // vIndex: 2
    virtual void onConnect(::NetworkIdentifier const& id) /*override*/;

    // vIndex: 1
    virtual void completeHandshake(::NetworkIdentifier const& source);

    // vIndex: 2
    virtual ::ServerPlayer* _getServerPlayer(::NetworkIdentifier const& source, ::SubClientId subId);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerNetworkHandler(
        ::GameCallbacks&                                            gameCallbacks,
        ::Bedrock::NonOwnerPointer<::ILevel> const&                 level,
        ::ServerNetworkSystem&                                      network,
        ::PrivateKeyManager&                                        serverKeys,
        ::ServerLocator&                                            serverLocator,
        ::PacketSender&                                             packetSender,
        ::AllowList&                                                allowList,
        ::PermissionsFile*                                          permissionsFile,
        ::mce::UUID const&                                          hostPlayerId,
        int                                                         maxChunkRadius,
        int                                                         maxNumPlayers,
        ::MinecraftCommands&                                        commandHandler,
        ::IMinecraftApp&                                            app,
        ::std::unordered_map<::PackIdVersion, ::std::string> const& packIdToContentKey,
        ::Scheduler&                                                scheduler,
        ::Bedrock::NonOwnerPointer<::TextFilteringProcessor>        textFilteringProcessor,
        ::optional_ref<::MinecraftGameTest>                         gameTest,
        ::ServiceReference<::AppConfigs>                            appConfigs,
        ::ServiceReference<::Social::MultiplayerServiceManager>     multiplayerServiceManager,
        ::NetworkServerConfig                                       networkServerConfig
    );

    MCAPI void
    SetServerIdentifiers(::std::string const& serverId, ::std::string const& worldId, ::std::string const& scenarioId);

    MCAPI void _buildSubChunkPacketData(
        ::NetworkIdentifier const&     source,
        ::ServerPlayer const*          player,
        ::SubChunkRequestPacket const& packet,
        ::SubChunkPacket&              responsePacket,
        uint                           requestCount,
        bool                           clientCacheEnabled
    );

    MCAPI ::ServerPlayer& _createNewPlayer(
        ::NetworkIdentifier const&          source,
        ::SubClientConnectionRequest const& connectionRequest,
        ::SubClientId                       subid
    );

    MCAPI void _decideIfSkinIsTrusted(::SerializedSkin& skin);

    MCAPI void _displayGameMessage(::Player const& sender, ::ChatEvent& chatEvent);

    MCAPI ::std::string _extractFirstConnectionData(::NetworkIdentifier const& source);

    MCAPI int _getActiveAndInProgressPlayerCount(::mce::UUID excludePlayer) const;

    MCAPI ::std::string
    _getDisplayName(::GameServerToken const& token, bool isThirdPartyNameOnly, ::std::string const& thirdPartyName)
        const;

    MCAPI ::std::optional<::MessToken> _getMessToken(::std::string const& eduTokenChain, bool isHostingPlayer);

    MCAPI ::ResourcePackFileUploadManager&
    _getResourcePackFileUploadManager(::NetworkIdentifier const& source, ::std::string const& resourceName);

    MCAPI void _handleSetDefaultGameType(
        ::ServerPlayer const&             playerSettingGameType,
        ::SetDefaultGameTypePacket const& packet
    ) const;

    MCAPI void _handleSetDifficulty(::ServerPlayer const& player, ::SetDifficultyPacket const& packet) const;

    MCAPI bool _isServerTextEnabled(::ServerTextEvent const& textEvent) const;

    MCAPI bool _isValidThirdPartyName(::GameServerToken const& token, ::std::string const& thirdPartyName) const;

    MCAPI bool _loadNewPlayer(::ServerPlayer& newPlayer, bool isXboxLive);

    MCAPI void _onClientAuthenticated(::NetworkIdentifier const& source, ::GameServerToken const& token);

    MCAPI void _onPlayerLeft(::ServerPlayer* player, bool skipMessage);

    MCAPI void _onSubClientAuthenticated(
        ::NetworkIdentifier const&    source,
        ::GameServerToken const&      token,
        ::SubClientLoginPacket const& packet
    );

    MCAPI bool _playerHasPermissionToFly(
        ::UserEntityIdentifierComponent const* userIdentifier,
        ::ServerPlayer const*                  serverPlayer
    ) const;

    MCAPI bool _processClientAuthPlayerActions(::ServerPlayer& player, ::PlayerActionPacket const& packet);

    MCAPI void _processServerAuthPlayerActions(
        ::ServerPlayer&             player,
        ::NetworkIdentifier const&  source,
        ::PlayerActionPacket const& packet
    );

    MCAPI void _sendAdditionalLevelData(::ServerPlayer& newPlayer, ::NetworkIdentifier const& source);

    MCAPI void _sendLevelData(::ServerPlayer& newPlayer, ::NetworkIdentifier const& source);

    MCAPI bool _updatePermissions(
        ::ServerPlayer const&             requester,
        ::RequestPermissionsPacket const& packet,
        ::Abilities&                      abilities,
        ::PermissionsHandler&             permissions,
        ::Player*                         player
    );

    MCAPI void addToDenyList(::mce::UUID const& uuid, ::std::string const& xuid);

    MCAPI void allowIncomingConnections(::std::string const& serverName, bool shouldAnnounce);

    MCAPI ::OwnerPtr<::EntityContext>
    createNewPlayer(::NetworkIdentifier const& source, ::ConnectionRequest const& connectionRequest);

    MCAPI ::OwnerPtr<::EntityContext> createSimulatedPlayer(
        ::std::string const&             name,
        ::std::string const&             xuid,
        ::std::optional<::ActorUniqueID> idOverride
    );

    MCAPI void disallowIncomingConnections();

    MCAPI void disconnectClient(
        ::NetworkIdentifier const&         id,
        ::Connection::DisconnectFailReason discoReason,
        ::std::string const&               message,
        ::std::optional<::std::string>     filteredMessage,
        bool                               skipMessage
    );

    MCAPI void disconnectClient(
        ::NetworkIdentifier const&         id,
        ::SubClientId                      subId,
        ::Connection::DisconnectFailReason discoReason,
        ::std::string const&               message,
        ::std::optional<::std::string>     filteredMessage,
        bool                               skipMessage
    );

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

    MCAPI void onReady_ClientGeneration(::Player& newPlayer, ::NetworkIdentifier const& source);

    MCAPI void persistPlayerPermissionsToDisk(
        ::UserEntityIdentifierComponent const& userIdentifier,
        ::PlayerPermissionLevel                playerPermission
    );

    MCAPI void removeFromDenyList(::mce::UUID const& uuid, ::std::string const& xuid);

    MCAPI void sendLoginMessageLocal(
        ::NetworkIdentifier const& source,
        ::ConnectionRequest const& connectionRequest,
        ::ServerPlayer&            player
    );

    MCAPI void sendSubClientLoginMessageLocal(
        ::NetworkIdentifier const&          source,
        ::SubClientConnectionRequest const& connectionRequest,
        ::SubClientId                       subid
    );

    MCAPI void setAutomationClient(::Bedrock::NonOwnerPointer<::Automation::AutomationClient> client);

    MCAPI void setNewPlayerPermissions(::ServerPlayer& newPlayer);

    MCAPI bool trytLoadPlayer(::ServerPlayer& player, ::ConnectionRequest const& connectionRequest);

    MCAPI void updateServerAnnouncement();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _updateCommandBlock(
        ::BlockSource&                             region,
        ::CommandBlockUpdatePacket const&          packet,
        ::Bedrock::Safety::RedactableString const* redactedName
    );

    MCAPI static void handle(::ServerPlayer* player, ::std::shared_ptr<::InventoryTransactionPacket> packet);

    MCAPI static void handle(::Player* player, ::PlayerAuthInputPacket const& packet);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::GameCallbacks&                                            gameCallbacks,
        ::Bedrock::NonOwnerPointer<::ILevel> const&                 level,
        ::ServerNetworkSystem&                                      network,
        ::PrivateKeyManager&                                        serverKeys,
        ::ServerLocator&                                            serverLocator,
        ::PacketSender&                                             packetSender,
        ::AllowList&                                                allowList,
        ::PermissionsFile*                                          permissionsFile,
        ::mce::UUID const&                                          hostPlayerId,
        int                                                         maxChunkRadius,
        int                                                         maxNumPlayers,
        ::MinecraftCommands&                                        commandHandler,
        ::IMinecraftApp&                                            app,
        ::std::unordered_map<::PackIdVersion, ::std::string> const& packIdToContentKey,
        ::Scheduler&                                                scheduler,
        ::Bedrock::NonOwnerPointer<::TextFilteringProcessor>        textFilteringProcessor,
        ::optional_ref<::MinecraftGameTest>                         gameTest,
        ::ServiceReference<::AppConfigs>                            appConfigs,
        ::ServiceReference<::Social::MultiplayerServiceManager>     multiplayerServiceManager,
        ::NetworkServerConfig                                       networkServerConfig
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
    MCAPI void $onValidPacketReceived(
        ::NetworkIdentifier const& netId,
        ::MinecraftPacketIds       packetId,
        ::SubClientId              senderSubId,
        ::SubClientId
    );

    MCAPI void $onWebsocketRequest(
        ::std::string const&    serverAddress,
        ::std::string const&    payload,
        ::std::function<void()> errorCallback
    );

    MCAPI void $onInvalidPlayerJoinedLobby(::mce::UUID const& uuid, ::std::string const& xuid);

    MCAPI void $onXboxUserBlocked(::std::string const& xuid);

    MCAPI void $onXboxUserUnblocked(::std::string const& xuid);

    MCFOLD void $onPlayerReady(::Player& player);

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

    MCAPI void $sendServerLegacyParticle(::ParticleType name, ::Vec3 const& pos, ::Vec3 const&, int data);

    MCAPI void $onTransferRequest(::NetworkIdentifier const& id, ::std::string const& serverAddress, int serverPort);

    MCAPI ::IncomingPacketFilterResult $allowIncomingPacketId(
        ::NetworkIdentifierWithSubId const& sender,
        ::MinecraftPacketIds                packetId,
        uint64                              packetSize
    );

    MCAPI ::OutgoingPacketFilterResult
    $allowOutgoingPacket(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ActorEventPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ActorPickRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::AnimatePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::BlockActorDataPacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::BlockPickRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::LecternUpdatePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::BookEditPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::BossEventPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ClientCameraAimAssistPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ClientCacheStatusPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ClientCacheBlobStatusPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ClientMovementPredictionSyncPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ClientToServerHandshakePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::CommandBlockUpdatePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::CommandRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::CompletedUsingItemPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ContainerClosePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::DebugInfoPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::CreatePhotoPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::DisconnectPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::EmoteListPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::EmotePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::InteractPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::std::shared_ptr<::InventoryTransactionPacket> packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ItemStackRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::LabTablePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::LevelSoundEventPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::LoginPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::MapCreateLockedCopyPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::MapInfoRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::MobEquipmentPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ModalFormResponsePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::MoveActorAbsolutePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::MovePlayerPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::NetworkStackLatencyPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::NpcRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PhotoTransferPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerActionPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerAuthInputPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerHotbarPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerInputPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerSkinPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PlayerToggleCrafterSlotRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PositionTrackingDBClientRequestPacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const& source, ::PurchaseReceiptPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::RequestChunkRadiusPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ResourcePackChunkRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::RespawnPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::PassengerJumpPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetDefaultGameTypePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetDifficultyPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetLocalPlayerAsInitializedPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetPlayerGameTypePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::UpdatePlayerGameTypePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ScriptMessagePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ShowCreditsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SimpleEventPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SpawnExperienceOrbPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::StructureBlockUpdatePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::StructureTemplateDataRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SubClientLoginPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::TextPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::MultiplayerSettingsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SettingsCommandPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::AnvilDamagePacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SubChunkRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::CodeBuilderSourcePacket const& packet);

    MCFOLD void $handle(::NetworkIdentifier const&, ::ChangeMobPropertyPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::RequestAbilityPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::RequestNetworkSettingsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::RequestPermissionsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::EditorNetworkPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::GameTestRequestPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::SetPlayerInventoryOptionsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ServerboundLoadingScreenPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::ServerboundDiagnosticsPacket const& packet);

    MCAPI void $handle(::NetworkIdentifier const& source, ::UpdateClientOptionsPacket const& packet);

    MCAPI void $onTick();

    MCAPI ::GameSpecificNetEventCallback* $getGameSpecificNetEventCallback();

    MCAPI void $onConnect(::NetworkIdentifier const& id);

    MCAPI void $completeHandshake(::NetworkIdentifier const& source);

    MCAPI ::ServerPlayer* $_getServerPlayer(::NetworkIdentifier const& source, ::SubClientId subId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForNetEventCallback();

    MCAPI static void** $vftableForMultiplayerServiceObserver();

    MCAPI static void** $vftableForXboxLiveUserObserver();

    MCAPI static void** $vftableForLevelListener();

    MCAPI static void** $vftableForEnableQueueForMainThread();
    // NOLINTEND
};
