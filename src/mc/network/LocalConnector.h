#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/TransportLayer.h"
#include "mc/network/Connector.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct SystemAddress; }
namespace Social { class GameConnectionInfo; }
// clang-format on

class LocalConnector : public ::Connector {
public:
    // prevent constructor by default
    LocalConnector& operator=(LocalConnector const&);
    LocalConnector(LocalConnector const&);
    LocalConnector();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LocalConnector@@UEAA@XZ
    virtual ~LocalConnector() = default;

    // vIndex: 1, symbol:
    // ?getLocalIps@LocalConnector@@UEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    virtual std::vector<std::string> getLocalIps() const;

    // vIndex: 2, symbol:
    // ?getLocalIp@LocalConnector@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getLocalIp();

    // vIndex: 3, symbol: ?getPort@LocalConnector@@UEBAGXZ
    virtual ushort getPort() const;

    // vIndex: 4, symbol:
    // ?getRefinedLocalIps@LocalConnector@@UEBA?AV?$vector@USystemAddress@RakNet@@V?$allocator@USystemAddress@RakNet@@@std@@@std@@XZ
    virtual std::vector<struct RakNet::SystemAddress> getRefinedLocalIps() const;

    // vIndex: 5, symbol: ?getConnectedGameInfo@LocalConnector@@UEBAAEBVGameConnectionInfo@Social@@XZ
    virtual class Social::GameConnectionInfo const& getConnectedGameInfo() const;

    // vIndex: 6, symbol: ?setupNatPunch@LocalConnector@@UEAAX_N@Z
    virtual void setupNatPunch(bool connectToClient);

    // vIndex: 7, symbol: ?getNatPunchInfo@LocalConnector@@UEBA?AUNatPunchInfo@Connector@@XZ
    virtual struct Connector::NatPunchInfo getNatPunchInfo() const;

    // vIndex: 8, symbol:
    // ?startNatPunchingClient@LocalConnector@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@Z
    virtual void startNatPunchingClient(std::string const& address, ushort port);

    // vIndex: 9, symbol: ?addConnectionStateListener@LocalConnector@@UEAAXPEAVConnectionStateListener@Connector@@@Z
    virtual void addConnectionStateListener(class Connector::ConnectionStateListener* listener);

    // vIndex: 10, symbol: ?removeConnectionStateListener@LocalConnector@@UEAAXPEAVConnectionStateListener@Connector@@@Z
    virtual void removeConnectionStateListener(class Connector::ConnectionStateListener* listener);

    // vIndex: 11, symbol: ?isIPv4Supported@LocalConnector@@UEBA_NXZ
    virtual bool isIPv4Supported() const;

    // vIndex: 12, symbol: ?isIPv6Supported@LocalConnector@@UEBA_NXZ
    virtual bool isIPv6Supported() const;

    // vIndex: 13, symbol: ?getIPv4Port@LocalConnector@@UEBAGXZ
    virtual ushort getIPv4Port() const;

    // vIndex: 14, symbol: ?getIPv6Port@LocalConnector@@UEBAGXZ
    virtual ushort getIPv6Port() const;

    // vIndex: 15, symbol: ?getNetworkType@LocalConnector@@UEBA?AW4TransportLayer@@XZ
    virtual ::TransportLayer getNetworkType() const;

    // symbol: ??0LocalConnector@@QEAA@AEAUConnectionCallbacks@Connector@@AEBVNetworkIdentifier@@@Z
    MCAPI LocalConnector(struct Connector::ConnectionCallbacks& callbacks, class NetworkIdentifier const& localId);

    // symbol: ?disconnect@LocalConnector@@QEAAXXZ
    MCAPI void disconnect();

    // symbol: ?host@LocalConnector@@QEAAXAEBVNetworkIdentifier@@@Z
    MCAPI void host(class NetworkIdentifier const& id);

    // symbol: ?runEvents@LocalConnector@@QEAAXXZ
    MCAPI void runEvents();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?sLocalConnectivitySystem@LocalConnector@@0VLocalConnectivitySystem@@A
    MCAPI static class LocalConnectivitySystem sLocalConnectivitySystem;

    // NOLINTEND
};
