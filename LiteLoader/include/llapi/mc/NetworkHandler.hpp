/**
 * @file  NetworkHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetworkHandler.
 *
 */
class NetworkHandler {

#define AFTER_EXTRA
// Add Member There
public:
class Connection {
public:
    Connection() = delete;
    Connection(Connection const&) = delete;
    Connection(Connection const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKHANDLER
public:
    class NetworkHandler& operator=(class NetworkHandler const &) = delete;
    NetworkHandler(class NetworkHandler const &) = delete;
    NetworkHandler() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETWORKHANDLER
    /**
     * @hash   1601263751
     * @symbol  ?_onDisable\@NetworkHandler\@\@EEAAXXZ
     */
    MCVAPI void _onDisable();
    /**
     * @hash   -1287465074
     * @symbol  ?_onEnable\@NetworkHandler\@\@EEAAXXZ
     */
    MCVAPI void _onEnable();
    /**
     * @hash   483718464
     * @symbol  ?getConnectionInfo\@NetworkHandler\@\@UEBAAEBVGameConnectionInfo\@Social\@\@XZ
     */
    MCVAPI class Social::GameConnectionInfo const & getConnectionInfo() const;
    /**
     * @hash   2021401659
     * @symbol  ?getDefaultGamePort\@NetworkHandler\@\@UEBAGXZ
     */
    MCVAPI unsigned short getDefaultGamePort() const;
    /**
     * @hash   963616587
     * @symbol  ?getDefaultGamePortv6\@NetworkHandler\@\@UEBAGXZ
     */
    MCVAPI unsigned short getDefaultGamePortv6() const;
    /**
     * @hash   -1583575812
     * @symbol  ?onAllConnectionsClosed\@NetworkHandler\@\@EEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void onAllConnectionsClosed(std::string const &, bool);
    /**
     * @hash   -1889254250
     * @symbol  ?onAllRemoteConnectionsClosed\@NetworkHandler\@\@EEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void onAllRemoteConnectionsClosed(std::string const &, bool);
    /**
     * @hash   -378940164
     * @symbol  ?onConnectionClosed\@NetworkHandler\@\@EEAAXAEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void onConnectionClosed(class NetworkIdentifier const &, std::string const &, bool);
    /**
     * @hash   -89138579
     * @symbol  ?onNewIncomingConnection\@NetworkHandler\@\@EEAAXAEBVNetworkIdentifier\@\@$$QEAV?$shared_ptr\@VNetworkPeer\@\@\@std\@\@\@Z
     */
    MCVAPI void onNewIncomingConnection(class NetworkIdentifier const &, class std::shared_ptr<class NetworkPeer> &&);
    /**
     * @hash   715664531
     * @symbol  ?onNewOutgoingConnection\@NetworkHandler\@\@EEAAXAEBVNetworkIdentifier\@\@$$QEAV?$shared_ptr\@VNetworkPeer\@\@\@std\@\@\@Z
     */
    MCVAPI void onNewOutgoingConnection(class NetworkIdentifier const &, class std::shared_ptr<class NetworkPeer> &&);
    /**
     * @hash   89546051
     * @symbol  ?onOutgoingConnectionFailed\@NetworkHandler\@\@EEAAXXZ
     */
    MCVAPI void onOutgoingConnectionFailed();
    /**
     * @hash   1262335017
     * @symbol  ?onWebsocketRequest\@NetworkHandler\@\@EEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0V?$function\@$$A6AXXZ\@3\@\@Z
     */
    MCVAPI void onWebsocketRequest(std::string const &, std::string const &, class std::function<void (void)>);
    /**
     * @hash   -791848556
     * @symbol  ?useIPv4Only\@NetworkHandler\@\@UEBA_NXZ
     */
    MCVAPI bool useIPv4Only() const;
    /**
     * @hash   145099206
     * @symbol  ?useIPv6Only\@NetworkHandler\@\@UEBA_NXZ
     */
    MCVAPI bool useIPv6Only() const;
    /**
     * @hash   1445872116
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~NetworkHandler();
#endif
    /**
     * @symbol  ??0NetworkHandler\@\@QEAA\@AEAVScheduler\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBUNetworkHandlerToggles\@\@AEBV?$NonOwnerPointer\@VNetworkDebugManager\@\@\@Bedrock\@\@V?$ServiceReference\@VServicesManager\@\@\@\@AEBVNetherNetTransportFactory\@\@\@Z
     */
    MCAPI NetworkHandler(class Scheduler &, std::vector<std::string> const &, struct NetworkHandlerToggles const &, class Bedrock::NonOwnerPointer<class NetworkDebugManager> const &, class ServiceReference<class ServicesManager>, class NetherNetTransportFactory const &);
    /**
     * @symbol  ??0NetworkHandler\@\@QEAA\@AEAVScheduler\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBUNetworkHandlerToggles\@\@AEBV?$NonOwnerPointer\@VNetworkDebugManager\@\@\@Bedrock\@\@V?$ServiceReference\@VServicesManager\@\@\@\@\@Z
     */
    MCAPI NetworkHandler(class Scheduler &, std::vector<std::string> const &, struct NetworkHandlerToggles const &, class Bedrock::NonOwnerPointer<class NetworkDebugManager> const &, class ServiceReference<class ServicesManager>);
    /**
     * @hash   -341681563
     * @symbol  ?disconnect\@NetworkHandler\@\@QEAAXXZ
     */
    MCAPI void disconnect();
    /**
     * @hash   -929745838
     * @symbol  ?enableAsyncFlush\@NetworkHandler\@\@QEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI void enableAsyncFlush(class NetworkIdentifier const &);
    /**
     * @hash   370899557
     * @symbol  ?flush\@NetworkHandler\@\@QEAAXAEBVNetworkIdentifier\@\@$$QEAV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void flush(class NetworkIdentifier const &, class std::function<void (void)> &&);
    /**
     * @hash   289681458
     * @symbol  ?getCompressedPeerForUser\@NetworkHandler\@\@QEAA?AV?$weak_ptr\@VCompressedNetworkPeer\@\@\@std\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI class std::weak_ptr<class CompressedNetworkPeer> getCompressedPeerForUser(class NetworkIdentifier const &);
    /**
     * @hash   -1505362665
     * @symbol  ?getConnections\@NetworkHandler\@\@QEBAAEBV?$vector\@V?$unique_ptr\@VNetworkConnection\@\@U?$default_delete\@VNetworkConnection\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VNetworkConnection\@\@U?$default_delete\@VNetworkConnection\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::unique_ptr<class NetworkConnection>> const & getConnections() const;
    /**
     * @hash   1197828606
     * @symbol  ?getConnector\@NetworkHandler\@\@QEAAAEAVConnector\@\@XZ
     */
    MCAPI class Connector & getConnector();
    /**
     * @hash   1711676832
     * @symbol  ?getEncryptedPeerForUser\@NetworkHandler\@\@QEAA?AV?$weak_ptr\@VEncryptedNetworkPeer\@\@\@std\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI class std::weak_ptr<class EncryptedNetworkPeer> getEncryptedPeerForUser(class NetworkIdentifier const &);
    /**
     * @hash   -565490060
     * @symbol  ?getLocalNetworkId\@NetworkHandler\@\@QEBA?AVNetworkIdentifier\@\@XZ
     */
    MCAPI class NetworkIdentifier getLocalNetworkId() const;
    /**
     * @hash   1758882669
     * @symbol  ?getNetworkStatistics\@NetworkHandler\@\@QEBAPEBVNetworkStatistics\@\@XZ
     */
    MCAPI class NetworkStatistics const * getNetworkStatistics() const;
    /**
     * @hash   -1609743310
     * @symbol  ?getPeerForUser\@NetworkHandler\@\@QEAAPEAVNetworkPeer\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI class NetworkPeer * getPeerForUser(class NetworkIdentifier const &);
    /**
     * @hash   289292566
     * @symbol  ?getPrimaryNetworkId\@NetworkHandler\@\@QEBA?AVNetworkIdentifier\@\@XZ
     */
    MCAPI class NetworkIdentifier getPrimaryNetworkId() const;
    /**
     * @hash   -500220299
     * @symbol  ?getResourcePackUploadManager\@NetworkHandler\@\@QEAAAEAVResourcePackFileUploadManager\@\@AEAVPacketSender\@\@AEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class ResourcePackFileUploadManager & getResourcePackUploadManager(class PacketSender &, class NetworkIdentifier const &, std::string const &);
    /**
     * @hash   -867035660
     * @symbol  ?getServerId\@NetworkHandler\@\@QEBA?AVNetworkIdentifier\@\@XZ
     */
    MCAPI class NetworkIdentifier getServerId() const;
    /**
     * @hash   472451490
     * @symbol  ?getServerLocatorComposite\@NetworkHandler\@\@QEAAAEAVServerLocatorComposite\@\@XZ
     */
    MCAPI class ServerLocatorComposite & getServerLocatorComposite();
    /**
     * @hash   -145691957
     * @symbol  ?host\@NetworkHandler\@\@QEAA_NAEBUConnectionDefinition\@\@\@Z
     */
    MCAPI bool host(struct ConnectionDefinition const &);
    /**
     * @hash   -552824248
     * @symbol  ?isHostingPlayer\@NetworkHandler\@\@QEBA_NAEBVNetworkIdentifier\@\@AEBW4SubClientId\@\@\@Z
     */
    MCAPI bool isHostingPlayer(class NetworkIdentifier const &, enum class SubClientId const &) const;
    /**
     * @hash   1323270480
     * @symbol  ?isServer\@NetworkHandler\@\@QEBA_NXZ
     */
    MCAPI bool isServer() const;
    /**
     * @hash   1216373738
     * @symbol  ?registerServerInstance\@NetworkHandler\@\@QEAAXAEAVNetEventCallback\@\@\@Z
     */
    MCAPI void registerServerInstance(class NetEventCallback &);
    /**
     * @hash   -822217124
     * @symbol  ?runEvents\@NetworkHandler\@\@QEAAX_N\@Z
     */
    MCAPI void runEvents(bool);
    /**
     * @hash   1981236220
     * @symbol  ?send\@NetworkHandler\@\@QEAAXAEBVNetworkIdentifier\@\@AEBVPacket\@\@W4SubClientId\@\@\@Z
     */
    MCAPI void send(class NetworkIdentifier const &, class Packet const &, enum class SubClientId);
    /**
     * @hash   -665119267
     * @symbol  ?sendToMultiple\@NetworkHandler\@\@QEAAXAEBV?$vector\@UNetworkIdentifierWithSubId\@\@V?$allocator\@UNetworkIdentifierWithSubId\@\@\@std\@\@\@std\@\@AEBVPacket\@\@\@Z
     */
    MCAPI void sendToMultiple(std::vector<struct NetworkIdentifierWithSubId> const &, class Packet const &);
    /**
     * @hash   -1094832270
     * @symbol  ?setCloseConnection\@NetworkHandler\@\@QEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI void setCloseConnection(class NetworkIdentifier const &);
    /**
     * @hash   -1548615684
     * @symbol  ?unregisterClientOrServerInstance\@NetworkHandler\@\@QEAAXAEBW4SubClientId\@\@\@Z
     */
    MCAPI void unregisterClientOrServerInstance(enum class SubClientId const &);
    /**
     * @hash   -595710597
     * @symbol  ?update\@NetworkHandler\@\@QEAAXPEBV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void update(std::vector<class WeakEntityRef> const *);

//private:
    /**
     * @hash   -1823354715
     * @symbol  ?_getConnectionFromId\@NetworkHandler\@\@AEBAPEAVNetworkConnection\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI class NetworkConnection * _getConnectionFromId(class NetworkIdentifier const &) const;
    /**
     * @hash   2074725702
     * @symbol  ?_handlePacketViolation\@NetworkHandler\@\@AEAAXW4StreamReadResult\@\@W4PacketViolationResponse\@\@W4MinecraftPacketIds\@\@AEBVNetworkIdentifier\@\@AEAVNetworkConnection\@\@W4SubClientId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _handlePacketViolation(enum class StreamReadResult, enum class PacketViolationResponse, enum class MinecraftPacketIds, class NetworkIdentifier const &, class NetworkConnection &, enum class SubClientId, std::string const &);
    /**
     * @symbol  ?_initializeRakNetConnector\@NetworkHandler\@\@AEAAXXZ
     */
    MCAPI void _initializeRakNetConnector();
    /**
     * @hash   -1605321239
     * @symbol  ?_sendInternal\@NetworkHandler\@\@AEAAXAEBVNetworkIdentifier\@\@AEBVPacket\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _sendInternal(class NetworkIdentifier const &, class Packet const &, std::string const &);
    /**
     * @hash   30982977
     * @symbol  ?_setActiveTransportLayer\@NetworkHandler\@\@AEAAXXZ
     */
    MCAPI void _setActiveTransportLayer();
    /**
     * @hash   839717862
     * @symbol  ?_sortAndPacketizeEvents\@NetworkHandler\@\@AEAA_NAEAVNetworkConnection\@\@V?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI bool _sortAndPacketizeEvents(class NetworkConnection &, class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);

private:

};