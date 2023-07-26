#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/ErrorInfo.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Connection { enum class DisconnectFailReason; }
namespace RakNet { struct RakNetStatistics; }
namespace Social { class GameConnectionInfo; }
// clang-format on

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
        Dependencies& operator=(Dependencies const&) = delete;
        Dependencies(Dependencies const&)            = delete;
        Dependencies()                               = delete;

    public:
        /**
         * @symbol ??1Dependencies\@NetworkSystem\@\@QEAA\@XZ
         */
        MCAPI ~Dependencies(); // NOLINT
    };

public:
    // prevent constructor by default
    NetworkSystem& operator=(NetworkSystem const&) = delete;
    NetworkSystem(NetworkSystem const&)            = delete;
    NetworkSystem()                                = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETWORKSYSTEM
    /**
     * @symbol ?_onDisable\@NetworkSystem\@\@EEAAXXZ
     */
    MCVAPI void _onDisable(); // NOLINT
    /**
     * @symbol ?_onEnable\@NetworkSystem\@\@EEAAXXZ
     */
    MCVAPI void _onEnable(); // NOLINT
    /**
     * @symbol ?getConnectionInfo\@NetworkSystem\@\@UEBAAEBVGameConnectionInfo\@Social\@\@XZ
     */
    MCVAPI class Social::GameConnectionInfo const& getConnectionInfo() const; // NOLINT
    /**
     * @symbol ?getDefaultGamePort\@NetworkSystem\@\@UEBAGXZ
     */
    MCVAPI unsigned short getDefaultGamePort() const; // NOLINT
    /**
     * @symbol ?getDefaultGamePortv6\@NetworkSystem\@\@UEBAGXZ
     */
    MCVAPI unsigned short getDefaultGamePortv6() const; // NOLINT
    /**
     * @symbol
     * ?onAllConnectionsClosed\@NetworkSystem\@\@EEAAXW4DisconnectFailReason\@Connection\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void onAllConnectionsClosed(enum class Connection::DisconnectFailReason, std::string const&, bool); // NOLINT
    /**
     * @symbol
     * ?onAllRemoteConnectionsClosed\@NetworkSystem\@\@EEAAXW4DisconnectFailReason\@Connection\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void
    onAllRemoteConnectionsClosed(enum class Connection::DisconnectFailReason, std::string const&, bool); // NOLINT
    /**
     * @symbol
     * ?onConnectionClosed\@NetworkSystem\@\@EEAAXAEBVNetworkIdentifier\@\@W4DisconnectFailReason\@Connection\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void onConnectionClosed(
        class NetworkIdentifier const&,
        enum class Connection::DisconnectFailReason,
        std::string const&,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?onNewIncomingConnection\@NetworkSystem\@\@EEAAXAEBVNetworkIdentifier\@\@$$QEAV?$shared_ptr\@VNetworkPeer\@\@\@std\@\@\@Z
     */
    MCVAPI void
    onNewIncomingConnection(class NetworkIdentifier const&, class std::shared_ptr<class NetworkPeer>&&); // NOLINT
    /**
     * @symbol
     * ?onNewOutgoingConnection\@NetworkSystem\@\@EEAAXAEBVNetworkIdentifier\@\@$$QEAV?$shared_ptr\@VNetworkPeer\@\@\@std\@\@\@Z
     */
    MCVAPI void
    onNewOutgoingConnection(class NetworkIdentifier const&, class std::shared_ptr<class NetworkPeer>&&); // NOLINT
    /**
     * @symbol ?onOutgoingConnectionFailed\@NetworkSystem\@\@EEAAXXZ
     */
    MCVAPI void onOutgoingConnectionFailed(); // NOLINT
    /**
     * @symbol
     * ?onWebsocketRequest\@NetworkSystem\@\@EEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0V?$function\@$$A6AXXZ\@3\@\@Z
     */
    MCVAPI void onWebsocketRequest(std::string const&, std::string const&, class std::function<void(void)>); // NOLINT
    /**
     * @symbol ?useIPv4Only\@NetworkSystem\@\@UEBA_NXZ
     */
    MCVAPI bool useIPv4Only() const; // NOLINT
    /**
     * @symbol ?useIPv6Only\@NetworkSystem\@\@UEBA_NXZ
     */
    MCVAPI bool useIPv6Only() const; // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetworkSystem(); // NOLINT
