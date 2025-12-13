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
    virtual bool host(::ConnectionDefinition const& definition) /*override*/;

    virtual void disconnect() /*override*/;

    virtual bool isServer() const /*override*/;

    virtual bool OnSessionRequested(::NetherNet::NetworkID, uint64) /*override*/;

    virtual void OnSessionOpen(::NetherNet::NetworkID networkID, uint64 sessionId) /*override*/;

    virtual ~ServerNetherNetConnector() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $host(::ConnectionDefinition const& definition);

    MCNAPI void $disconnect();

    MCNAPI bool $isServer() const;

    MCNAPI bool $OnSessionRequested(::NetherNet::NetworkID, uint64);

    MCNAPI void $OnSessionOpen(::NetherNet::NetworkID networkID, uint64 sessionId);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForNetworkEnableDisableListener();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForConnector();
    // NOLINTEND
};
