#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Connector.h"
#include "mc/network/TransportLayer.h"

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void addConnectionStateListener$(class Connector::ConnectionStateListener* listener);

    MCAPI class Social::GameConnectionInfo const& getConnectedGameInfo$() const;

    MCAPI ushort getIPv4Port$() const;

    MCAPI ushort getIPv6Port$() const;

    MCAPI std::string getLocalIp$();

    MCAPI std::vector<std::string> getLocalIps$() const;

    MCAPI struct Connector::NatPunchInfo getNatPunchInfo$() const;

    MCAPI ::TransportLayer getNetworkType$() const;

    MCAPI ushort getPort$() const;

    MCAPI std::vector<struct RakNet::SystemAddress> getRefinedLocalIps$() const;

    MCAPI bool isIPv4Supported$() const;

    MCAPI bool isIPv6Supported$() const;

    MCAPI void removeConnectionStateListener$(class Connector::ConnectionStateListener* listener);

    MCAPI void setupNatPunch$(bool connectToClient);

    MCAPI void startNatPunchingClient$(std::string const& address, ushort port);

    MCAPI static class LocalConnectivitySystem& sLocalConnectivitySystem();

    // NOLINTEND
};
