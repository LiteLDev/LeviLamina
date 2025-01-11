#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/NetherNetConnector.h"

// auto generated forward declare list
// clang-format off
struct ConnectionDefinition;
namespace NetherNet { struct NetworkID; }
// clang-format on

struct ServerNetherNetConnector : public ::NetherNetConnector {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 11
    virtual bool host(::ConnectionDefinition const& definition) /*override*/;

    // vIndex: 13
    virtual void disconnect() /*override*/;

    // vIndex: 16
    virtual bool isServer() const /*override*/;

    // vIndex: 1
    virtual bool OnSessionRequested(::NetherNet::NetworkID, uint64) /*override*/;

    // vIndex: 2
    virtual void OnSessionOpen(::NetherNet::NetworkID networkID, uint64 sessionId) /*override*/;

    // vIndex: 0
    virtual ~ServerNetherNetConnector() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $host(::ConnectionDefinition const& definition);

    MCAPI void $disconnect();

    MCAPI bool $isServer() const;

    MCAPI bool $OnSessionRequested(::NetherNet::NetworkID, uint64);

    MCAPI void $OnSessionOpen(::NetherNet::NetworkID networkID, uint64 sessionId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForEnableNonOwnerReferences();

    MCAPI static void** $vftableForNetworkEnableDisableListener();

    MCAPI static void** $vftable();

    MCAPI static void** $vftableForConnector();
    // NOLINTEND
};
