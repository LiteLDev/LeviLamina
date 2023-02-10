/**
 * @file  RakNetConnector.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "RakPeerHelper.hpp"
#include "Bedrock.hpp"
#include "RakNet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class RakNetConnector {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNETCONNECTOR
public:
    class RakNetConnector& operator=(class RakNetConnector const &) = delete;
    RakNetConnector(class RakNetConnector const &) = delete;
    RakNetConnector() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKNETCONNECTOR
    /**
     * @symbol  ?_onDisable\@RakNetConnector\@\@EEAAXXZ
     */
    MCVAPI void _onDisable();
    /**
     * @symbol  ?_onEnable\@RakNetConnector\@\@EEAAXXZ
     */
    MCVAPI void _onEnable();
    /**
     * @symbol  ?addConnectionStateListener\@RakNetConnector\@\@UEAAXPEAVConnectionStateListener\@Connector\@\@\@Z
     */
    MCVAPI void addConnectionStateListener(class Connector::ConnectionStateListener *);
    /**
     * @symbol  ?closeNetworkConnection\@RakNetConnector\@\@UEAAXAEAVNetworkConnection\@\@\@Z
     */
    MCVAPI void closeNetworkConnection(class NetworkConnection &);
    /**
     * @symbol  ?connect\@RakNetConnector\@\@UEAA_NAEBVGameConnectionInfo\@Social\@\@0\@Z
     */
    MCVAPI bool connect(class Social::GameConnectionInfo const &, class Social::GameConnectionInfo const &);
    /**
     * @symbol  ?disconnect\@RakNetConnector\@\@UEAAXXZ
     */
    MCVAPI void disconnect();
    /**
     * @symbol  ?getConnectedGameInfo\@RakNetConnector\@\@UEBAAEBVGameConnectionInfo\@Social\@\@XZ
     */
    MCVAPI class Social::GameConnectionInfo const & getConnectedGameInfo() const;
    /**
     * @symbol  ?getIPv4Port\@RakNetConnector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getIPv4Port() const;
    /**
     * @symbol  ?getIPv6Port\@RakNetConnector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getIPv6Port() const;
    /**
     * @symbol  ?getLocalIp\@RakNetConnector\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getLocalIp();
    /**
     * @symbol  ?getLocalIps\@RakNetConnector\@\@UEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCVAPI std::vector<std::string> getLocalIps() const;
    /**
     * @symbol  ?getNatPunchInfo\@RakNetConnector\@\@UEBA?AUNatPunchInfo\@Connector\@\@XZ
     */
    MCVAPI struct Connector::NatPunchInfo getNatPunchInfo() const;
    /**
     * @symbol  ?getPeer\@RakNetConnector\@\@UEAAPEAVRakPeerInterface\@RakNet\@\@XZ
     */
    MCVAPI class RakNet::RakPeerInterface * getPeer();
    /**
     * @symbol  ?getPeer\@RakNetConnector\@\@UEBAPEBVRakPeerInterface\@RakNet\@\@XZ
     */
    MCVAPI class RakNet::RakPeerInterface const * getPeer() const;
    /**
     * @symbol  ?getPort\@RakNetConnector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getPort() const;
    /**
     * @symbol  ?getRefinedLocalIps\@RakNetConnector\@\@UEBA?AV?$vector\@USystemAddress\@RakNet\@\@V?$allocator\@USystemAddress\@RakNet\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<struct RakNet::SystemAddress> getRefinedLocalIps() const;
    /**
     * @symbol  ?getTransportIdentifier\@RakNetConnector\@\@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getTransportIdentifier() const;
    /**
     * @symbol  ?host\@RakNetConnector\@\@UEAA_NAEBUConnectionDefinition\@\@\@Z
     */
    MCVAPI bool host(struct ConnectionDefinition const &);
    /**
     * @symbol  ?isIPv4Supported\@RakNetConnector\@\@UEBA_NXZ
     */
    MCVAPI bool isIPv4Supported() const;
    /**
     * @symbol  ?isIPv6Supported\@RakNetConnector\@\@UEBA_NXZ
     */
    MCVAPI bool isIPv6Supported() const;
    /**
     * @symbol  ?isServer\@RakNetConnector\@\@UEBA_NXZ
     */
    MCVAPI bool isServer() const;
    /**
     * @symbol  ?removeConnectionStateListener\@RakNetConnector\@\@UEAAXPEAVConnectionStateListener\@Connector\@\@\@Z
     */
    MCVAPI void removeConnectionStateListener(class Connector::ConnectionStateListener *);
    /**
     * @symbol  ?runEvents\@RakNetConnector\@\@UEAAXXZ
     */
    MCVAPI void runEvents();
    /**
     * @symbol  ?setupNatPunch\@RakNetConnector\@\@UEAAX_N\@Z
     */
    MCVAPI void setupNatPunch(bool);
    /**
     * @symbol  ?startNatPunchingClient\@RakNetConnector\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@G\@Z
     */
    MCVAPI void startNatPunchingClient(std::string const &, unsigned short);
    /**
     * @symbol  ?tick\@RakNetConnector\@\@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~RakNetConnector();
#endif
    /**
     * @symbol  ??0RakNetConnector\@\@QEAA\@AEAUConnectionCallbacks\@0\@AEAVIPSupportInterface\@RakPeerHelper\@\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    MCAPI RakNetConnector(struct RakNetConnector::ConnectionCallbacks &, class RakPeerHelper::IPSupportInterface &, class Bedrock::NonOwnerPointer<class AppPlatform> const &);

//private:
    /**
     * @symbol  ?_changeNatState\@RakNetConnector\@\@AEAAXW4NATState\@1\@HAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _changeNatState(enum class RakNetConnector::NATState, int, std::string const &);
    /**
     * @symbol  ?_createPeer\@RakNetConnector\@\@AEAA?AV?$shared_ptr\@VRakNetNetworkPeer\@RakNetConnector\@\@\@std\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI class std::shared_ptr<class RakNetConnector::RakNetNetworkPeer> _createPeer(class NetworkIdentifier const &);
    /**
     * @symbol  ?_openNatConnection\@RakNetConnector\@\@AEAAXAEBUSystemAddress\@RakNet\@\@\@Z
     */
    MCAPI void _openNatConnection(struct RakNet::SystemAddress const &);
    /**
     * @symbol  ?_pingNatService\@RakNetConnector\@\@AEAAX_N\@Z
     */
    MCAPI void _pingNatService(bool);
    /**
     * @symbol  ?_storeLocalIP\@RakNetConnector\@\@AEAAXXZ
     */
    MCAPI void _storeLocalIP();

private:

};