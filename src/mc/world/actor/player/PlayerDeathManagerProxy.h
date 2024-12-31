#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/IPlayerDeathManagerProxy.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ServerLevel;
struct ActorUniqueID;
// clang-format on

class PlayerDeathManagerProxy : public ::IPlayerDeathManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka315bc;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDeathManagerProxy& operator=(PlayerDeathManagerProxy const&);
    PlayerDeathManagerProxy(PlayerDeathManagerProxy const&);
    PlayerDeathManagerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerDeathManagerProxy() /*override*/ = default;

    // vIndex: 1
    virtual ::Actor* fetchActor(::ActorUniqueID actorUniqueID) const /*override*/;

    // vIndex: 2
    virtual bool shouldShowDeathMessages() const /*override*/;

    // vIndex: 3
    virtual void onWorldOwnerHasDied() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PlayerDeathManagerProxy(::ServerLevel& serverLevel);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ServerLevel& serverLevel);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Actor* $fetchActor(::ActorUniqueID actorUniqueID) const;

    MCAPI bool $shouldShowDeathMessages() const;

    MCAPI void $onWorldOwnerHasDied();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