#endif
    /**
     * @symbol ?disconnect\@NetworkSystem\@\@QEAAXXZ
     */
    MCAPI void disconnect(); // NOLINT
    /**
     * @symbol ?enableAsyncFlush\@NetworkSystem\@\@QEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI void enableAsyncFlush(class NetworkIdentifier const&); // NOLINT
    /**
     * @symbol ?flush\@NetworkSystem\@\@QEAAXAEBVNetworkIdentifier\@\@$$QEAV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void flush(class NetworkIdentifier const&, class std::function<void(void)>&&); // NOLINT
    /**
     * @symbol
     * ?getCompressedPeerForUser\@NetworkSystem\@\@QEAA?AV?$weak_ptr\@VCompressedNetworkPeer\@\@\@std\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI class std::weak_ptr<class CompressedNetworkPeer>
    getCompressedPeerForUser(class NetworkIdentifier const&); // NOLINT
    /**
     * @symbol
     * ?getConnections\@NetworkSystem\@\@QEBAAEBV?$vector\@V?$unique_ptr\@VNetworkConnection\@\@U?$default_delete\@VNetworkConnection\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VNetworkConnection\@\@U?$default_delete\@VNetworkConnection\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::unique_ptr<class NetworkConnection>> const& getConnections() const; // NOLINT
    /**
     * @symbol
     * ?getEncryptedPeerForUser\@NetworkSystem\@\@QEAA?AV?$weak_ptr\@VEncryptedNetworkPeer\@\@\@std\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI class std::weak_ptr<class EncryptedNetworkPeer>
    getEncryptedPeerForUser(class NetworkIdentifier const&); // NOLINT
    /**
     * @symbol ?getLocalNetworkId\@NetworkSystem\@\@QEBA?AVNetworkIdentifier\@\@XZ
     */
    MCAPI class NetworkIdentifier getLocalNetworkId() const; // NOLINT
    /**
     * @symbol ?getNetworkStatistics\@NetworkSystem\@\@QEBAPEBVNetworkStatistics\@\@XZ
     */
    MCAPI class NetworkStatistics const* getNetworkStatistics() const; // NOLINT
    /**
     * @symbol ?getPeerForUser\@NetworkSystem\@\@QEAAPEAVNetworkPeer\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI class NetworkPeer* getPeerForUser(class NetworkIdentifier const&); // NOLINT
    /**
     * @symbol ?getPrimaryNetworkId\@NetworkSystem\@\@QEBA?AVNetworkIdentifier\@\@XZ
     */
    MCAPI class NetworkIdentifier getPrimaryNetworkId() const; // NOLINT
    /**
     * @symbol
     * ?getRemoteConnector\@NetworkSystem\@\@QEAA?AV?$not_null\@V?$NonOwnerPointer\@VRemoteConnector\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class RemoteConnector>> getRemoteConnector(); // NOLINT
    /**
     * @symbol
     * ?getRemoteConnector\@NetworkSystem\@\@QEBA?AV?$not_null\@V?$NonOwnerPointer\@$$CBVRemoteConnector\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class RemoteConnector const>>
    getRemoteConnector() const; // NOLINT
    /**
     * @symbol
     * ?getResourcePackUploadManager\@NetworkSystem\@\@QEAAAEAVResourcePackFileUploadManager\@\@AEAVPacketSender\@\@AEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class ResourcePackFileUploadManager&
    getResourcePackUploadManager(class PacketSender&, class NetworkIdentifier const&, std::string const&); // NOLINT
    /**
     * @symbol ?getServerId\@NetworkSystem\@\@QEBA?AVNetworkIdentifier\@\@XZ
     */
    MCAPI class NetworkIdentifier getServerId() const; // NOLINT
    /**
     * @symbol ?getServerLocator\@NetworkSystem\@\@QEAAAEAVServerLocator\@\@XZ
     */
    MCAPI class ServerLocator& getServerLocator(); // NOLINT
    /**
     * @symbol ?host\@NetworkSystem\@\@QEAA_NAEBUConnectionDefinition\@\@\@Z
     */
    MCAPI bool host(struct ConnectionDefinition const&); // NOLINT
    /**
     * @symbol ?isHostingPlayer\@NetworkSystem\@\@QEBA_NAEBVNetworkIdentifier\@\@AEBW4SubClientId\@\@\@Z
     */
    MCAPI bool isHostingPlayer(class NetworkIdentifier const&, enum class SubClientId const&) const; // NOLINT
    /**
     * @symbol ?isServer\@NetworkSystem\@\@QEBA_NXZ
     */
    MCAPI bool isServer() const; // NOLINT
    /**
     * @symbol ?registerServerInstance\@NetworkSystem\@\@QEAAXAEAVNetEventCallback\@\@\@Z
     */
    MCAPI void registerServerInstance(class NetEventCallback&); // NOLINT
    /**
     * @symbol ?runEvents\@NetworkSystem\@\@QEAAX_N\@Z
     */
    MCAPI void runEvents(bool); // NOLINT
    /**
     * @symbol ?send\@NetworkSystem\@\@QEAAXAEBVNetworkIdentifier\@\@AEBVPacket\@\@W4SubClientId\@\@\@Z
     */
    MCAPI void send(class NetworkIdentifier const&, class Packet const&, enum class SubClientId); // NOLINT
    /**
     * @symbol
     * ?sendToMultiple\@NetworkSystem\@\@QEAAXAEBV?$vector\@UNetworkIdentifierWithSubId\@\@V?$allocator\@UNetworkIdentifierWithSubId\@\@\@std\@\@\@std\@\@AEBVPacket\@\@\@Z
     */
    MCAPI void sendToMultiple(std::vector<struct NetworkIdentifierWithSubId> const&, class Packet const&); // NOLINT
    /**
     * @symbol ?setClientUpdateAndRenderThrottle\@NetworkSystem\@\@QEAAX_NHM\@Z
     */
    MCAPI void setClientUpdateAndRenderThrottle(bool, int, float); // NOLINT
    /**
     * @symbol ?setCloseConnection\@NetworkSystem\@\@QEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI void setCloseConnection(class NetworkIdentifier const&); // NOLINT
    /**
     * @symbol ?unregisterClientOrServerInstance\@NetworkSystem\@\@QEAAXAEBW4SubClientId\@\@\@Z
     */
    MCAPI void unregisterClientOrServerInstance(enum class SubClientId const&); // NOLINT
    /**
     * @symbol
     * ?update\@NetworkSystem\@\@QEAAXPEBV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void update(std::vector<class WeakEntityRef> const*); // NOLINT

    // protected:
    /**
     * @symbol ??0NetworkSystem\@\@IEAA\@$$QEAUDependencies\@0\@\@Z
     */
    MCAPI NetworkSystem(struct NetworkSystem::Dependencies&&); // NOLINT
    /**
     * @symbol
     * ?_createNetworkStatistics\@NetworkSystem\@\@IEAAXW4TrackerType\@\@$$QEAV?$function\@$$A6A_NAEAURakNetStatistics\@RakNet\@\@\@Z\@std\@\@$$QEAV?$not_null\@V?$NonOwnerPointer\@VNetworkDebugManager\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI void
    _createNetworkStatistics(enum class TrackerType, class std::function<bool(struct RakNet::RakNetStatistics&)>&&, class gsl::not_null<class Bedrock::NonOwnerPointer<class NetworkDebugManager>>&&); // NOLINT
    /**
     * @symbol ?_getTransportLayer\@NetworkSystem\@\@IEBA?AW4TransportLayer\@\@XZ
     */
    MCAPI enum class TransportLayer _getTransportLayer() const; // NOLINT

    // private:
    /**
     * @symbol ?_getConnectionFromId\@NetworkSystem\@\@AEBAPEAVNetworkConnection\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI class NetworkConnection* _getConnectionFromId(class NetworkIdentifier const&) const; // NOLINT
    /**
     * @symbol
     * ?_handlePacketViolation\@NetworkSystem\@\@AEAAXAEBU?$ErrorInfo\@Verror_code\@std\@\@\@Bedrock\@\@W4PacketViolationResponse\@\@W4MinecraftPacketIds\@\@AEBVNetworkIdentifier\@\@AEAVNetworkConnection\@\@W4SubClientId\@\@\@Z
     */
    MCAPI void _handlePacketViolation(
        struct Bedrock::ErrorInfo<class std::error_code> const&,
        enum class PacketViolationResponse,
        enum class MinecraftPacketIds,
        class NetworkIdentifier const&,
        class NetworkConnection&,
        enum class SubClientId
    ); // NOLINT
    /**
     * @symbol ?_isUsingNetherNetTransportLayer\@NetworkSystem\@\@AEBA_NXZ
     */
    MCAPI bool _isUsingNetherNetTransportLayer() const; // NOLINT
    /**
     * @symbol
     * ?_sendInternal\@NetworkSystem\@\@AEAAXAEBVNetworkIdentifier\@\@AEBVPacket\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _sendInternal(class NetworkIdentifier const&, class Packet const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?_sortAndPacketizeEvents\@NetworkSystem\@\@AEAA_NAEAVNetworkConnection\@\@V?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI bool
    _sortAndPacketizeEvents(class NetworkConnection&, class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>); // NOLINT

protected:
private:
};
