#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/IServerNetworkController.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
class ServerPlayer;
// clang-format on

struct ServerNetworkController : public ::IServerNetworkController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk522e4e;
    ::ll::UntypedStorage<8, 64> mUnk733c97;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerNetworkController& operator=(ServerNetworkController const&);
    ServerNetworkController(ServerNetworkController const&);
    ServerNetworkController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isDedicatedServer() const /*override*/;

    virtual bool canChangePermission(::ServerPlayer const& player) const /*override*/;

    virtual ~ServerNetworkController() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isDedicatedServer() const;

    MCNAPI bool $canChangePermission(::ServerPlayer const& player) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
