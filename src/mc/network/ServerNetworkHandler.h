#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/ParticleType.h"
#include "mc/enums/SubClientId.h"
#include "mc/enums/connection/DisconnectFailReason.h"
#include "mc/events/ServerTextEvent.h"
#include "mc/services/ServiceReference.h"
#include "mc/world/actor/player/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
namespace Automation { class AutomationClient; }
namespace Social { class MultiplayerServiceManager; }
namespace mce { class UUID; }
// clang-format on

class ServerNetworkHandler {
public:
    // ServerNetworkHandler inner types declare
    // clang-format off
    class Client;
    struct HandlerToggles;
    // clang-format on

    // ServerNetworkHandler inner types define
    class Client {
    public:
        // prevent constructor by default
        Client& operator=(Client const&);
        Client(Client const&);
        Client();

    public:
        // NOLINTBEGIN
        MCAPI void removeSubClientRequest(::SubClientId subClientId);

        // NOLINTEND
    };

    struct HandlerToggles {
    public:
        // prevent constructor by default
        HandlerToggles& operator=(HandlerToggles const&);
        HandlerToggles(HandlerToggles const&);
        HandlerToggles();
    };

public:
    // prevent constructor by default
    ServerNetworkHandler& operator=(ServerNetworkHandler const&);
    ServerNetworkHandler(ServerNetworkHandler const&);
    ServerNetworkHandler();

public:
    // NOLINTBEGIN
    MCVAPI class ServerPlayer* _getServerPlayer(class NetworkIdentifier const& source, ::SubClientId subId);

    MCVAPI bool allowIncomingPacketId(class NetworkIdentifier const& id, ::MinecraftPacketIds packetId);

    MCVAPI void completeHandshake(class NetworkIdentifier const&);

    MCVAPI class GameSpecificNetEventCallback* getGameSpecificNetEventCallback();

    MCVAPI void handle(class NetworkIdentifier const&, class ChangeMobPropertyPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class PhotoTransferPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class CreatePhotoPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class EditorNetworkPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class PurchaseReceiptPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class CompletedUsingItemPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class ItemStackRequestPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class PlayerActionPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class GameTestRequestPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class SetPlayerInventoryOptionsPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class MovePlayerPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class PlayerSkinPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class CodeBuilderSourcePacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class NpcRequestPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class LabTablePacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class ClientCacheStatusPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class BossEventPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class ResourcePackChunkRequestPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class BookEditPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class MultiplayerSettingsPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class MapCreateLockedCopyPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class BlockPickRequestPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class UpdatePlayerGameTypePacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class LevelSoundEventPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class LevelSoundEventPacketV2 const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class RequestAbilityPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class PlayerHotbarPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class ActorEventPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class DisconnectPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class ModalFormResponsePacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class PassengerJumpPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class EmotePacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class SubChunkRequestPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class ClientCacheBlobStatusPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class MobEquipmentPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class CommandRequestPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class InteractPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class SetDifficultyPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class MapInfoRequestPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class EmoteListPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class SetLocalPlayerAsInitializedPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class SimpleEventPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, std::shared_ptr<class BlockActorDataPacket> packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class ScriptMessagePacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class RequestPermissionsPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class RequestChunkRadiusPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class ContainerClosePacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class TextPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class RespawnPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class AnvilDamagePacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class PlayerAuthInputPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class SpawnExperienceOrbPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class SettingsCommandPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class RequestNetworkSettingsPacket const& packet);

    MCVAPI void
    handle(class NetworkIdentifier const& source, class PositionTrackingDBClientRequestPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const&, class PlayerToggleCrafterSlotRequestPacket const&);

    MCVAPI void handle(class NetworkIdentifier const& source, class SetPlayerGameTypePacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class MoveActorAbsolutePacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class DebugInfoPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class LevelSoundEventPacketV1 const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class StructureBlockUpdatePacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class ActorPickRequestPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class LoginPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class PlayerInputPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class StructureTemplateDataRequestPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class NetworkStackLatencyPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const&, std::shared_ptr<class InventoryTransactionPacket>);

