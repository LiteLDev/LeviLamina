/**
 * @file  NetworkHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

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
     * @hash   1319898327
     * @symbol ?_onDisable@NetworkHandler@@EEAAXXZ
     */
    MCVAPI void _onDisable();
    /**
     * @hash   -1568784370
     * @symbol ?_onEnable@NetworkHandler@@EEAAXXZ
     */
    MCVAPI void _onEnable();
    /**
     * @hash   202122400
     * @symbol ?getConnectionInfo@NetworkHandler@@UEBAAEBVGameConnectionInfo@Social@@XZ
     */
    MCVAPI class Social::GameConnectionInfo const & getConnectionInfo() const;
    /**
     * @hash   1739421195
     * @symbol ?getDefaultGamePort@NetworkHandler@@UEBAGXZ
     */
    MCVAPI unsigned short getDefaultGamePort() const;
    /**
     * @hash   681636123
     * @symbol ?getDefaultGamePortv6@NetworkHandler@@UEBAGXZ
     */
    MCVAPI unsigned short getDefaultGamePortv6() const;
    /**
     * @hash   -1864064804
     * @symbol ?onAllConnectionsClosed@NetworkHandler@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCVAPI void onAllConnectionsClosed(std::string const &, bool);
    /**
     * @hash   2125224054
     * @symbol ?onAllRemoteConnectionsClosed@NetworkHandler@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCVAPI void onAllRemoteConnectionsClosed(std::string const &, bool);
    /**
     * @hash   -659444532
     * @symbol ?onConnectionClosed@NetworkHandler@@EEAAXAEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCVAPI void onConnectionClosed(class NetworkIdentifier const &, std::string const &, bool);
    /**
     * @hash   -1815538224
     * @symbol ?onNewIncomingConnection@NetworkHandler@@EEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VNetworkPeer@@@std@@@Z
     */
    MCVAPI void onNewIncomingConnection(class NetworkIdentifier const &, class std::shared_ptr<class NetworkPeer>);
    /**
     * @hash   -1227599603
     * @symbol ?onNewIncomingLocalConnection@NetworkHandler@@EEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VNetworkPeer@@@std@@@Z
     */
    MCVAPI void onNewIncomingLocalConnection(class NetworkIdentifier const &, class std::shared_ptr<class NetworkPeer>);
    /**
     * @hash   649900086
     * @symbol ?onNewOutgoingConnection@NetworkHandler@@EEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VNetworkPeer@@@std@@@Z
     */
    MCVAPI void onNewOutgoingConnection(class NetworkIdentifier const &, class std::shared_ptr<class NetworkPeer>);
    /**
     * @hash   -207575465
     * @symbol ?onNewOutgoingLocalConnection@NetworkHandler@@EEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VNetworkPeer@@@std@@@Z
     */
    MCVAPI void onNewOutgoingLocalConnection(class NetworkIdentifier const &, class std::shared_ptr<class NetworkPeer>);
    /**
     * @hash   -190035757
     * @symbol ?onOutgoingConnectionFailed@NetworkHandler@@EEAAXXZ
     */
    MCVAPI void onOutgoingConnectionFailed();
    /**
     * @hash   982768585
     * @symbol ?onWebsocketRequest@NetworkHandler@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0V?$function@$$A6AXXZ@3@@Z
     */
    MCVAPI void onWebsocketRequest(std::string const &, std::string const &, class std::function<void (void)>);
    /**
     * @hash   -892469100
     * @symbol ?useIPv4Only@NetworkHandler@@UEBA_NXZ
     */
    MCVAPI bool useIPv4Only() const;
    /**
     * @hash   -133683050
     * @symbol ?useIPv6Only@NetworkHandler@@UEBA_NXZ
     */
    MCVAPI bool useIPv6Only() const;
    /**
     * @hash   1164875716
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetworkHandler();
#endif
    /**
     * @hash   825270660
     * @symbol ?AddConnectionIfNeeded@NetworkHandler@@QEAA_N_KAEBV?$shared_ptr@UNetherNetInstance@@@std@@@Z
     */
    MCAPI bool AddConnectionIfNeeded(unsigned __int64, class std::shared_ptr<struct NetherNetInstance> const &);
    /**
     * @hash   -548232024
     * @symbol ??0NetworkHandler@@QEAA@AEAVScheduler@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@UNetworkHandlerToggles@@AEBV?$NonOwnerPointer@VNetworkDebugManager@@@Bedrock@@@Z
     */
    MCAPI NetworkHandler(class Scheduler &, std::vector<std::string> const &, struct NetworkHandlerToggles, class Bedrock::NonOwnerPointer<class NetworkDebugManager> const &);
    /**
     * @hash   -623031611
     * @symbol ?disconnect@NetworkHandler@@QEAAXXZ
     */
    MCAPI void disconnect();
    /**
     * @hash   -1211203518
     * @symbol ?enableAsyncFlush@NetworkHandler@@QEAAXAEBVNetworkIdentifier@@@Z
     */
    MCAPI void enableAsyncFlush(class NetworkIdentifier const &);
    /**
     * @hash   89411125
     * @symbol ?flush@NetworkHandler@@QEAAXAEBVNetworkIdentifier@@$$QEAV?$function@$$A6AXXZ@std@@@Z
     */
    MCAPI void flush(class NetworkIdentifier const &, class std::function<void (void)> &&);
    /**
     * @symbol ?getCompressedPeerForUser@NetworkHandler@@QEAA?AV?$weak_ptr@VCompressedNetworkPeer@@@std@@AEBVNetworkIdentifier@@@Z
     */
    MCAPI class std::weak_ptr<class CompressedNetworkPeer> getCompressedPeerForUser(class NetworkIdentifier const &);
    /**
     * @hash   1584141211
     * @symbol ?getConnections@NetworkHandler@@QEBAAEBV?$vector@V?$unique_ptr@VConnection@NetworkHandler@@U?$default_delete@VConnection@NetworkHandler@@@std@@@std@@V?$allocator@V?$unique_ptr@VConnection@NetworkHandler@@U?$default_delete@VConnection@NetworkHandler@@@std@@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::unique_ptr<class NetworkHandler::Connection>> const & getConnections() const;
    /**
     * @hash   915971150
     * @symbol ?getConnector@NetworkHandler@@QEAAAEAVConnector@@XZ
     */
    MCAPI class Connector & getConnector();
    /**
     * @hash   1429696368
     * @symbol ?getEncryptedPeerForUser@NetworkHandler@@QEAA?AV?$weak_ptr@VEncryptedNetworkPeer@@@std@@AEBVNetworkIdentifier@@@Z
     */
    MCAPI class std::weak_ptr<class EncryptedNetworkPeer> getEncryptedPeerForUser(class NetworkIdentifier const &);
    /**
     * @hash   -847470524
     * @symbol ?getLocalNetworkId@NetworkHandler@@QEBA?AVNetworkIdentifier@@XZ
     */
    MCAPI class NetworkIdentifier getLocalNetworkId() const;
    /**
     * @hash   1476533181
     * @symbol ?getNetworkStatistics@NetworkHandler@@QEBAPEBVNetworkStatistics@@XZ
     */
    MCAPI class NetworkStatistics const * getNetworkStatistics() const;
    /**
     * @hash   -1892092798
     * @symbol ?getPeerForUser@NetworkHandler@@QEAAPEAVNetworkPeer@@AEBVNetworkIdentifier@@@Z
     */
    MCAPI class NetworkPeer * getPeerForUser(class NetworkIdentifier const &);
    /**
     * @hash   6435670
     * @symbol ?getPrimaryNetworkId@NetworkHandler@@QEBA?AVNetworkIdentifier@@XZ
     */
    MCAPI class NetworkIdentifier getPrimaryNetworkId() const;
    /**
     * @hash   -782600539
     * @symbol ?getResourcePackUploadManager@NetworkHandler@@QEAAAEAVResourcePackFileUploadManager@@AEAVPacketSender@@AEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class ResourcePackFileUploadManager & getResourcePackUploadManager(class PacketSender &, class NetworkIdentifier const &, std::string const &);
    /**
     * @hash   -1149415900
     * @symbol ?getServerId@NetworkHandler@@QEBA?AVNetworkIdentifier@@XZ
     */
    MCAPI class NetworkIdentifier getServerId() const;
    /**
     * @symbol ?getServerLocatorComposite@NetworkHandler@@QEAAAEAVServerLocatorComposite@@XZ
     */
    MCAPI class ServerLocatorComposite & getServerLocatorComposite();
    /**
     * @hash   -428149077
     * @symbol ?host@NetworkHandler@@QEAA_NAEBUConnectionDefinition@@@Z
     */
    MCAPI bool host(struct ConnectionDefinition const &);
    /**
     * @symbol ?initializeRakNetTransportObjects@NetworkHandler@@QEAAXXZ
     */
    MCAPI void initializeRakNetTransportObjects();
    /**
     * @hash   -833190232
     * @symbol ?isHostingPlayer@NetworkHandler@@QEBA_NAEBVNetworkIdentifier@@AEBW4SubClientId@@@Z
     */
    MCAPI bool isHostingPlayer(class NetworkIdentifier const &, enum class SubClientId const &) const;
    /**
     * @hash   1042904496
     * @symbol ?isServer@NetworkHandler@@QEBA_NXZ
     */
    MCAPI bool isServer() const;
    /**
     * @hash   937714490
     * @symbol ?registerServerInstance@NetworkHandler@@QEAAXAEAVNetEventCallback@@@Z
     */
    MCAPI void registerServerInstance(class NetEventCallback &);
    /**
     * @hash   -1100876372
     * @symbol ?runEvents@NetworkHandler@@QEAAX_N@Z
     */
    MCAPI void runEvents(bool);
    /**
     * @hash   1702515468
     * @symbol ?send@NetworkHandler@@QEAAXAEBVNetworkIdentifier@@AEBVPacket@@W4SubClientId@@@Z
     */
    MCAPI void send(class NetworkIdentifier const &, class Packet const &, enum class SubClientId);
    /**
     * @hash   -943840019
     * @symbol ?sendToMultiple@NetworkHandler@@QEAAXAEBV?$vector@UNetworkIdentifierWithSubId@@V?$allocator@UNetworkIdentifierWithSubId@@@std@@@std@@AEBVPacket@@@Z
     */
    MCAPI void sendToMultiple(std::vector<struct NetworkIdentifierWithSubId> const &, class Packet const &);
    /**
     * @symbol ?setActiveTransportType@NetworkHandler@@QEAAXXZ
     */
    MCAPI void setActiveTransportType();
    /**
     * @symbol ?setClientThrottleEnabled@NetworkHandler@@QEAAX_NHM@Z
     */
    MCAPI void setClientThrottleEnabled(bool, int, float);
    /**
     * @hash   -1373553022
     * @symbol ?setCloseConnection@NetworkHandler@@QEAAXAEBVNetworkIdentifier@@@Z
     */
    MCAPI void setCloseConnection(class NetworkIdentifier const &);
    /**
     * @hash   -1827336436
     * @symbol ?unregisterClientOrServerInstance@NetworkHandler@@QEAAXAEBW4SubClientId@@@Z
     */
    MCAPI void unregisterClientOrServerInstance(enum class SubClientId const &);
    /**
     * @hash   -874431349
     * @symbol ?update@NetworkHandler@@QEAAXPEBV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@@Z
     */
    MCAPI void update(std::vector<class WeakEntityRef> const *);

