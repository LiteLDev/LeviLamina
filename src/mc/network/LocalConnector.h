#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Connector.h"
#include "mc/network/TransportLayer.h"

// auto generated forward declare list
// clang-format off
class LocalConnectivitySystem;
namespace RakNet { struct SystemAddress; }
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
    virtual ~LocalConnector() /*override*/;

    // vIndex: 1
    virtual ::std::vector<::std::string> getLocalIps() const /*override*/;

    // vIndex: 2
    virtual ::std::string getLocalIp() /*override*/;

    // vIndex: 3
    virtual ushort getPort() const /*override*/;

    // vIndex: 4
    virtual ::std::vector<::RakNet::SystemAddress> getRefinedLocalIps() const /*override*/;

    // vIndex: 5
    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const /*override*/;

    // vIndex: 6
    virtual bool isIPv4Supported() const /*override*/;

    // vIndex: 7
    virtual bool isIPv6Supported() const /*override*/;

    // vIndex: 8
    virtual ushort getIPv4Port() const /*override*/;

    // vIndex: 9
    virtual ushort getIPv6Port() const /*override*/;

    // vIndex: 10
    virtual ::TransportLayer getNetworkType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