    MCVAPI void handle(class NetworkIdentifier const& source, class SubClientLoginPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class AnimatePacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class CommandBlockUpdatePacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class ClientToServerHandshakePacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class ShowCreditsPacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class LecternUpdatePacket const& packet);

    MCVAPI void handle(class NetworkIdentifier const& source, class SetDefaultGameTypePacket const& packet);

    MCVAPI void onConnect(class NetworkIdentifier const&);

    MCVAPI void
    onDisconnect(class NetworkIdentifier const&, ::Connection::DisconnectFailReason, std::string const&, bool, std::string const&);

    MCVAPI void onInvalidPlayerJoinedLobby(class mce::UUID const& uuid, std::string const& xuid);

    MCVAPI void onPlayerReady(class Player& player);

    MCVAPI void onTick();

    MCVAPI void onTransferRequest(class NetworkIdentifier const& id, std::string const& serverAddress, int serverPort);

    MCVAPI void onWebsocketRequest(
        std::string const&    serverAddress,
        std::string const&    payload,
        std::function<void()> errorCallback
    );

    MCVAPI void onXboxUserBlocked(std::string const& xuid);

    MCVAPI void onXboxUserUnblocked(std::string const& xuid);

    MCVAPI void sendServerLegacyParticle(::ParticleType name, class Vec3 const& pos, class Vec3 const&, int data);

    MCVAPI ~ServerNetworkHandler();

    MCAPI
    ServerNetworkHandler(class GameCallbacks&, class Bedrock::NonOwnerPointer<class ILevel> const&, class ServerNetworkSystem&, class PrivateKeyManager&, class ServerLocator&, class PacketSender&, class AllowList&, class PermissionsFile*, class mce::UUID const&, int, std::vector<std::string> const&, std::string, int, class MinecraftCommands&, class IMinecraftApp&, std::unordered_map<struct PackIdVersion, std::string> const&, class Scheduler&, class Bedrock::NonOwnerPointer<class TextFilteringProcessor>, class optional_ref<class MinecraftGameTest>, class ServiceReference<class AppConfigs>, class ServiceReference<class Social::MultiplayerServiceManager>, struct NetworkPermissions const&, struct ServerNetworkHandler::HandlerToggles const&);

    MCAPI void SetServerIdentifiers(std::string const&, std::string const&, std::string const&);

    MCAPI void activateAllowList();

    MCAPI void addToDenyList(class mce::UUID const& uuid, std::string const& xuid);

    MCAPI void allowIncomingConnections(std::string const& serverName, bool shouldAnnounce);

    MCAPI class OwnerPtr<class EntityContext>
    createNewPlayer(class NetworkIdentifier const& source, class ConnectionRequest const& connectionRequest);

    MCAPI class OwnerPtr<class EntityContext> createSimulatedPlayer(std::string const& name, std::string const& xuid);

    MCAPI void disallowIncomingConnections();

    MCAPI void disconnectClient(
        class NetworkIdentifier const&     id,
        ::Connection::DisconnectFailReason subId,
        std::string const&                 message,
        bool                               skipMessage
    );

    MCAPI void disconnectClient(
        class NetworkIdentifier const&,
        ::SubClientId,
        ::Connection::DisconnectFailReason,
        std::string const&,
        bool
    );

    MCAPI void engineCancelResponseHelper(
        class NetworkIdentifier const&                source,
        class ResourcePackClientResponsePacket const& packet
    );

    MCAPI void engineDownloadingFinishedResponseHelper(
        class NetworkIdentifier const&                source,
        class ResourcePackClientResponsePacket const& packet
    );

    MCAPI void engineDownloadingResponseHelper(
        class NetworkIdentifier const&                source,
        class ResourcePackClientResponsePacket const& packet
    );

