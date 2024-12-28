#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/NetherNetConnector.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
namespace Social { class GameConnectionInfo; }
// clang-format on

struct ClientNetherNetConnector : public ::NetherNetConnector {
public:
    // prevent constructor by default
    ClientNetherNetConnector& operator=(ClientNetherNetConnector const&);
    ClientNetherNetConnector(ClientNetherNetConnector const&);
    ClientNetherNetConnector();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 12
    virtual bool connect(::Social::GameConnectionInfo const&, ::Social::GameConnectionInfo const&) /*override*/;

    // vIndex: 13
    virtual void disconnect() /*override*/;

    // vIndex: 16
    virtual bool isServer() const /*override*/;

    // vIndex: 1
    virtual bool OnSessionRequested(::NetherNet::NetworkID, uint64) /*override*/;

    // vIndex: 2
    virtual void OnSessionOpen(::NetherNet::NetworkID, uint64) /*override*/;

    // vIndex: 0
    virtual ~ClientNetherNetConnector() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $connect(::Social::GameConnectionInfo const&, ::Social::GameConnectionInfo const&);

    MCAPI void $disconnect();

    MCAPI bool $isServer() const;

    MCAPI bool $OnSessionRequested(::NetherNet::NetworkID, uint64);

    MCAPI void $OnSessionOpen(::NetherNet::NetworkID, uint64);
    // NOLINTEND
};
