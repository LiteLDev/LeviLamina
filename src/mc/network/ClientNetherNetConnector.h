#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Connector.h"
#include "mc/network/NetherNetConnector.h"

// auto generated forward declare list
// clang-format off
class NetherNetTransportFactory;
namespace NetherNet { struct NetworkID; }
namespace Social { class GameConnectionInfo; }
// clang-format on

struct ClientNetherNetConnector : public ::NetherNetConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 520> mUnkb30d11;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientNetherNetConnector& operator=(ClientNetherNetConnector const&);
    ClientNetherNetConnector(ClientNetherNetConnector const&);
    ClientNetherNetConnector();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ClientNetherNetConnector() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ClientNetherNetConnector() /*override*/;
#endif

    virtual bool closeSessionWithUser(::NetherNet::NetworkID remoteId, uint64 sessionId) /*override*/;

    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const /*override*/;

#ifdef LL_PLAT_S
    virtual bool connect(::Social::GameConnectionInfo const&, ::Social::GameConnectionInfo const&) /*override*/;
#else // LL_PLAT_C
    virtual bool connect(
        ::Social::GameConnectionInfo const& primaryConnection,
        ::Social::GameConnectionInfo const& backupConnection
    ) /*override*/;
#endif

    virtual void disconnect() /*override*/;

    virtual bool isServer() const /*override*/;

    virtual bool OnSessionRequested(::NetherNet::NetworkID, uint64) /*override*/;

#ifdef LL_PLAT_S
    virtual void OnSessionOpen(::NetherNet::NetworkID, uint64, bool) /*override*/;
#else // LL_PLAT_C
    virtual void OnSessionOpen(::NetherNet::NetworkID networkID, uint64 sessionId, bool isLan) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI
    ClientNetherNetConnector(::NetherNetTransportFactory const& factory, ::Connector::ConnectionCallbacks& callbacks);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::NetherNetTransportFactory const& factory, ::Connector::ConnectionCallbacks& callbacks);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $closeSessionWithUser(::NetherNet::NetworkID remoteId, uint64 sessionId);

    MCNAPI ::Social::GameConnectionInfo const& $getConnectedGameInfo() const;

    MCNAPI bool $connect(
        ::Social::GameConnectionInfo const& primaryConnection,
        ::Social::GameConnectionInfo const& backupConnection
    );

    MCNAPI void $disconnect();

    MCNAPI bool $isServer() const;

    MCNAPI bool $OnSessionRequested(::NetherNet::NetworkID, uint64);

    MCNAPI void $OnSessionOpen(::NetherNet::NetworkID networkID, uint64 sessionId, bool isLan);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForConnector();

    MCNAPI static void** $vftableForNetworkEnableDisableListener();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
