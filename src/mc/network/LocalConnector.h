#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Connector.h"
#include "mc/network/TransportLayer.h"

// auto generated forward declare list
// clang-format off
class LocalConnectivitySystem;
class LocalNetworkPeer;
class NetworkIdentifier;
namespace Social { class GameConnectionInfo; }
// clang-format on

class LocalConnector : public ::Connector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80>  mUnk7690b5;
    ::ll::UntypedStorage<8, 176> mUnk78bc81;
    ::ll::UntypedStorage<8, 16>  mUnkf0e384;
    ::ll::UntypedStorage<8, 24>  mUnk954ef0;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalConnector& operator=(LocalConnector const&);
    LocalConnector(LocalConnector const&);
    LocalConnector();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocalConnector() /*override*/ = default;

    virtual ::std::string getLocalIp() /*override*/;

    virtual ushort getPort() const /*override*/;

    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const /*override*/;

    virtual bool isIPv4Supported() const /*override*/;

    virtual bool isIPv6Supported() const /*override*/;

    virtual ushort getIPv4Port() const /*override*/;

    virtual ushort getIPv6Port() const /*override*/;

    virtual ::TransportLayer getNetworkType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LocalConnector(::Connector::ConnectionCallbacks& callbacks, ::NetworkIdentifier const& localId);

    MCNAPI_C bool connect(::NetworkIdentifier const& id);

    MCNAPI_C void connectToClient(::LocalConnector& clientConnector, ::std::shared_ptr<::LocalNetworkPeer> clientPeer);

    MCNAPI void disconnect();

    MCNAPI void onRemoteDisconnected(::LocalConnector& otherConnector);

    MCNAPI void runEvents();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::LocalConnectivitySystem& sLocalConnectivitySystem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Connector::ConnectionCallbacks& callbacks, ::NetworkIdentifier const& localId);
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

#ifdef LL_PLAT_C
    MCNAPI ::TransportLayer $getNetworkType() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
