#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
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
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ServerLevel>> mServerLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDeathManagerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerDeathManagerProxy() /*override*/ = default;

    virtual ::Actor* fetchActor(::ActorUniqueID actorUniqueID) const /*override*/;

    virtual bool shouldShowDeathMessages() const /*override*/;

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
