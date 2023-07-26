#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Connector.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct SystemAddress; }
namespace Social { class GameConnectionInfo; }
// clang-format on

class LocalConnector {

public:
    // prevent constructor by default
    LocalConnector& operator=(LocalConnector const&) = delete;
    LocalConnector(LocalConnector const&)            = delete;
    LocalConnector()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getLocalIp\@LocalConnector\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getLocalIp(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getConnectedGameInfo\@LocalConnector\@\@UEBAAEBVGameConnectionInfo\@Social\@\@XZ
     */
    virtual class Social::GameConnectionInfo const& getConnectedGameInfo() const; // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?getNatPunchInfo\@LocalConnector\@\@UEBA?AUNatPunchInfo\@Connector\@\@XZ
     */
    virtual struct Connector::NatPunchInfo getNatPunchInfo() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOCALCONNECTOR
    /**
     * @symbol ?addConnectionStateListener\@LocalConnector\@\@UEAAXPEAVConnectionStateListener\@Connector\@\@\@Z
     */
    MCVAPI void addConnectionStateListener(class Connector::ConnectionStateListener*); // NOLINT
    /**
     * @symbol ?getIPv4Port\@LocalConnector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getIPv4Port() const; // NOLINT
    /**
     * @symbol ?getIPv6Port\@LocalConnector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getIPv6Port() const; // NOLINT
    /**
     * @symbol
     * ?getLocalIps\@LocalConnector\@\@UEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCVAPI std::vector<std::string> getLocalIps() const; // NOLINT
    /**
     * @symbol ?getPort\@LocalConnector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getPort() const; // NOLINT
    /**
     * @symbol
     * ?getRefinedLocalIps\@LocalConnector\@\@UEBA?AV?$vector\@USystemAddress\@RakNet\@\@V?$allocator\@USystemAddress\@RakNet\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<struct RakNet::SystemAddress> getRefinedLocalIps() const; // NOLINT
    /**
     * @symbol ?isIPv4Supported\@LocalConnector\@\@UEBA_NXZ
     */
    MCVAPI bool isIPv4Supported() const; // NOLINT
    /**
     * @symbol ?isIPv6Supported\@LocalConnector\@\@UEBA_NXZ
     */
    MCVAPI bool isIPv6Supported() const; // NOLINT
    /**
     * @symbol ?removeConnectionStateListener\@LocalConnector\@\@UEAAXPEAVConnectionStateListener\@Connector\@\@\@Z
     */
    MCVAPI void removeConnectionStateListener(class Connector::ConnectionStateListener*); // NOLINT
    /**
     * @symbol ?setupNatPunch\@LocalConnector\@\@UEAAX_N\@Z
     */
    MCVAPI void setupNatPunch(bool); // NOLINT
    /**
     * @symbol
     * ?startNatPunchingClient\@LocalConnector\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@G\@Z
     */
    MCVAPI void startNatPunchingClient(std::string const&, unsigned short); // NOLINT
#endif
    /**
     * @symbol ??0LocalConnector\@\@QEAA\@AEAUConnectionCallbacks\@Connector\@\@AEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI LocalConnector(struct Connector::ConnectionCallbacks&, class NetworkIdentifier const&); // NOLINT
    /**
     * @symbol ?disconnect\@LocalConnector\@\@QEAAXXZ
     */
    MCAPI void disconnect(); // NOLINT
    /**
     * @symbol ?host\@LocalConnector\@\@QEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI void host(class NetworkIdentifier const&); // NOLINT
    /**
     * @symbol ?runEvents\@LocalConnector\@\@QEAAXXZ
     */
    MCAPI void runEvents(); // NOLINT

    // private:

private:
    /**
     * @symbol ?sLocalConnectivitySystem\@LocalConnector\@\@0VLocalConnectivitySystem\@\@A
     */
    MCAPI static class LocalConnectivitySystem sLocalConnectivitySystem; // NOLINT
};
