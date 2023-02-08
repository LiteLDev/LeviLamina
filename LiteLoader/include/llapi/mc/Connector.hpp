/**
 * @file  Connector.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Social.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Connector.
 *
 */
class Connector {

#define AFTER_EXTRA
// Add Member There
public:
class ConnectionStateListener {
public:
    ConnectionStateListener() = delete;
    ConnectionStateListener(ConnectionStateListener const&) = delete;
    ConnectionStateListener(ConnectionStateListener const&&) = delete;
};
struct NatPunchInfo {
    NatPunchInfo() = delete;
    NatPunchInfo(NatPunchInfo const&) = delete;
    NatPunchInfo(NatPunchInfo const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONNECTOR
public:
    class Connector& operator=(class Connector const &) = delete;
    Connector(class Connector const &) = delete;
    Connector() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~Connector();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   -425832870
     * @vftbl  2
     * @symbol  ?getLocalIp\@Connector\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
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
     * @hash   -1626855792
     * @vftbl  5
     * @symbol  ?getConnectedGameInfo\@Connector\@\@UEBAAEBVGameConnectionInfo\@Social\@\@XZ
     */
    virtual class Social::GameConnectionInfo const & getConnectedGameInfo() const;
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   296001958
     * @vftbl  7
     * @symbol  ?getNatPunchInfo\@Connector\@\@UEBA?AUNatPunchInfo\@1\@XZ
     */
    virtual struct Connector::NatPunchInfo getNatPunchInfo() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONNECTOR
    /**
     * @hash   311986838
     * @symbol  ?addConnectionStateListener\@Connector\@\@UEAAXPEAVConnectionStateListener\@1\@\@Z
     */
    MCVAPI void addConnectionStateListener(class Connector::ConnectionStateListener *);
    /**
     * @hash   -833951160
     * @symbol  ?getIPv4Port\@Connector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getIPv4Port() const;
    /**
     * @hash   -147357686
     * @symbol  ?getIPv6Port\@Connector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getIPv6Port() const;
    /**
     * @hash   1669547519
     * @symbol  ?getLocalIps\@Connector\@\@UEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCVAPI std::vector<std::string> getLocalIps() const;
    /**
     * @hash   -1883909885
     * @symbol  ?getPort\@Connector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getPort() const;
    /**
     * @hash   -272159550
     * @symbol  ?getRefinedLocalIps\@Connector\@\@UEBA?AV?$vector\@USystemAddress\@RakNet\@\@V?$allocator\@USystemAddress\@RakNet\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<struct RakNet::SystemAddress> getRefinedLocalIps() const;
    /**
     * @hash   1848385738
     * @symbol  ?isIPv4Supported\@Connector\@\@UEBA_NXZ
     */
    MCVAPI bool isIPv4Supported() const;
    /**
     * @hash   1561500616
     * @symbol  ?isIPv6Supported\@Connector\@\@UEBA_NXZ
     */
    MCVAPI bool isIPv6Supported() const;
    /**
     * @hash   17840153
     * @symbol  ?removeConnectionStateListener\@Connector\@\@UEAAXPEAVConnectionStateListener\@1\@\@Z
     */
    MCVAPI void removeConnectionStateListener(class Connector::ConnectionStateListener *);
    /**
     * @hash   1381777480
     * @symbol  ?setupNatPunch\@Connector\@\@UEAAX_N\@Z
     */
    MCVAPI void setupNatPunch(bool);
    /**
     * @hash   -1646448455
     * @symbol  ?startNatPunchingClient\@Connector\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@G\@Z
     */
    MCVAPI void startNatPunchingClient(std::string const &, unsigned short);
#endif
    /**
     * @hash   1862575323
     * @symbol  ??0Connector\@\@QEAA\@AEAUConnectionCallbacks\@0\@\@Z
     */
    MCAPI Connector(struct Connector::ConnectionCallbacks &);

};