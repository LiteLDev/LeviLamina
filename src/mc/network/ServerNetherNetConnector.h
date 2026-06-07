#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Connector.h"
#include "mc/network/NetherNetConnector.h"

// auto generated forward declare list
// clang-format off
class NetherNetTransportFactory;
struct ConnectionDefinition;
namespace NetherNet { struct NetworkID; }
// clang-format on

struct ServerNetherNetConnector : public ::NetherNetConnector {
public:
    // prevent constructor by default
    ServerNetherNetConnector();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerNetherNetConnector() /*override*/;

    virtual bool host(::ConnectionDefinition const& definition) /*override*/;

    virtual void disconnect() /*override*/;

    virtual bool isServer() const /*override*/;

    virtual bool OnSessionRequested(::NetherNet::NetworkID, uint64) /*override*/;

    virtual void OnSessionOpen(::NetherNet::NetworkID networkID, uint64 sessionId, bool isLan) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerNetherNetConnector(
        ::NetherNetTransportFactory const&      factory,
        ::Connector::ConnectionCallbacks&       callbacks,
        ::std::optional<::NetherNet::NetworkID> networkID
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::NetherNetTransportFactory const&      factory,
        ::Connector::ConnectionCallbacks&       callbacks,
        ::std::optional<::NetherNet::NetworkID> networkID
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $host(::ConnectionDefinition const& definition);

    MCNAPI void $disconnect();

    MCNAPI bool $isServer() const;

    MCNAPI bool $OnSessionRequested(::NetherNet::NetworkID, uint64);

    MCNAPI void $OnSessionOpen(::NetherNet::NetworkID networkID, uint64 sessionId, bool isLan);


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
