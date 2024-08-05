#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/ErrorInfo.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/SubClientId.h"
#include "mc/enums/TransportLayer.h"
#include "mc/enums/connection/DisconnectFailReason.h"
#include "mc/resources/PacketViolationResponse.h"

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

    MCVAPI void onAllConnectionsClosed(::Connection::DisconnectFailReason, std::string const&, bool);

    MCVAPI void onAllRemoteConnectionsClosed(::Connection::DisconnectFailReason, std::string const&, bool);

    MCVAPI void
    onConnectionClosed(class NetworkIdentifier const&, ::Connection::DisconnectFailReason, std::string const&, bool);

    MCVAPI bool onNewIncomingConnection(class NetworkIdentifier const& id, std::shared_ptr<class NetworkPeer>&& peer);

    MCVAPI bool onNewOutgoingConnection(class NetworkIdentifier const& id, std::shared_ptr<class NetworkPeer>&& peer);

    MCVAPI void onOutgoingConnectionFailed(::Connection::DisconnectFailReason, std::string const&);

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
    MCAPI explicit NetworkSystem(struct NetworkSystem::Dependencies&&);

    MCAPI ::TransportLayer _getTransportLayer() const;

    MCAPI void _initNetworkStatistics(std::unique_ptr<class NetworkStatistics>&&);

    MCAPI bool _isUsingNetherNetTransportLayer() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class NetworkConnection* _getConnectionFromId(class NetworkIdentifier const& id) const;

    MCAPI void _handlePacketViolation(
        struct Bedrock::ErrorInfo<std::error_code> const&,
        ::PacketViolationResponse,
        ::MinecraftPacketIds,
        class NetworkIdentifier const&,
        class NetworkConnection&,
        ::SubClientId
    );

    MCAPI void _sendInternal(class NetworkIdentifier const& id, class Packet const& packet, std::string const& data);

    MCAPI bool
    _sortAndPacketizeEvents(class NetworkConnection& connection, std::chrono::steady_clock::time_point endTime);

    // NOLINTEND
};
