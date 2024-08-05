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
    // vIndex: 0
    virtual ~LocalConnector() = default;

    // vIndex: 1
    virtual std::vector<std::string> getLocalIps() const;

    // vIndex: 2
    virtual std::string getLocalIp();

    // vIndex: 3
    virtual ushort getPort() const;

    // vIndex: 4
    virtual std::vector<struct RakNet::SystemAddress> getRefinedLocalIps() const;

    // vIndex: 5
    virtual class Social::GameConnectionInfo const& getConnectedGameInfo() const;

    // vIndex: 6
    virtual void setupNatPunch(bool connectToClient);

    // vIndex: 7
    virtual struct Connector::NatPunchInfo getNatPunchInfo() const;

    // vIndex: 8
    virtual void startNatPunchingClient(std::string const& address, ushort port);

    // vIndex: 9
    virtual void addConnectionStateListener(class Connector::ConnectionStateListener* listener);

    // vIndex: 10
    virtual void removeConnectionStateListener(class Connector::ConnectionStateListener* listener);

    // vIndex: 11
    virtual bool isIPv4Supported() const;

    // vIndex: 12
    virtual bool isIPv6Supported() const;

    // vIndex: 13
    virtual ushort getIPv4Port() const;

    // vIndex: 14
    virtual ushort getIPv6Port() const;

    // vIndex: 15
    virtual ::TransportLayer getNetworkType() const;

    MCAPI LocalConnector(struct Connector::ConnectionCallbacks& callbacks, class NetworkIdentifier const& localId);

    MCAPI void disconnect();

    MCAPI void host(class NetworkIdentifier const& id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class LocalConnectivitySystem sLocalConnectivitySystem;

    // NOLINTEND
};