    MCAPI class ConnectionRequest const& fetchConnectionRequest(class NetworkIdentifier const& source);

    MCAPI std::string getGlobalMultiplayerCorrelationId() const;

    MCAPI bool isDedicatedServer();

    MCAPI bool isHost(class ServerPlayer& player);

    MCAPI void onReady_ClientGeneration(class Player& newPlayer, class NetworkIdentifier const& source);

    MCAPI void onStartShutdown();

    MCAPI void persistPlayerPermissionsToDisk(
        class UserEntityIdentifierComponent const&,
        ::PlayerPermissionLevel playerPermission
    );

    MCAPI void removeFromDenyList(class mce::UUID const& uuid, std::string const& xuid);

    MCAPI void sendLoginMessageLocal(
        class NetworkIdentifier const& source,
        class ConnectionRequest const& connectionRequest,
        class ServerPlayer&            player
    );

    MCAPI void setAutomationClient(class Bedrock::NonOwnerPointer<class Automation::AutomationClient> client);

    MCAPI int setMaxNumPlayers(int maxPlayers);

    MCAPI void setNewPlayerPermissions(class ServerPlayer& newPlayer);

    MCAPI bool trytLoadPlayer(class ServerPlayer& player, class ConnectionRequest const& connectionRequest);

    MCAPI void updateServerAnnouncement();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _buildSubChunkPacketData(
        class NetworkIdentifier const&     source,
        class ServerPlayer const*          player,
        class SubChunkRequestPacket const& packet,
        class SubChunkPacket&,
        uint,
        bool
    );

    MCAPI class ServerPlayer& _createNewPlayer(
        class NetworkIdentifier const&          source,
        class SubClientConnectionRequest const& connectionRequest,
        ::SubClientId                           subid
    );

    MCAPI void _displayGameMessage(class Player const& sender, struct ChatEvent&);

    MCAPI std::string _extractFirstConnectionData(class NetworkIdentifier const&);

    MCAPI int _getActiveAndInProgressPlayerCount(class mce::UUID excludePlayer) const;

    MCAPI std::string
    _getDisplayName(class Certificate const& certificate, bool isThirdPartyNameOnly, std::string const& thirdPartyName)
        const;

    MCAPI void _handleCommandBlockUpdatePacket(
        class ServerPlayer const&             player,
        class NetworkIdentifier const&        source,
        class CommandBlockUpdatePacket const& packet
    );

    MCAPI void _handleSetDefaultGameType(class ServerPlayer const&, class SetDefaultGameTypePacket const&) const;

    MCAPI void _handleSetDifficulty(class ServerPlayer const& player, class SetDifficultyPacket const& packet) const;

    MCAPI bool _isServerTextEnabled(::ServerTextEvent const&) const;

    MCAPI bool _isValidThirdPartyName(class Certificate const& certificate, std::string const& thirdPartyName) const;

    MCAPI bool _loadNewPlayer(class ServerPlayer& newPlayer, bool isXboxLive);

    MCAPI void _onClientAuthenticated(class NetworkIdentifier const& source, class Certificate const& certificate);

    MCAPI void _onPlayerLeft(class ServerPlayer* player, bool skipMessage);

    MCAPI void _onSubClientAuthenticated(
        class NetworkIdentifier const&    source,
        class Certificate const&          certificate,
        class SubClientLoginPacket const& packet
    );

    MCAPI void _sendAdditionalLevelData(class ServerPlayer& newPlayer, class NetworkIdentifier const& source);

    MCAPI void _sendLevelData(class ServerPlayer& newPlayer, class NetworkIdentifier const& source);

    MCAPI bool _updatePermissions(
        class ServerPlayer const&,
        class RequestPermissionsPacket const& packet,
        class Abilities&                      abilities,
        class PermissionsHandler&             permissions,
        class Player*                         player
    );

    // NOLINTEND
};
