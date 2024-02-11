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
        // symbol: ??1Dependencies@NetworkSystem@@QEAA@XZ
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
    // symbol: ?_onDisable@NetworkSystem@@EEAAXXZ
    MCVAPI void _onDisable();

    // symbol: ?_onEnable@NetworkSystem@@EEAAXXZ
    MCVAPI void _onEnable();

    // symbol: ?getDefaultGamePort@NetworkSystem@@UEBAGXZ
    MCVAPI ushort getDefaultGamePort() const;

    // symbol: ?getDefaultGamePortv6@NetworkSystem@@UEBAGXZ
    MCVAPI ushort getDefaultGamePortv6() const;

    // symbol:
    // ?onAllConnectionsClosed@NetworkSystem@@EEAAXW4DisconnectFailReason@Connection@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCVAPI void onAllConnectionsClosed(::Connection::DisconnectFailReason, std::string const&, bool);

    // symbol:
    // ?onAllRemoteConnectionsClosed@NetworkSystem@@EEAAXW4DisconnectFailReason@Connection@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCVAPI void onAllRemoteConnectionsClosed(::Connection::DisconnectFailReason, std::string const&, bool);

    // symbol:
    // ?onConnectionClosed@NetworkSystem@@EEAAXAEBVNetworkIdentifier@@W4DisconnectFailReason@Connection@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCVAPI void
    onConnectionClosed(class NetworkIdentifier const&, ::Connection::DisconnectFailReason, std::string const&, bool);

    // symbol:
    // ?onNewIncomingConnection@NetworkSystem@@EEAA_NAEBVNetworkIdentifier@@$$QEAV?$shared_ptr@VNetworkPeer@@@std@@@Z
    MCVAPI bool onNewIncomingConnection(class NetworkIdentifier const& id, std::shared_ptr<class NetworkPeer>&& peer);

    // symbol:
    // ?onNewOutgoingConnection@NetworkSystem@@EEAA_NAEBVNetworkIdentifier@@$$QEAV?$shared_ptr@VNetworkPeer@@@std@@@Z
    MCVAPI bool onNewOutgoingConnection(class NetworkIdentifier const& id, std::shared_ptr<class NetworkPeer>&& peer);

    // symbol:
    // ?onOutgoingConnectionFailed@NetworkSystem@@EEAAXW4DisconnectFailReason@Connection@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void onOutgoingConnectionFailed(::Connection::DisconnectFailReason, std::string const&);

    // symbol:
    // ?onWebsocketRequest@NetworkSystem@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0V?$function@$$A6AXXZ@3@@Z
    MCVAPI void onWebsocketRequest(
        std::string const&    serverAddress,
        std::string const&    payload,
        std::function<void()> errorCallback
    );

    // symbol: ?useIPv4Only@NetworkSystem@@UEBA_NXZ
    MCVAPI bool useIPv4Only() const;

    // symbol: ?useIPv6Only@NetworkSystem@@UEBA_NXZ
    MCVAPI bool useIPv6Only() const;

    // symbol: ??1NetworkSystem@@MEAA@XZ
    MCVAPI ~NetworkSystem();

    // symbol: ?disconnect@NetworkSystem@@QEAAXXZ
    MCAPI void disconnect();

    // symbol: ?enableAsyncFlush@NetworkSystem@@QEAAXAEBVNetworkIdentifier@@@Z
    MCAPI void enableAsyncFlush(class NetworkIdentifier const& id);

    // symbol: ?flush@NetworkSystem@@QEAAXAEBVNetworkIdentifier@@$$QEAV?$function@$$A6AXXZ@std@@@Z
    MCAPI void flush(class NetworkIdentifier const& id, std::function<void()>&& callback);

    // symbol:
    // ?getCompressedPeerForUser@NetworkSystem@@QEAA?AV?$weak_ptr@VCompressedNetworkPeer@@@std@@AEBVNetworkIdentifier@@@Z
    MCAPI std::weak_ptr<class CompressedNetworkPeer> getCompressedPeerForUser(class NetworkIdentifier const& id);

    // symbol:
    // ?getConnections@NetworkSystem@@QEBAAEBV?$vector@V?$unique_ptr@VNetworkConnection@@U?$default_delete@VNetworkConnection@@@std@@@std@@V?$allocator@V?$unique_ptr@VNetworkConnection@@U?$default_delete@VNetworkConnection@@@std@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::unique_ptr<class NetworkConnection>> const& getConnections() const;

    // symbol:
    // ?getEncryptedPeerForUser@NetworkSystem@@QEAA?AV?$weak_ptr@VEncryptedNetworkPeer@@@std@@AEBVNetworkIdentifier@@@Z
    MCAPI std::weak_ptr<class EncryptedNetworkPeer> getEncryptedPeerForUser(class NetworkIdentifier const& id);

    // symbol: ?getNetworkStatistics@NetworkSystem@@QEBAPEBVNetworkStatistics@@XZ
    MCAPI class NetworkStatistics const* getNetworkStatistics() const;

    // symbol: ?getPeerForUser@NetworkSystem@@QEAAPEAVNetworkPeer@@AEBVNetworkIdentifier@@@Z
    MCAPI class NetworkPeer* getPeerForUser(class NetworkIdentifier const& id);

    // symbol:
    // ?getRemoteConnector@NetworkSystem@@QEBA?AV?$not_null@V?$NonOwnerPointer@$$CBVRemoteConnector@@@Bedrock@@@gsl@@XZ
    MCAPI Bedrock::NotNullNonOwnerPtr<class RemoteConnector const> getRemoteConnector() const;

    // symbol:
    // ?getRemoteConnector@NetworkSystem@@QEAA?AV?$not_null@V?$NonOwnerPointer@VRemoteConnector@@@Bedrock@@@gsl@@XZ
    MCAPI Bedrock::NotNullNonOwnerPtr<class RemoteConnector> getRemoteConnector();

    // symbol:
    // ?getResourcePackUploadManager@NetworkSystem@@QEAAAEAVResourcePackFileUploadManager@@AEAVPacketSender@@AEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class ResourcePackFileUploadManager& getResourcePackUploadManager(
        class PacketSender&            packetSender,
        class NetworkIdentifier const& source,
        std::string const&             resourceName
    );

    // symbol: ?getServerLocator@NetworkSystem@@QEAAAEAVServerLocator@@XZ
    MCAPI class ServerLocator& getServerLocator();

    // symbol: ?isServer@NetworkSystem@@QEBA_NXZ
    MCAPI bool isServer() const;

    // symbol: ?registerServerInstance@NetworkSystem@@QEAAXAEAVNetEventCallback@@@Z
    MCAPI void registerServerInstance(class NetEventCallback& callback);

    // symbol: ?runEvents@NetworkSystem@@QEAAX_N@Z
    MCAPI void runEvents(bool networkIsCritical);

    // symbol: ?send@NetworkSystem@@QEAAXAEBVNetworkIdentifier@@AEBVPacket@@W4SubClientId@@@Z
    MCAPI void send(class NetworkIdentifier const& id, class Packet const& packet, ::SubClientId senderSubId);

    // symbol:
    // ?sendToMultiple@NetworkSystem@@QEAAXAEBV?$vector@UNetworkIdentifierWithSubId@@V?$allocator@UNetworkIdentifierWithSubId@@@std@@@std@@AEBVPacket@@@Z
    MCAPI void sendToMultiple(std::vector<struct NetworkIdentifierWithSubId> const& ids, class Packet const& packet);

    // symbol: ?setCloseConnection@NetworkSystem@@QEAAXAEBVNetworkIdentifier@@@Z
    MCAPI void setCloseConnection(class NetworkIdentifier const& id);

    // symbol: ?unregisterClientOrServerInstance@NetworkSystem@@QEAAXAEBW4SubClientId@@@Z
    MCAPI void unregisterClientOrServerInstance(::SubClientId const& subID);

    // symbol: ?update@NetworkSystem@@QEAAXPEBV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@@Z
    MCAPI void update(std::vector<class WeakEntityRef> const* userList);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0NetworkSystem@@IEAA@$$QEAUDependencies@0@@Z
    MCAPI explicit NetworkSystem(struct NetworkSystem::Dependencies&&);

    // symbol: ?_getTransportLayer@NetworkSystem@@IEBA?AW4TransportLayer@@XZ
    MCAPI ::TransportLayer _getTransportLayer() const;

    // symbol: ?_isUsingNetherNetTransportLayer@NetworkSystem@@IEBA_NXZ
    MCAPI bool _isUsingNetherNetTransportLayer() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getConnectionFromId@NetworkSystem@@AEBAPEAVNetworkConnection@@AEBVNetworkIdentifier@@@Z
    MCAPI class NetworkConnection* _getConnectionFromId(class NetworkIdentifier const& id) const;

    // symbol:
    // ?_handlePacketViolation@NetworkSystem@@AEAAXAEBU?$ErrorInfo@Verror_code@std@@@Bedrock@@W4PacketViolationResponse@@W4MinecraftPacketIds@@AEBVNetworkIdentifier@@AEAVNetworkConnection@@W4SubClientId@@@Z
    MCAPI void _handlePacketViolation(
        struct Bedrock::ErrorInfo<std::error_code> const&,
        ::PacketViolationResponse,
        ::MinecraftPacketIds,
        class NetworkIdentifier const&,
        class NetworkConnection&,
        ::SubClientId
    );

    // symbol:
    // ?_sendInternal@NetworkSystem@@AEAAXAEBVNetworkIdentifier@@AEBVPacket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _sendInternal(class NetworkIdentifier const& id, class Packet const& packet, std::string const& data);

    // symbol:
    // ?_sortAndPacketizeEvents@NetworkSystem@@AEAA_NAEAVNetworkConnection@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
    MCAPI bool
    _sortAndPacketizeEvents(class NetworkConnection& connection, std::chrono::steady_clock::time_point endTime);

    // NOLINTEND
};
