#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Connector.h"
#include "mc/network/TransportLayer.h"

// auto generated forward declare list
// clang-format off
class LocalConnectivitySystem;
class NetworkIdentifier;
namespace Social { class GameConnectionInfo; }
// clang-format on

class LocalConnector : public ::Connector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80>  mUnk7690b5;
    ::ll::UntypedStorage<8, 160> mUnk78bc81;
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
    // vIndex: 0
    virtual ~LocalConnector() /*override*/ = default;

    // vIndex: 1
    virtual ::std::string getLocalIp() /*override*/;

    // vIndex: 2
    virtual ushort getPort() const /*override*/;

    // vIndex: 3
    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const /*override*/;

    // vIndex: 4
    virtual bool isIPv4Supported() const /*override*/;

    // vIndex: 5
    virtual bool isIPv6Supported() const /*override*/;

    // vIndex: 6
    virtual ushort getIPv4Port() const /*override*/;

    // vIndex: 7
    virtual ushort getIPv6Port() const /*override*/;

    // vIndex: 8
    virtual ::TransportLayer getNetworkType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LocalConnector(::Connector::ConnectionCallbacks& callbacks, ::NetworkIdentifier const& localId);

    MCAPI void disconnect();

    MCAPI void onRemoteDisconnected(::LocalConnector& otherConnector);

    MCAPI void runEvents();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::LocalConnectivitySystem& sLocalConnectivitySystem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Connector::ConnectionCallbacks& callbacks, ::NetworkIdentifier const& localId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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

    MCFOLD ::TransportLayer $getNetworkType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