//private:
    /**
     * @hash   -1729589661
     * @symbol ?_getConnectionFromId@NetworkHandler@@AEBAPEAVConnection@1@AEBVNetworkIdentifier@@@Z
     */
    MCAPI class NetworkHandler::Connection * _getConnectionFromId(class NetworkIdentifier const &) const;
    /**
     * @hash   83880648
     * @symbol ?_handlePacketViolation@NetworkHandler@@AEAAXW4StreamReadResult@@W4PacketViolationResponse@@W4MinecraftPacketIds@@AEBVNetworkIdentifier@@AEAVConnection@1@W4SubClientId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void _handlePacketViolation(enum class StreamReadResult, enum class PacketViolationResponse, enum class MinecraftPacketIds, class NetworkIdentifier const &, class NetworkHandler::Connection &, enum class SubClientId, std::string const &);
    /**
     * @hash   -1886609783
     * @symbol ?_sendInternal@NetworkHandler@@AEAAXAEBVNetworkIdentifier@@AEBVPacket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void _sendInternal(class NetworkIdentifier const &, class Packet const &, std::string const &);
    /**
     * @hash   1559423172
     * @symbol ?_sortAndPacketizeEvents@NetworkHandler@@AEAA_NAEAVConnection@1@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
     */
    MCAPI bool _sortAndPacketizeEvents(class NetworkHandler::Connection &, class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);

private:

};