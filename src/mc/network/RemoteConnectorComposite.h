#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/RemoteConnector.h"
#include "mc/network/TransportLayer.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
struct ConnectionDefinition;
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
    virtual ~RemoteConnectorComposite() /*override*/ = default;

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

    // vIndex: 9
    virtual bool host(::ConnectionDefinition const& definition) /*override*/;

    // vIndex: 10
    virtual bool connect(::Social::GameConnectionInfo const&, ::Social::GameConnectionInfo const&) /*override*/;

    // vIndex: 11
    virtual void disconnect() /*override*/;

    // vIndex: 12
    virtual void tick() /*override*/;

    // vIndex: 13
    virtual void runEvents() /*override*/;

    // vIndex: 14
    virtual bool isServer() const /*override*/;

    // vIndex: 15
    virtual void closeNetworkConnection(::NetworkIdentifier const&) /*override*/;

    // vIndex: 17
    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const&) /*override*/;

    // vIndex: 16
    virtual ::NetworkIdentifier getNetworkIdentifier() const /*override*/;

    // vIndex: 1
    virtual void _onDisable() /*override*/;

    // vIndex: 2
    virtual void _onEnable() /*override*/;

    // vIndex: 8
    virtual ::TransportLayer getNetworkType() const /*override*/;
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
