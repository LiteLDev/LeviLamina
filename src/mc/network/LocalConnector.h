#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~LocalConnector();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol:
    // ?getLocalIp@LocalConnector@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getLocalIp();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: ?getConnectedGameInfo@LocalConnector@@UEBAAEBVGameConnectionInfo@Social@@XZ
    virtual class Social::GameConnectionInfo const& getConnectedGameInfo() const;

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: ?getNatPunchInfo@LocalConnector@@UEBA?AUNatPunchInfo@Connector@@XZ
    virtual struct Connector::NatPunchInfo getNatPunchInfo() const;

    // symbol: ?addConnectionStateListener@LocalConnector@@UEAAXPEAVConnectionStateListener@Connector@@@Z
    MCVAPI void addConnectionStateListener(class Connector::ConnectionStateListener*);

    // symbol: ?getIPv4Port@LocalConnector@@UEBAGXZ
    MCVAPI ushort getIPv4Port() const;

    // symbol: ?getIPv6Port@LocalConnector@@UEBAGXZ
    MCVAPI ushort getIPv6Port() const;

    // symbol:
    // ?getLocalIps@LocalConnector@@UEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCVAPI std::vector<std::string> getLocalIps() const;

    // symbol: ?getPort@LocalConnector@@UEBAGXZ
    MCVAPI ushort getPort() const;

    // symbol:
    // ?getRefinedLocalIps@LocalConnector@@UEBA?AV?$vector@USystemAddress@RakNet@@V?$allocator@USystemAddress@RakNet@@@std@@@std@@XZ
    MCVAPI std::vector<struct RakNet::SystemAddress> getRefinedLocalIps() const;

    // symbol: ?isIPv4Supported@LocalConnector@@UEBA_NXZ
    MCVAPI bool isIPv4Supported() const;

    // symbol: ?isIPv6Supported@LocalConnector@@UEBA_NXZ
    MCVAPI bool isIPv6Supported() const;

    // symbol: ?removeConnectionStateListener@LocalConnector@@UEAAXPEAVConnectionStateListener@Connector@@@Z
    MCVAPI void removeConnectionStateListener(class Connector::ConnectionStateListener*);

    // symbol: ?setupNatPunch@LocalConnector@@UEAAX_N@Z
    MCVAPI void setupNatPunch(bool);

    // symbol:
    // ?startNatPunchingClient@LocalConnector@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@Z
    MCVAPI void startNatPunchingClient(std::string const&, ushort);

    // symbol: ?disconnect@LocalConnector@@QEAAXXZ
    MCAPI void disconnect();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?sLocalConnectivitySystem@LocalConnector@@0VLocalConnectivitySystem@@A
    MCAPI static class LocalConnectivitySystem sLocalConnectivitySystem;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $sLocalConnectivitySystem() { return sLocalConnectivitySystem; }

    // NOLINTEND
};
