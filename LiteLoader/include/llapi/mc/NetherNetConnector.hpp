/**
 * @file  NetherNetConnector.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Connector.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct NetherNetConnector {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERNETCONNECTOR
public:
    struct NetherNetConnector& operator=(struct NetherNetConnector const &) = delete;
    NetherNetConnector(struct NetherNetConnector const &) = delete;
    NetherNetConnector() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETHERNETCONNECTOR
    /**
     * @symbol ?OnBroadcastDiscoveryRequestReceivedGetResponse\@NetherNetConnector\@\@EEAA_NPEAXPEAH\@Z
     */
    MCVAPI bool OnBroadcastDiscoveryRequestReceivedGetResponse(void *, int *);
    /**
     * @symbol ?OnBroadcastResponseReceived\@NetherNetConnector\@\@EEAAXUNetworkID\@NetherNet\@\@PEBXH\@Z
     */
    MCVAPI void OnBroadcastResponseReceived(struct NetherNet::NetworkID, void const *, int);
    /**
     * @symbol ?OnSessionConnectFailure\@NetherNetConnector\@\@EEAAXUNetworkID\@NetherNet\@\@W4ESessionError\@3\@\@Z
     */
    MCVAPI void OnSessionConnectFailure(struct NetherNet::NetworkID, enum class NetherNet::ESessionError);
    /**
     * @symbol ?OnSessionGetConnectionFlags\@NetherNetConnector\@\@EEAAXUNetworkID\@NetherNet\@\@PEAI\@Z
     */
    MCVAPI void OnSessionGetConnectionFlags(struct NetherNet::NetworkID, unsigned int *);
    /**
     * @symbol ?OnSessionRequested\@NetherNetConnector\@\@EEAAXUNetworkID\@NetherNet\@\@\@Z
     */
    MCVAPI void OnSessionRequested(struct NetherNet::NetworkID);
    /**
     * @symbol ?OnSpopViolation\@NetherNetConnector\@\@EEAAXXZ
     */
    MCVAPI void OnSpopViolation();
    /**
     * @symbol ?_onDisable\@NetherNetConnector\@\@EEAAXXZ
     */
    MCVAPI void _onDisable();
    /**
     * @symbol ?_onEnable\@NetherNetConnector\@\@EEAAXXZ
     */
    MCVAPI void _onEnable();
    /**
     * @symbol ?closeNetworkConnection\@NetherNetConnector\@\@UEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCVAPI void closeNetworkConnection(class NetworkIdentifier const &);
    /**
     * @symbol ?connect\@NetherNetConnector\@\@UEAA_NAEBVGameConnectionInfo\@Social\@\@0\@Z
     */
    MCVAPI bool connect(class Social::GameConnectionInfo const &, class Social::GameConnectionInfo const &);
    /**
     * @symbol ?disconnect\@NetherNetConnector\@\@UEAAXXZ
     */
    MCVAPI void disconnect();
    /**
     * @symbol ?getNetworkIdentifier\@NetherNetConnector\@\@UEBA?AVNetworkIdentifier\@\@XZ
     */
    MCVAPI class NetworkIdentifier getNetworkIdentifier() const;
    /**
     * @symbol ?host\@NetherNetConnector\@\@UEAA_NAEBUConnectionDefinition\@\@\@Z
     */
    MCVAPI bool host(struct ConnectionDefinition const &);
    /**
     * @symbol ?isConnected\@NetherNetConnector\@\@UEBA_NAEBVNetworkIdentifier\@\@\@Z
     */
    MCVAPI bool isConnected(class NetworkIdentifier const &) const;
    /**
     * @symbol ?isServer\@NetherNetConnector\@\@UEBA_NXZ
     */
    MCVAPI bool isServer() const;
    /**
     * @symbol ?runEvents\@NetherNetConnector\@\@UEAAXXZ
     */
    MCVAPI void runEvents();
    /**
     * @symbol ?tick\@NetherNetConnector\@\@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetherNetConnector();
#endif
    /**
     * @symbol ??0NetherNetConnector\@\@QEAA\@AEBVNetherNetTransportFactory\@\@AEAUConnectionCallbacks\@Connector\@\@\@Z
     */
    MCAPI NetherNetConnector(class NetherNetTransportFactory const &, struct Connector::ConnectionCallbacks &);
    /**
     * @symbol ?clearPacketData\@NetherNetConnector\@\@QEBAXUNetworkID\@NetherNet\@\@\@Z
     */
    MCAPI void clearPacketData(struct NetherNet::NetworkID) const;
    /**
     * @symbol ?closeSessionWithUser\@NetherNetConnector\@\@QEBA_NUNetworkID\@NetherNet\@\@\@Z
     */
    MCAPI bool closeSessionWithUser(struct NetherNet::NetworkID) const;
    /**
     * @symbol ?disableBroadcastDiscovery\@NetherNetConnector\@\@QEBAXXZ
     */
    MCAPI void disableBroadcastDiscovery() const;
    /**
     * @symbol ?enableBroadcastDiscovery\@NetherNetConnector\@\@QEBAXXZ
     */
    MCAPI void enableBroadcastDiscovery() const;
    /**
     * @symbol ?getNetworkID\@NetherNetConnector\@\@QEBAAEBUNetworkID\@NetherNet\@\@XZ
     */
    MCAPI struct NetherNet::NetworkID const & getNetworkID() const;
    /**
     * @symbol ?getSessionState\@NetherNetConnector\@\@QEBA_NUNetworkID\@NetherNet\@\@PEAUSessionState\@3\@\@Z
     */
    MCAPI bool getSessionState(struct NetherNet::NetworkID, struct NetherNet::SessionState *) const;
    /**
     * @symbol ?isBroadcastDiscoveryEnabled\@NetherNetConnector\@\@QEBA_NXZ
     */
    MCAPI bool isBroadcastDiscoveryEnabled() const;
    /**
     * @symbol ?isPacketAvailable\@NetherNetConnector\@\@QEBA_NUNetworkID\@NetherNet\@\@PEAI\@Z
     */
    MCAPI bool isPacketAvailable(struct NetherNet::NetworkID, unsigned int *) const;
    /**
     * @symbol ?readPacket\@NetherNetConnector\@\@QEBA_NUNetworkID\@NetherNet\@\@PEAXIPEAI\@Z
     */
    MCAPI bool readPacket(struct NetherNet::NetworkID, void *, unsigned int, unsigned int *) const;
    /**
     * @symbol ?sendPacket\@NetherNetConnector\@\@QEBA_NUNetworkID\@NetherNet\@\@PEBDIW4ESendType\@3\@\@Z
     */
    MCAPI bool sendPacket(struct NetherNet::NetworkID, char const *, unsigned int, enum class NetherNet::ESendType) const;
    /**
     * @symbol ?setBroadcastRequestCallback\@NetherNetConnector\@\@QEAAX$$QEAV?$function\@$$A6A_NPEAXPEAH\@Z\@std\@\@\@Z
     */
    MCAPI void setBroadcastRequestCallback(class std::function<bool (void *, int *)> &&);
    /**
     * @symbol ?setBroadcastResponseCallback\@NetherNetConnector\@\@QEAAX$$QEAV?$function\@$$A6AXAEBUNetworkID\@NetherNet\@\@PEBXH\@Z\@std\@\@\@Z
     */
    MCAPI void setBroadcastResponseCallback(class std::function<void (struct NetherNet::NetworkID const &, void const *, int)> &&);
    /**
     * @symbol ?signOutFromSignalingService\@NetherNetConnector\@\@QEBAXXZ
     */
    MCAPI void signOutFromSignalingService() const;

};