#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/IServerNetworkController.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
class ServerPlayer;
namespace mce { class UUID; }
// clang-format on

struct ServerNetworkController : public ::IServerNetworkController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk522e4e;
    ::ll::UntypedStorage<8, 16> mUnk1ced00;
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
    // vIndex: 1
    virtual bool isDedicatedServer() const /*override*/;

    // vIndex: 2
    virtual bool isHost(::mce::UUID const& playerID) const /*override*/;

    // vIndex: 3
    virtual bool canChangePermission(::mce::UUID const& playerId, ::ServerPlayer const& player) const /*override*/;

    // vIndex: 0
    virtual ~ServerNetworkController() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isDedicatedServer() const;

    MCNAPI bool $isHost(::mce::UUID const& playerID) const;

    MCNAPI bool $canChangePermission(::mce::UUID const& playerId, ::ServerPlayer const& player) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
