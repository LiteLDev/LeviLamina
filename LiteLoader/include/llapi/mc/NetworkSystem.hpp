/**
 * @file  NetworkSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "RakNet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class NetworkSystem {

#define AFTER_EXTRA
public:
    struct Dependencies;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKSYSTEM
public:
    class NetworkSystem& operator=(class NetworkSystem const &) = delete;
    NetworkSystem(class NetworkSystem const &) = delete;
    NetworkSystem() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETWORKSYSTEM
    /**
     * @symbol ?_onDisable\@NetworkSystem\@\@EEAAXXZ
     */
    MCVAPI void _onDisable();
    /**
     * @symbol ?_onEnable\@NetworkSystem\@\@EEAAXXZ
     */
    MCVAPI void _onEnable();
    /**
     * @symbol ?getConnectionInfo\@NetworkSystem\@\@UEBAAEBVGameConnectionInfo\@Social\@\@XZ
     */
    MCVAPI class Social::GameConnectionInfo const & getConnectionInfo() const;
    /**
     * @symbol ?getDefaultGamePort\@NetworkSystem\@\@UEBAGXZ
     */
    MCVAPI unsigned short getDefaultGamePort() const;
    /**
     * @symbol ?getDefaultGamePortv6\@NetworkSystem\@\@UEBAGXZ
     */
    MCVAPI unsigned short getDefaultGamePortv6() const;
    /**
     * @symbol ?onAllConnectionsClosed\@NetworkSystem\@\@EEAAXW4DisconnectFailReason\@Connection\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void onAllConnectionsClosed(enum class Connection::DisconnectFailReason, std::string const &, bool);
    /**
     * @symbol ?onAllRemoteConnectionsClosed\@NetworkSystem\@\@EEAAXW4DisconnectFailReason\@Connection\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void onAllRemoteConnectionsClosed(enum class Connection::DisconnectFailReason, std::string const &, bool);
    /**
     * @symbol ?onConnectionClosed\@NetworkSystem\@\@EEAAXAEBVNetworkIdentifier\@\@W4DisconnectFailReason\@Connection\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void onConnectionClosed(class NetworkIdentifier const &, enum class Connection::DisconnectFailReason, std::string const &, bool);
    /**
     * @symbol ?onNewIncomingConnection\@NetworkSystem\@\@EEAAXAEBVNetworkIdentifier\@\@$$QEAV?$shared_ptr\@VNetworkPeer\@\@\@std\@\@\@Z
     */
    MCVAPI void onNewIncomingConnection(class NetworkIdentifier const &, class std::shared_ptr<class NetworkPeer> &&);
    /**
     * @symbol ?onNewOutgoingConnection\@NetworkSystem\@\@EEAAXAEBVNetworkIdentifier\@\@$$QEAV?$shared_ptr\@VNetworkPeer\@\@\@std\@\@\@Z
     */
    MCVAPI void onNewOutgoingConnection(class NetworkIdentifier const &, class std::shared_ptr<class NetworkPeer> &&);
    /**
     * @symbol ?onOutgoingConnectionFailed\@NetworkSystem\@\@EEAAXXZ
     */
    MCVAPI void onOutgoingConnectionFailed();
    /**
     * @symbol ?onWebsocketRequest\@NetworkSystem\@\@EEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0V?$function\@$$A6AXXZ\@3\@\@Z
     */
    MCVAPI void onWebsocketRequest(std::string const &, std::string const &, class std::function<void (void)>);
    /**
     * @symbol ?useIPv4Only\@NetworkSystem\@\@UEBA_NXZ
     */
    MCVAPI bool useIPv4Only() const;
    /**
     * @symbol ?useIPv6Only\@NetworkSystem\@\@UEBA_NXZ
     */
    MCVAPI bool useIPv6Only() const;
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetworkSystem();
#endif
    /**
     * @symbol ?disconnect\@NetworkSystem\@\@QEAAXXZ
     */
    MCAPI void disconnect();
    /**
     * @symbol ?enableAsyncFlush\@NetworkSystem\@\@QEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI void enableAsyncFlush(class NetworkIdentifier const &);
    /**
     * @symbol ?flush\@NetworkSystem\@\@QEAAXAEBVNetworkIdentifier\@\@$$QEAV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void flush(class NetworkIdentifier const &, class std::function<void (void)> &&);
    /**
     * @symbol ?getCompressedPeerForUser\@NetworkSystem\@\@QEAA?AV?$weak_ptr\@VCompressedNetworkPeer\@\@\@std\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI class std::weak_ptr<class CompressedNetworkPeer> getCompressedPeerForUser(class NetworkIdentifier const &);
    /**
     * @symbol ?getConnections\@NetworkSystem\@\@QEBAAEBV?$vector\@V?$unique_ptr\@VNetworkConnection\@\@U?$default_delete\@VNetworkConnection\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VNetworkConnection\@\@U?$default_delete\@VNetworkConnection\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::unique_ptr<class NetworkConnection>> const & getConnections() const;
    /**
     * @symbol ?getEncryptedPeerForUser\@NetworkSystem\@\@QEAA?AV?$weak_ptr\@VEncryptedNetworkPeer\@\@\@std\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI class std::weak_ptr<class EncryptedNetworkPeer> getEncryptedPeerForUser(class NetworkIdentifier const &);
    /**
     * @symbol ?getLocalNetworkId\@NetworkSystem\@\@QEBA?AVNetworkIdentifier\@\@XZ
     */
    MCAPI class NetworkIdentifier getLocalNetworkId() const;
    /**
     * @symbol ?getNetworkStatistics\@NetworkSystem\@\@QEBAPEBVNetworkStatistics\@\@XZ
     */
    MCAPI class NetworkStatistics const * getNetworkStatistics() const;
    /**
     * @symbol ?getPeerForUser\@NetworkSystem\@\@QEAAPEAVNetworkPeer\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI class NetworkPeer * getPeerForUser(class NetworkIdentifier const &);
    /**
     * @symbol ?getPrimaryNetworkId\@NetworkSystem\@\@QEBA?AVNetworkIdentifier\@\@XZ
     */
    MCAPI class NetworkIdentifier getPrimaryNetworkId() const;
    /**
     * @symbol ?getRemoteConnector\@NetworkSystem\@\@QEAA?AV?$not_null\@V?$NonOwnerPointer\@VRemoteConnector\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class RemoteConnector>> getRemoteConnector();
    /**
     * @symbol ?getRemoteConnector\@NetworkSystem\@\@QEBA?AV?$not_null\@V?$NonOwnerPointer\@$$CBVRemoteConnector\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class RemoteConnector const>> getRemoteConnector() const;
    /**
     * @symbol ?getResourcePackUploadManager\@NetworkSystem\@\@QEAAAEAVResourcePackFileUploadManager\@\@AEAVPacketSender\@\@AEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class ResourcePackFileUploadManager & getResourcePackUploadManager(class PacketSender &, class NetworkIdentifier const &, std::string const &);
    /**
     * @symbol ?getServerId\@NetworkSystem\@\@QEBA?AVNetworkIdentifier\@\@XZ
     */
    MCAPI class NetworkIdentifier getServerId() const;
    /**
     * @symbol ?getServerLocator\@NetworkSystem\@\@QEAAAEAVServerLocator\@\@XZ
     */
    MCAPI class ServerLocator & getServerLocator();
    /**
     * @symbol ?host\@NetworkSystem\@\@QEAA_NAEBUConnectionDefinition\@\@\@Z
     */
    MCAPI bool host(struct ConnectionDefinition const &);
    /**
     * @symbol ?isHostingPlayer\@NetworkSystem\@\@QEBA_NAEBVNetworkIdentifier\@\@AEBW4SubClientId\@\@\@Z
     */
    MCAPI bool isHostingPlayer(class NetworkIdentifier const &, enum class SubClientId const &) const;
    /**
     * @symbol ?isServer\@NetworkSystem\@\@QEBA_NXZ
     */
    MCAPI bool isServer() const;
    /**
     * @symbol ?registerServerInstance\@NetworkSystem\@\@QEAAXAEAVNetEventCallback\@\@\@Z
     */
    MCAPI void registerServerInstance(class NetEventCallback &);
    /**
     * @symbol ?runEvents\@NetworkSystem\@\@QEAAX_N\@Z
     */
    MCAPI void runEvents(bool);
    /**
     * @symbol ?send\@NetworkSystem\@\@QEAAXAEBVNetworkIdentifier\@\@AEBVPacket\@\@W4SubClientId\@\@\@Z
     */
    MCAPI void send(class NetworkIdentifier const &, class Packet const &, enum class SubClientId);
    /**
     * @symbol ?sendToMultiple\@NetworkSystem\@\@QEAAXAEBV?$vector\@UNetworkIdentifierWithSubId\@\@V?$allocator\@UNetworkIdentifierWithSubId\@\@\@std\@\@\@std\@\@AEBVPacket\@\@\@Z
     */
    MCAPI void sendToMultiple(std::vector<struct NetworkIdentifierWithSubId> const &, class Packet const &);
    /**
     * @symbol ?setClientUpdateAndRenderThrottle\@NetworkSystem\@\@QEAAX_NHM\@Z
     */
    MCAPI void setClientUpdateAndRenderThrottle(bool, int, float);
    /**
     * @symbol ?setCloseConnection\@NetworkSystem\@\@QEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI void setCloseConnection(class NetworkIdentifier const &);
    /**
     * @symbol ?unregisterClientOrServerInstance\@NetworkSystem\@\@QEAAXAEBW4SubClientId\@\@\@Z
     */
    MCAPI void unregisterClientOrServerInstance(enum class SubClientId const &);
    /**
     * @symbol ?update\@NetworkSystem\@\@QEAAXPEBV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void update(std::vector<class WeakEntityRef> const *);

//protected:
    /**
     * @symbol ??0NetworkSystem\@\@IEAA\@$$QEAUDependencies\@0\@\@Z
     */
    MCAPI NetworkSystem(struct NetworkSystem::Dependencies &&);
    /**
     * @symbol ?_createNetworkStatistics\@NetworkSystem\@\@IEAAXW4TrackerType\@\@$$QEAV?$function\@$$A6A_NAEAURakNetStatistics\@RakNet\@\@\@Z\@std\@\@$$QEAV?$not_null\@V?$NonOwnerPointer\@VNetworkDebugManager\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI void _createNetworkStatistics(enum class TrackerType, class std::function<bool (struct RakNet::RakNetStatistics &)> &&, class gsl::not_null<class Bedrock::NonOwnerPointer<class NetworkDebugManager>> &&);
    /**
     * @symbol ?_getTransportLayer\@NetworkSystem\@\@IEBA?AW4TransportLayer\@\@XZ
     */
    MCAPI enum class TransportLayer _getTransportLayer() const;

