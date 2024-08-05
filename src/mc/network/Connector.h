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
    // vIndex: 0
    virtual ~Connector();

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
    virtual void startNatPunchingClient(std::string const&, ushort);

    // vIndex: 9
    virtual void addConnectionStateListener(class Connector::ConnectionStateListener*);

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

    MCAPI explicit Connector(struct Connector::ConnectionCallbacks& callbacks);

    // NOLINTEND
};
