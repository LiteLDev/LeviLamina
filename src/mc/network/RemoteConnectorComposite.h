#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/RemoteConnector.h"
#include "mc/network/TransportLayer.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
struct ConnectionDefinition;
namespace RakNet { struct SystemAddress; }
namespace Social { class GameConnectionInfo; }
// clang-format on

class RemoteConnectorComposite : public ::RemoteConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc0ba51;
    ::ll::UntypedStorage<8, 8>  mUnk48bddd;
    ::ll::UntypedStorage<8, 8>  mUnk39d08b;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoteConnectorComposite& operator=(RemoteConnectorComposite const&);
    RemoteConnectorComposite(RemoteConnectorComposite const&);
    RemoteConnectorComposite();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RemoteConnectorComposite() /*override*/;

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

    // vIndex: 11
    virtual bool host(::ConnectionDefinition const& definition) /*override*/;

    // vIndex: 12
    virtual bool connect(::Social::GameConnectionInfo const&, ::Social::GameConnectionInfo const&) /*override*/;

    // vIndex: 13
    virtual void disconnect() /*override*/;

    // vIndex: 14
    virtual void tick() /*override*/;

    // vIndex: 15
    virtual void runEvents() /*override*/;

    // vIndex: 16
    virtual bool isServer() const /*override*/;

    // vIndex: 17
    virtual void closeNetworkConnection(::NetworkIdentifier const&) /*override*/;

    // vIndex: 19
    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const&) /*override*/;

    // vIndex: 18
    virtual ::NetworkIdentifier getNetworkIdentifier() const /*override*/;

    // vIndex: 1
    virtual void _onDisable() /*override*/;

    // vIndex: 2
    virtual void _onEnable() /*override*/;

    // vIndex: 10
    virtual ::TransportLayer getNetworkType() const /*override*/;
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

    MCAPI bool $host(::ConnectionDefinition const& definition);

    MCAPI bool $connect(::Social::GameConnectionInfo const&, ::Social::GameConnectionInfo const&);

    MCAPI void $disconnect();

    MCAPI void $tick();

    MCAPI void $runEvents();

    MCAPI bool $isServer() const;

    MCAPI void $closeNetworkConnection(::NetworkIdentifier const&);

    MCAPI bool $setApplicationHandshakeCompleted(::NetworkIdentifier const&);

    MCAPI ::NetworkIdentifier $getNetworkIdentifier() const;

    MCAPI void $_onDisable();

    MCAPI void $_onEnable();

    MCAPI ::TransportLayer $getNetworkType() const;
    // NOLINTEND
};
