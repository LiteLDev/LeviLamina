#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TransportLayer.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class NetworkPeer;
namespace RakNet { struct SystemAddress; }
namespace Social { class GameConnectionInfo; }
// clang-format on

class Connector {
public:
    // Connector inner types declare
    // clang-format off
    struct ConnectionCallbacks;
    // clang-format on

    // Connector inner types define
    struct ConnectionCallbacks {
    public:
        // prevent constructor by default
        ConnectionCallbacks& operator=(ConnectionCallbacks const&);
        ConnectionCallbacks(ConnectionCallbacks const&);
        ConnectionCallbacks();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~ConnectionCallbacks() = default;

        // vIndex: 1
        virtual bool onNewIncomingConnection(::NetworkIdentifier const&, ::std::shared_ptr<::NetworkPeer>&&) = 0;

        // vIndex: 2
        virtual bool onNewOutgoingConnection(::NetworkIdentifier const&, ::std::shared_ptr<::NetworkPeer>&&) = 0;

        // vIndex: 3
        virtual void onConnectionClosed(
            ::NetworkIdentifier const&,
            ::Connection::DisconnectFailReason const,
            ::std::string const&,
            bool
        ) = 0;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf38309;
    // NOLINTEND

public:
    // prevent constructor by default
    Connector& operator=(Connector const&);
    Connector(Connector const&);
    Connector();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Connector();

    // vIndex: 1
    virtual ::std::vector<::std::string> getLocalIps() const;

    // vIndex: 2
    virtual ::std::string getLocalIp();

    // vIndex: 3
    virtual ushort getPort() const;

    // vIndex: 4
    virtual ::std::vector<::RakNet::SystemAddress> getRefinedLocalIps() const;

    // vIndex: 5
    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const;

    // vIndex: 6
    virtual bool isIPv4Supported() const;

    // vIndex: 7
    virtual bool isIPv6Supported() const;

    // vIndex: 8
    virtual ushort getIPv4Port() const;

    // vIndex: 9
    virtual ushort getIPv6Port() const;

    // vIndex: 10
    virtual ::TransportLayer getNetworkType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Connector(::Connector::ConnectionCallbacks& callbacks);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Connector::ConnectionCallbacks& callbacks);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::vector<::std::string> $getLocalIps() const;

    MCAPI ::std::string $getLocalIp();

    MCAPI ushort $getPort() const;

    MCAPI ::std::vector<::RakNet::SystemAddress> $getRefinedLocalIps() const;

    MCAPI ::Social::GameConnectionInfo const& $getConnectedGameInfo() const;

    MCAPI bool $isIPv4Supported() const;

    MCAPI bool $isIPv6Supported() const;

    MCAPI ushort $getIPv4Port() const;

    MCAPI ushort $getIPv6Port() const;

    MCAPI ::TransportLayer $getNetworkType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
