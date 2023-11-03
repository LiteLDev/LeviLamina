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
    MCVAPI bool onNewIncomingConnection(class NetworkIdentifier const&, std::shared_ptr<class NetworkPeer>&&);

    // symbol:
    // ?onNewOutgoingConnection@NetworkSystem@@EEAA_NAEBVNetworkIdentifier@@$$QEAV?$shared_ptr@VNetworkPeer@@@std@@@Z
    MCVAPI bool onNewOutgoingConnection(class NetworkIdentifier const&, std::shared_ptr<class NetworkPeer>&&);

    // symbol:
    // ?onOutgoingConnectionFailed@NetworkSystem@@EEAAXW4DisconnectFailReason@Connection@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void onOutgoingConnectionFailed(::Connection::DisconnectFailReason, std::string const&);

    // symbol:
    // ?onWebsocketRequest@NetworkSystem@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0V?$function@$$A6AXXZ@3@@Z
    MCVAPI void onWebsocketRequest(std::string const&, std::string const&, std::function<void(void)>);

    // symbol: ?useIPv4Only@NetworkSystem@@UEBA_NXZ
    MCVAPI bool useIPv4Only() const;

    // symbol: ?useIPv6Only@NetworkSystem@@UEBA_NXZ
    MCVAPI bool useIPv6Only() const;

    // symbol: ??1NetworkSystem@@MEAA@XZ
    MCVAPI ~NetworkSystem();

    // symbol: ?disconnect@NetworkSystem@@QEAAXXZ
    MCAPI void disconnect();

    // symbol: ?enableAsyncFlush@NetworkSystem@@QEAAXAEBVNetworkIdentifier@@@Z
    MCAPI void enableAsyncFlush(class NetworkIdentifier const&);

    // symbol:
    // ?getCompressedPeerForUser@NetworkSystem@@QEAA?AV?$weak_ptr@VCompressedNetworkPeer@@@std@@AEBVNetworkIdentifier@@@Z
    MCAPI std::weak_ptr<class CompressedNetworkPeer> getCompressedPeerForUser(class NetworkIdentifier const&);

    // symbol:
    // ?getConnections@NetworkSystem@@QEBAAEBV?$vector@V?$unique_ptr@VNetworkConnection@@U?$default_delete@VNetworkConnection@@@std@@@std@@V?$allocator@V?$unique_ptr@VNetworkConnection@@U?$default_delete@VNetworkConnection@@@std@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::unique_ptr<class NetworkConnection>> const& getConnections() const;

    // symbol:
    // ?getEncryptedPeerForUser@NetworkSystem@@QEAA?AV?$weak_ptr@VEncryptedNetworkPeer@@@std@@AEBVNetworkIdentifier@@@Z
    MCAPI std::weak_ptr<class EncryptedNetworkPeer> getEncryptedPeerForUser(class NetworkIdentifier const&);

    // symbol: ?getLocalNetworkId@NetworkSystem@@QEBA?AVNetworkIdentifier@@XZ
    MCAPI class NetworkIdentifier getLocalNetworkId() const;

    // symbol: ?getNetworkStatistics@NetworkSystem@@QEBAPEBVNetworkStatistics@@XZ
    MCAPI class NetworkStatistics const* getNetworkStatistics() const;

    // symbol: ?getPeerForUser@NetworkSystem@@QEAAPEAVNetworkPeer@@AEBVNetworkIdentifier@@@Z
    MCAPI class NetworkPeer* getPeerForUser(class NetworkIdentifier const&);

    // symbol: ?getPrimaryNetworkId@NetworkSystem@@QEBA?AVNetworkIdentifier@@XZ
    MCAPI class NetworkIdentifier getPrimaryNetworkId() const;

    // symbol:
    // ?getRemoteConnector@NetworkSystem@@QEBA?AV?$not_null@V?$NonOwnerPointer@$$CBVRemoteConnector@@@Bedrock@@@gsl@@XZ
    MCAPI Bedrock::NotNullNonOwnerPtr<class RemoteConnector const> getRemoteConnector() const;

    // symbol:
    // ?getRemoteConnector@NetworkSystem@@QEAA?AV?$not_null@V?$NonOwnerPointer@VRemoteConnector@@@Bedrock@@@gsl@@XZ
    MCAPI Bedrock::NotNullNonOwnerPtr<class RemoteConnector> getRemoteConnector();

    // symbol:
    // ?getResourcePackUploadManager@NetworkSystem@@QEAAAEAVResourcePackFileUploadManager@@AEAVPacketSender@@AEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class ResourcePackFileUploadManager&
    getResourcePackUploadManager(class PacketSender&, class NetworkIdentifier const&, std::string const&);

    // symbol: ?getServerId@NetworkSystem@@QEBA?AVNetworkIdentifier@@XZ
    MCAPI class NetworkIdentifier getServerId() const;

    // symbol: ?getServerLocator@NetworkSystem@@QEAAAEAVServerLocator@@XZ
    MCAPI class ServerLocator& getServerLocator();

    // symbol: ?host@NetworkSystem@@QEAA_NAEBUConnectionDefinition@@@Z
    MCAPI bool host(struct ConnectionDefinition const&);

    // symbol: ?isHostingPlayer@NetworkSystem@@QEBA_NAEBVNetworkIdentifier@@AEBW4SubClientId@@@Z
    MCAPI bool isHostingPlayer(class NetworkIdentifier const&, ::SubClientId const&) const;

    // symbol: ?registerServerInstance@NetworkSystem@@QEAAXAEAVNetEventCallback@@@Z
    MCAPI void registerServerInstance(class NetEventCallback&);

    // symbol: ?runEvents@NetworkSystem@@QEAAX_N@Z
    MCAPI void runEvents(bool);

    // symbol: ?send@NetworkSystem@@QEAAXAEBVNetworkIdentifier@@AEBVPacket@@W4SubClientId@@@Z
    MCAPI void send(class NetworkIdentifier const&, class Packet const&, ::SubClientId);

    // symbol: ?setClientUpdateAndRenderThrottle@NetworkSystem@@QEAAX_NHM@Z
    MCAPI void setClientUpdateAndRenderThrottle(bool, int, float);

    // symbol: ?setCloseConnection@NetworkSystem@@QEAAXAEBVNetworkIdentifier@@@Z
    MCAPI void setCloseConnection(class NetworkIdentifier const&);

    // symbol: ?unregisterClientOrServerInstance@NetworkSystem@@QEAAXAEBW4SubClientId@@@Z
    MCAPI void unregisterClientOrServerInstance(::SubClientId const&);

    // symbol: ?update@NetworkSystem@@QEAAXPEBV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@@Z
    MCAPI void update(std::vector<class WeakEntityRef> const*);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0NetworkSystem@@IEAA@$$QEAUDependencies@0@@Z
    MCAPI explicit NetworkSystem(struct NetworkSystem::Dependencies&&);

    // symbol: ?_getTransportLayer@NetworkSystem@@IEBA?AW4TransportLayer@@XZ
    MCAPI ::TransportLayer _getTransportLayer() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getConnectionFromId@NetworkSystem@@AEBAPEAVNetworkConnection@@AEBVNetworkIdentifier@@@Z
    MCAPI class NetworkConnection* _getConnectionFromId(class NetworkIdentifier const&) const;

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
    MCAPI void _sendInternal(class NetworkIdentifier const&, class Packet const&, std::string const&);

    // symbol:
    // ?_sortAndPacketizeEvents@NetworkSystem@@AEAA_NAEAVNetworkConnection@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
    MCAPI bool _sortAndPacketizeEvents(class NetworkConnection&, std::chrono::steady_clock::time_point);

    // NOLINTEND
};
