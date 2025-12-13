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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 472> mUnkb30d11;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientNetherNetConnector& operator=(ClientNetherNetConnector const&);
    ClientNetherNetConnector(ClientNetherNetConnector const&);
    ClientNetherNetConnector();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const /*override*/;

    virtual bool connect(
        ::Social::GameConnectionInfo const& gameConnection,
        ::Social::GameConnectionInfo const& backupConnection
    ) /*override*/;

    virtual void disconnect() /*override*/;

    virtual bool isServer() const /*override*/;

    virtual bool OnSessionRequested(::NetherNet::NetworkID, uint64) /*override*/;

    virtual void OnSessionOpen(::NetherNet::NetworkID networkID, uint64 sessionId) /*override*/;

    virtual ~ClientNetherNetConnector() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Social::GameConnectionInfo const& $getConnectedGameInfo() const;

    MCNAPI bool
    $connect(::Social::GameConnectionInfo const& gameConnection, ::Social::GameConnectionInfo const& backupConnection);

    MCNAPI void $disconnect();

    MCNAPI bool $isServer() const;

    MCNAPI bool $OnSessionRequested(::NetherNet::NetworkID, uint64);

    MCNAPI void $OnSessionOpen(::NetherNet::NetworkID networkID, uint64 sessionId);
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
