#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TransportLayer.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class NetworkPeer;
namespace Json { class Value; }
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
        virtual ~ConnectionCallbacks() = default;

        virtual bool onNewIncomingConnection(::NetworkIdentifier const&, ::std::shared_ptr<::NetworkPeer>&&) = 0;

        virtual bool onNewOutgoingConnection(::NetworkIdentifier const&, ::std::shared_ptr<::NetworkPeer>&&) = 0;

        virtual void onConnectionClosed(
            ::NetworkIdentifier const&,
            ::Connection::DisconnectFailReason const,
            ::std::string const&,
            bool,
            ::Json::Value const&
        ) = 0;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Connector::ConnectionCallbacks&> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    Connector& operator=(Connector const&);
    Connector(Connector const&);
    Connector();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Connector();

    virtual ::std::string getLocalIp();

    virtual ushort getPort() const;

    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const;

    virtual bool isIPv4Supported() const;

    virtual bool isIPv6Supported() const;

    virtual ushort getIPv4Port() const;

    virtual ushort getIPv6Port() const;

    virtual ::TransportLayer getNetworkType() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::string $getLocalIp();

    MCFOLD ushort $getPort() const;

    MCFOLD ::Social::GameConnectionInfo const& $getConnectedGameInfo() const;

    MCFOLD bool $isIPv4Supported() const;

    MCFOLD bool $isIPv6Supported() const;

    MCFOLD ushort $getIPv4Port() const;

    MCFOLD ushort $getIPv6Port() const;

#ifdef LL_PLAT_C
    MCFOLD ::TransportLayer $getNetworkType() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
