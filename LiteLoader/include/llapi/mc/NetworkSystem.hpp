/**
 * @file  NetworkSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class NetworkSystem {

#define AFTER_EXTRA

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
     * @symbol ?onAllConnectionsClosed\@NetworkSystem\@\@EEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void onAllConnectionsClosed(std::string const &, bool);
    /**
     * @symbol ?onAllRemoteConnectionsClosed\@NetworkSystem\@\@EEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void onAllRemoteConnectionsClosed(std::string const &, bool);
    /**
     * @symbol ?onConnectionClosed\@NetworkSystem\@\@EEAAXAEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void onConnectionClosed(class NetworkIdentifier const &, std::string const &, bool);
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
     * @symbol ?getRemoteConnector\@NetworkSystem\@\@QEBA?AV?$NonOwnerPointer\@VRemoteConnector\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::NonOwnerPointer<class RemoteConnector> getRemoteConnector() const;
    /**
     * @symbol ?getResourcePackUploadManager\@NetworkSystem\@\@QEAAAEAVResourcePackFileUploadManager\@\@AEAVPacketSender\@\@AEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class ResourcePackFileUploadManager & getResourcePackUploadManager(class PacketSender &, class NetworkIdentifier const &, std::string const &);
    /**
     * @symbol ?getServerId\@NetworkSystem\@\@QEBA?AVNetworkIdentifier\@\@XZ
     */
    MCAPI class NetworkIdentifier getServerId() const;
    /**
     * @symbol ?getServerLocatorComposite\@NetworkSystem\@\@QEAAAEAVServerLocatorComposite\@\@XZ
     */
    MCAPI class ServerLocatorComposite & getServerLocatorComposite();
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
     * @symbol ??0NetworkSystem\@\@IEAA\@AEAVScheduler\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBUNetworkSystemToggles\@\@AEBV?$NonOwnerPointer\@VNetworkDebugManager\@\@\@Bedrock\@\@V?$ServiceReference\@VServicesManager\@\@\@\@\@Z
     */
    MCAPI NetworkSystem(class Scheduler &, std::vector<std::string> const &, struct NetworkSystemToggles const &, class Bedrock::NonOwnerPointer<class NetworkDebugManager> const &, class ServiceReference<class ServicesManager>);
    /**
     * @symbol ??0NetworkSystem\@\@IEAA\@AEAVScheduler\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBUNetworkSystemToggles\@\@AEBV?$NonOwnerPointer\@VNetworkDebugManager\@\@\@Bedrock\@\@V?$ServiceReference\@VServicesManager\@\@\@\@AEBVNetherNetTransportFactory\@\@V?$NonOwnerPointer\@VAppPlatform\@\@\@6\@\@Z
     */
    MCAPI NetworkSystem(class Scheduler &, std::vector<std::string> const &, struct NetworkSystemToggles const &, class Bedrock::NonOwnerPointer<class NetworkDebugManager> const &, class ServiceReference<class ServicesManager>, class NetherNetTransportFactory const &, class Bedrock::NonOwnerPointer<class AppPlatform>);

//private:
    /**
     * @symbol ?_getConnectionFromId\@NetworkSystem\@\@AEBAPEAVNetworkConnection\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI class NetworkConnection * _getConnectionFromId(class NetworkIdentifier const &) const;
    /**
     * @symbol ?_handlePacketViolation\@NetworkSystem\@\@AEAAXW4StreamReadResult\@\@W4PacketViolationResponse\@\@W4MinecraftPacketIds\@\@AEBVNetworkIdentifier\@\@AEAVNetworkConnection\@\@W4SubClientId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _handlePacketViolation(enum class StreamReadResult, enum class PacketViolationResponse, enum class MinecraftPacketIds, class NetworkIdentifier const &, class NetworkConnection &, enum class SubClientId, std::string const &);
    /**
     * @symbol ?_initializeRakNetConnector\@NetworkSystem\@\@AEAAXXZ
     */
    MCAPI void _initializeRakNetConnector();
    /**
     * @symbol ?_sendInternal\@NetworkSystem\@\@AEAAXAEBVNetworkIdentifier\@\@AEBVPacket\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _sendInternal(class NetworkIdentifier const &, class Packet const &, std::string const &);
    /**
     * @symbol ?_setActiveTransportLayer\@NetworkSystem\@\@AEAAXXZ
     */
    MCAPI void _setActiveTransportLayer();
    /**
     * @symbol ?_sortAndPacketizeEvents\@NetworkSystem\@\@AEAA_NAEAVNetworkConnection\@\@V?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI bool _sortAndPacketizeEvents(class NetworkConnection &, class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);

protected:

private:

};
