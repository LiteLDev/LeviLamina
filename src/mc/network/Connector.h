#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct SystemAddress; }
namespace Social { class GameConnectionInfo; }
// clang-format on

class Connector {
public:
    // Connector inner types declare
    // clang-format off
    struct ConnectionCallbacks;
    class ConnectionStateListener;
    struct NatPunchInfo;
    // clang-format on

    // Connector inner types define
    struct ConnectionCallbacks {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONNECTOR_CONNECTIONCALLBACKS
    public:
        ConnectionCallbacks& operator=(ConnectionCallbacks const&) = delete;
        ConnectionCallbacks(ConnectionCallbacks const&)            = delete;
        ConnectionCallbacks()                                      = delete;
#endif

    public:
    };

    class ConnectionStateListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONNECTOR_CONNECTIONSTATELISTENER
    public:
        ConnectionStateListener& operator=(ConnectionStateListener const&) = delete;
        ConnectionStateListener(ConnectionStateListener const&)            = delete;
        ConnectionStateListener()                                          = delete;
#endif

    public:
    };

    struct NatPunchInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONNECTOR_NATPUNCHINFO
    public:
        NatPunchInfo& operator=(NatPunchInfo const&) = delete;
        NatPunchInfo(NatPunchInfo const&)            = delete;
        NatPunchInfo()                               = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONNECTOR
public:
    Connector& operator=(Connector const&) = delete;
    Connector(Connector const&)            = delete;
    Connector()                            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol
     * ?getLocalIp\@Connector\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getLocalIp();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol ?getConnectedGameInfo\@Connector\@\@UEBAAEBVGameConnectionInfo\@Social\@\@XZ
     */
    virtual class Social::GameConnectionInfo const& getConnectedGameInfo() const;
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol ?getNatPunchInfo\@Connector\@\@UEBA?AUNatPunchInfo\@1\@XZ
     */
    virtual struct Connector::NatPunchInfo getNatPunchInfo() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONNECTOR
    /**
     * @symbol ?addConnectionStateListener\@Connector\@\@UEAAXPEAVConnectionStateListener\@1\@\@Z
     */
    MCVAPI void addConnectionStateListener(class Connector::ConnectionStateListener*);
    /**
     * @symbol ?getIPv4Port\@Connector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getIPv4Port() const;
    /**
     * @symbol ?getIPv6Port\@Connector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getIPv6Port() const;
    /**
     * @symbol
     * ?getLocalIps\@Connector\@\@UEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCVAPI std::vector<std::string> getLocalIps() const;
    /**
     * @symbol ?getPort\@Connector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getPort() const;
    /**
     * @symbol
     * ?getRefinedLocalIps\@Connector\@\@UEBA?AV?$vector\@USystemAddress\@RakNet\@\@V?$allocator\@USystemAddress\@RakNet\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<struct RakNet::SystemAddress> getRefinedLocalIps() const;
    /**
     * @symbol ?isIPv4Supported\@Connector\@\@UEBA_NXZ
     */
    MCVAPI bool isIPv4Supported() const;
    /**
     * @symbol ?isIPv6Supported\@Connector\@\@UEBA_NXZ
     */
    MCVAPI bool isIPv6Supported() const;
    /**
     * @symbol ?removeConnectionStateListener\@Connector\@\@UEAAXPEAVConnectionStateListener\@1\@\@Z
     */
    MCVAPI void removeConnectionStateListener(class Connector::ConnectionStateListener*);
    /**
     * @symbol ?setupNatPunch\@Connector\@\@UEAAX_N\@Z
     */
    MCVAPI void setupNatPunch(bool);
    /**
     * @symbol
     * ?startNatPunchingClient\@Connector\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@G\@Z
     */
    MCVAPI void startNatPunchingClient(std::string const&, unsigned short);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Connector();
#endif
    /**
     * @symbol ??0Connector\@\@QEAA\@AEAUConnectionCallbacks\@0\@\@Z
     */
    MCAPI Connector(struct Connector::ConnectionCallbacks&);
};
