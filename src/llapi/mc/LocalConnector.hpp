/**
 * @file  LocalConnector.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Social.hpp"
#include "Connector.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LocalConnector.
 *
 */
class LocalConnector {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOCALCONNECTOR
public:
    class LocalConnector& operator=(class LocalConnector const &) = delete;
    LocalConnector(class LocalConnector const &) = delete;
    LocalConnector() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LocalConnector();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?getLocalIp\@LocalConnector\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getLocalIp();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  ?getConnectedGameInfo\@LocalConnector\@\@UEBAAEBVGameConnectionInfo\@Social\@\@XZ
     */
    virtual class Social::GameConnectionInfo const & getConnectedGameInfo() const;
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol  ?getNatPunchInfo\@LocalConnector\@\@UEBA?AUNatPunchInfo\@Connector\@\@XZ
     */
    virtual struct Connector::NatPunchInfo getNatPunchInfo() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOCALCONNECTOR
    /**
     * @symbol  ?addConnectionStateListener\@LocalConnector\@\@UEAAXPEAVConnectionStateListener\@Connector\@\@\@Z
     */
    MCVAPI void addConnectionStateListener(class Connector::ConnectionStateListener *);
    /**
     * @symbol  ?getIPv4Port\@LocalConnector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getIPv4Port() const;
    /**
     * @symbol  ?getIPv6Port\@LocalConnector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getIPv6Port() const;
    /**
     * @symbol  ?getLocalIps\@LocalConnector\@\@UEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCVAPI std::vector<std::string> getLocalIps() const;
    /**
     * @symbol  ?getPort\@LocalConnector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getPort() const;
    /**
     * @symbol  ?getRefinedLocalIps\@LocalConnector\@\@UEBA?AV?$vector\@USystemAddress\@RakNet\@\@V?$allocator\@USystemAddress\@RakNet\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<struct RakNet::SystemAddress> getRefinedLocalIps() const;
    /**
     * @symbol  ?isIPv4Supported\@LocalConnector\@\@UEBA_NXZ
     */
    MCVAPI bool isIPv4Supported() const;
    /**
     * @symbol  ?isIPv6Supported\@LocalConnector\@\@UEBA_NXZ
     */
    MCVAPI bool isIPv6Supported() const;
    /**
     * @symbol  ?removeConnectionStateListener\@LocalConnector\@\@UEAAXPEAVConnectionStateListener\@Connector\@\@\@Z
     */
    MCVAPI void removeConnectionStateListener(class Connector::ConnectionStateListener *);
    /**
     * @symbol  ?setupNatPunch\@LocalConnector\@\@UEAAX_N\@Z
     */
    MCVAPI void setupNatPunch(bool);
    /**
     * @symbol  ?startNatPunchingClient\@LocalConnector\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@G\@Z
     */
    MCVAPI void startNatPunchingClient(std::string const &, unsigned short);
#endif
    /**
     * @symbol  ??0LocalConnector\@\@QEAA\@AEAUConnectionCallbacks\@Connector\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI LocalConnector(struct Connector::ConnectionCallbacks &, class NetworkIdentifier const &);
    /**
     * @symbol  ?disconnect\@LocalConnector\@\@QEAAXXZ
     */
    MCAPI void disconnect();
    /**
     * @symbol  ?host\@LocalConnector\@\@QEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI void host(class NetworkIdentifier const &);
    /**
     * @symbol  ?runEvents\@LocalConnector\@\@QEAAXXZ
     */
    MCAPI void runEvents();

//private:

private:
    /**
     * @symbol  ?sLocalConnectivitySystem\@LocalConnector\@\@0VLocalConnectivitySystem\@\@A
     */
    MCAPI static class LocalConnectivitySystem sLocalConnectivitySystem;

};