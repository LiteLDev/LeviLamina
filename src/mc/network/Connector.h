#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TransportLayer.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class NetworkPeer;
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
    virtual ::std::string getLocalIp();

    // vIndex: 2
    virtual ushort getPort() const;

    // vIndex: 3
    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const;

    // vIndex: 4
    virtual bool isIPv4Supported() const;

    // vIndex: 5
    virtual bool isIPv6Supported() const;

    // vIndex: 6
    virtual ushort getIPv4Port() const;

    // vIndex: 7
    virtual ushort getIPv6Port() const;

    // vIndex: 8
    virtual ::TransportLayer getNetworkType() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $getLocalIp();

    MCNAPI ushort $getPort() const;

    MCNAPI ::Social::GameConnectionInfo const& $getConnectedGameInfo() const;

    MCNAPI bool $isIPv4Supported() const;

    MCNAPI bool $isIPv6Supported() const;

    MCNAPI ushort $getIPv4Port() const;

    MCNAPI ushort $getIPv6Port() const;

    MCNAPI ::TransportLayer $getNetworkType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