//private:
    /**
     * @symbol ?_getConnectionFromId\@NetworkSystem\@\@AEBAPEAVNetworkConnection\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI class NetworkConnection * _getConnectionFromId(class NetworkIdentifier const &) const;
    /**
     * @symbol ?_handlePacketViolation\@NetworkSystem\@\@AEAAXAEBU?$ErrorInfo\@Verror_code\@std\@\@\@Bedrock\@\@W4PacketViolationResponse\@\@W4MinecraftPacketIds\@\@AEBVNetworkIdentifier\@\@AEAVNetworkConnection\@\@W4SubClientId\@\@\@Z
     */
    MCAPI void _handlePacketViolation(struct Bedrock::ErrorInfo<class std::error_code> const &, enum class PacketViolationResponse, enum class MinecraftPacketIds, class NetworkIdentifier const &, class NetworkConnection &, enum class SubClientId);
    /**
     * @symbol ?_isUsingNetherNetTransportLayer\@NetworkSystem\@\@AEBA_NXZ
     */
    MCAPI bool _isUsingNetherNetTransportLayer() const;
    /**
     * @symbol ?_sendInternal\@NetworkSystem\@\@AEAAXAEBVNetworkIdentifier\@\@AEBVPacket\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _sendInternal(class NetworkIdentifier const &, class Packet const &, std::string const &);
    /**
     * @symbol ?_sortAndPacketizeEvents\@NetworkSystem\@\@AEAA_NAEAVNetworkConnection\@\@V?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI bool _sortAndPacketizeEvents(class NetworkConnection &, class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);

protected:

private:

};
