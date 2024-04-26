#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/TransportLayer.h"

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

    // vIndex: 1, symbol:
    // ?getLocalIps@Connector@@UEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    virtual std::vector<std::string> getLocalIps() const;

    // vIndex: 2, symbol: ?getLocalIp@Connector@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getLocalIp();

    // vIndex: 3, symbol: ?getPort@LocalConnector@@UEBAGXZ
    virtual ushort getPort() const;

    // vIndex: 4, symbol:
    // ?getRefinedLocalIps@LocalConnector@@UEBA?AV?$vector@USystemAddress@RakNet@@V?$allocator@USystemAddress@RakNet@@@std@@@std@@XZ
    virtual std::vector<struct RakNet::SystemAddress> getRefinedLocalIps() const;

    // vIndex: 5, symbol: ?getConnectedGameInfo@Connector@@UEBAAEBVGameConnectionInfo@Social@@XZ
    virtual class Social::GameConnectionInfo const& getConnectedGameInfo() const;

    // vIndex: 6, symbol: ?setupNatPunch@LocalConnector@@UEAAX_N@Z
    virtual void setupNatPunch(bool connectToClient);

    // vIndex: 7, symbol: ?getNatPunchInfo@Connector@@UEBA?AUNatPunchInfo@1@XZ
    virtual struct Connector::NatPunchInfo getNatPunchInfo() const;

    // vIndex: 8, symbol:
    // ?startNatPunchingClient@Connector@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@Z
    virtual void startNatPunchingClient(std::string const&, ushort);

    // vIndex: 9, symbol: ?addConnectionStateListener@Connector@@UEAAXPEAVConnectionStateListener@1@@Z
    virtual void addConnectionStateListener(class Connector::ConnectionStateListener*);

    // vIndex: 10, symbol: ?removeConnectionStateListener@LocalConnector@@UEAAXPEAVConnectionStateListener@Connector@@@Z
    virtual void removeConnectionStateListener(class Connector::ConnectionStateListener* listener);

    // vIndex: 11, symbol: ?isIPv4Supported@Connector@@UEBA_NXZ
    virtual bool isIPv4Supported() const;

    // vIndex: 12, symbol: ?isIPv6Supported@Connector@@UEBA_NXZ
    virtual bool isIPv6Supported() const;

    // vIndex: 13, symbol: ?getIPv4Port@Connector@@UEBAGXZ
    virtual ushort getIPv4Port() const;

    // vIndex: 14, symbol: ?getIPv6Port@Connector@@UEBAGXZ
    virtual ushort getIPv6Port() const;

    // vIndex: 15, symbol: ?getNetworkType@Connector@@UEBA?AW4TransportLayer@@XZ
    virtual ::TransportLayer getNetworkType() const;

    // symbol: ??0Connector@@QEAA@AEAUConnectionCallbacks@0@@Z
    MCAPI explicit Connector(struct Connector::ConnectionCallbacks& callbacks);

    // NOLINTEND
};
