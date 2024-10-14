#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/network/TransportLayer.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/platform/ErrorInfo.h"

class NetworkSystem {
public:
    // NetworkSystem inner types declare
    // clang-format off
    struct Dependencies;
    // clang-format on

    // NetworkSystem inner types define
    struct Dependencies {
    public:
        // prevent constructor by default
        Dependencies& operator=(Dependencies const&);
        Dependencies(Dependencies const&);
        Dependencies();

    public:
        // NOLINTBEGIN
        MCAPI ~Dependencies();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    NetworkSystem& operator=(NetworkSystem const&);
    NetworkSystem(NetworkSystem const&);
    NetworkSystem();

public:
    // NOLINTBEGIN
    MCVAPI void _onDisable();

    MCVAPI void _onEnable();

    MCVAPI ushort getDefaultGamePort() const;

    MCVAPI ushort getDefaultGamePortv6() const;

    MCVAPI void onAllConnectionsClosed(
        ::Connection::DisconnectFailReason discoReason,
        std::string const&                 reasonMessage,
        bool                               skipDisconnectMessage
    );

    MCVAPI void onAllRemoteConnectionsClosed(
        ::Connection::DisconnectFailReason discoReason,
        std::string const&                 reasonMessage,
        bool                               skipDisconnectMessage
    );

    MCVAPI void onConnectionClosed(
        class NetworkIdentifier const&     id,
        ::Connection::DisconnectFailReason discoReason,
        std::string const&                 reasonMessage,
        bool                               skipDisconnectMessage
    );

    MCVAPI bool onNewIncomingConnection(class NetworkIdentifier const& id, std::shared_ptr<class NetworkPeer>&& peer);

    MCVAPI bool onNewOutgoingConnection(class NetworkIdentifier const& id, std::shared_ptr<class NetworkPeer>&& peer);

    MCVAPI void
    onOutgoingConnectionFailed(::Connection::DisconnectFailReason discoReason, std::string const& reasonMessage);

    MCVAPI void onWebsocketRequest(
        std::string const&    serverAddress,
        std::string const&    payload,
        std::function<void()> errorCallback
    );

    MCVAPI bool useIPv4Only() const;

    MCVAPI bool useIPv6Only() const;

    MCVAPI ~NetworkSystem();

    MCAPI void disconnect();

    MCAPI void enableAsyncFlush(class NetworkIdentifier const& id);

    MCAPI std::weak_ptr<class CompressedNetworkPeer> getCompressedPeerForUser(class NetworkIdentifier const& id);

    MCAPI std::vector<std::unique_ptr<class NetworkConnection>> const& getConnections() const;

    MCAPI std::weak_ptr<class EncryptedNetworkPeer> getEncryptedPeerForUser(class NetworkIdentifier const& id);

    MCAPI class NetworkStatistics const* getNetworkStatistics() const;

    MCAPI class NetworkPeer* getPeerForUser(class NetworkIdentifier const& id);

    MCAPI Bedrock::NotNullNonOwnerPtr<class RemoteConnector const> getRemoteConnector() const;

    MCAPI Bedrock::NotNullNonOwnerPtr<class RemoteConnector> getRemoteConnector();

    MCAPI class ResourcePackFileUploadManager& getResourcePackUploadManager(
        class PacketSender&            packetSender,
        class NetworkIdentifier const& source,
        std::string const&             resourceName
    );

    MCAPI class ServerLocator& getServerLocator();

    MCAPI bool isServer() const;

    MCAPI void registerServerInstance(class NetEventCallback& callback);

    MCAPI void runEvents(bool networkIsCritical);

    MCAPI void send(class NetworkIdentifier const& id, class Packet const& packet, ::SubClientId senderSubId);

    MCAPI void setCloseConnection(class NetworkIdentifier const& id);

    MCAPI void unregisterClientOrServerInstance(::SubClientId const& subID);

    MCAPI void update(std::vector<class WeakEntityRef> const* userList);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI explicit NetworkSystem(struct NetworkSystem::Dependencies&& deps);

    MCAPI ::TransportLayer _getTransportLayer() const;

    MCAPI void _initNetworkStatistics(std::unique_ptr<class NetworkStatistics>&& stats);

    MCAPI bool _isUsingNetherNetTransportLayer() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class NetworkConnection* _getConnectionFromId(class NetworkIdentifier const& id) const;

    MCAPI void _handlePacketViolation(
        struct Bedrock::ErrorInfo<std::error_code> const& error,
        ::PacketViolationResponse                         violationResponse,
        ::MinecraftPacketIds                              violatingPacketId,
        class NetworkIdentifier const&                    netId,
        class NetworkConnection&                          connection,
        ::SubClientId                                     clientSubId
    );

    MCAPI void _sendInternal(class NetworkIdentifier const& id, class Packet const& packet, std::string const& data);

    MCAPI bool
    _sortAndPacketizeEvents(class NetworkConnection& connection, std::chrono::steady_clock::time_point endTime);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForNetworkEnableDisableListener();

    MCAPI static void** $vftableForRakNetConnectorConnectionCallbacks();

    MCAPI static void** $vftableForRakPeerHelperIPSupportInterface();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI void _onDisable$();

    MCAPI void _onEnable$();

    MCAPI ushort getDefaultGamePort$() const;

    MCAPI ushort getDefaultGamePortv6$() const;

    MCAPI void onAllConnectionsClosed$(
        ::Connection::DisconnectFailReason discoReason,
        std::string const&                 reasonMessage,
        bool                               skipDisconnectMessage
    );

    MCAPI void onAllRemoteConnectionsClosed$(
        ::Connection::DisconnectFailReason discoReason,
        std::string const&                 reasonMessage,
        bool                               skipDisconnectMessage
    );

    MCAPI void onConnectionClosed$(
        class NetworkIdentifier const&     id,
        ::Connection::DisconnectFailReason discoReason,
        std::string const&                 reasonMessage,
        bool                               skipDisconnectMessage
    );

    MCAPI bool onNewIncomingConnection$(class NetworkIdentifier const& id, std::shared_ptr<class NetworkPeer>&& peer);

    MCAPI bool onNewOutgoingConnection$(class NetworkIdentifier const& id, std::shared_ptr<class NetworkPeer>&& peer);

    MCAPI void
    onOutgoingConnectionFailed$(::Connection::DisconnectFailReason discoReason, std::string const& reasonMessage);

    MCAPI void onWebsocketRequest$(
        std::string const&    serverAddress,
        std::string const&    payload,
        std::function<void()> errorCallback
    );

    MCAPI bool useIPv4Only$() const;

    MCAPI bool useIPv6Only$() const;

    // NOLINTEND
};
