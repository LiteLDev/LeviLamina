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
    public:
        // prevent constructor by default
        ConnectionCallbacks& operator=(ConnectionCallbacks const&);
        ConnectionCallbacks(ConnectionCallbacks const&);
        ConnectionCallbacks();
    };

    class ConnectionStateListener {
    public:
        // prevent constructor by default
        ConnectionStateListener& operator=(ConnectionStateListener const&);
        ConnectionStateListener(ConnectionStateListener const&);
        ConnectionStateListener();
    };

    struct NatPunchInfo {
    public:
        // prevent constructor by default
        NatPunchInfo& operator=(NatPunchInfo const&);
        NatPunchInfo(NatPunchInfo const&);
        NatPunchInfo();
    };

public:
    // prevent constructor by default
    Connector& operator=(Connector const&);
    Connector(Connector const&);
    Connector();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Connector@@UEAA@XZ
    virtual ~Connector();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?getLocalIp@Connector@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getLocalIp();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: ?getConnectedGameInfo@Connector@@UEBAAEBVGameConnectionInfo@Social@@XZ
    virtual class Social::GameConnectionInfo const& getConnectedGameInfo() const;

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: ?getNatPunchInfo@Connector@@UEBA?AUNatPunchInfo@1@XZ
    virtual struct Connector::NatPunchInfo getNatPunchInfo() const;

    // symbol: ?addConnectionStateListener@Connector@@UEAAXPEAVConnectionStateListener@1@@Z
    MCVAPI void addConnectionStateListener(class Connector::ConnectionStateListener*);

    // symbol: ?getIPv4Port@Connector@@UEBAGXZ
    MCVAPI ushort getIPv4Port() const;

    // symbol: ?getIPv6Port@Connector@@UEBAGXZ
    MCVAPI ushort getIPv6Port() const;

    // symbol:
    // ?getLocalIps@Connector@@UEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCVAPI std::vector<std::string> getLocalIps() const;

    // symbol: ?getPort@Connector@@UEBAGXZ
    MCVAPI ushort getPort() const;

    // symbol:
    // ?getRefinedLocalIps@Connector@@UEBA?AV?$vector@USystemAddress@RakNet@@V?$allocator@USystemAddress@RakNet@@@std@@@std@@XZ
    MCVAPI std::vector<struct RakNet::SystemAddress> getRefinedLocalIps() const;

    // symbol: ?isIPv4Supported@Connector@@UEBA_NXZ
    MCVAPI bool isIPv4Supported() const;

    // symbol: ?isIPv6Supported@Connector@@UEBA_NXZ
    MCVAPI bool isIPv6Supported() const;

    // symbol: ?removeConnectionStateListener@Connector@@UEAAXPEAVConnectionStateListener@1@@Z
    MCVAPI void removeConnectionStateListener(class Connector::ConnectionStateListener*);

    // symbol: ?setupNatPunch@Connector@@UEAAX_N@Z
    MCVAPI void setupNatPunch(bool);

    // symbol:
    // ?startNatPunchingClient@Connector@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@Z
    MCVAPI void startNatPunchingClient(std::string const&, ushort);

    // symbol: ??0Connector@@QEAA@AEAUConnectionCallbacks@0@@Z
    MCAPI explicit Connector(struct Connector::ConnectionCallbacks& callbacks);

    // NOLINTEND
};
