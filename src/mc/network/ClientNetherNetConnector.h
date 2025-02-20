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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 10
    virtual bool connect(::Social::GameConnectionInfo const&, ::Social::GameConnectionInfo const&) /*override*/;

    // vIndex: 11
    virtual void disconnect() /*override*/;

    // vIndex: 14
    virtual bool isServer() const /*override*/;

    // vIndex: 2
    virtual bool OnSessionRequested(::NetherNet::NetworkID, uint64) /*override*/;

    // vIndex: 3
    virtual void OnSessionOpen(::NetherNet::NetworkID, uint64) /*override*/;

    // vIndex: 0
    virtual ~ClientNetherNetConnector() /*override*/ = default;
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
