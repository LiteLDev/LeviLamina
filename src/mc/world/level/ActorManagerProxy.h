#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IActorManagerProxy.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class ActorManagerProxy : public ::IActorManagerProxy {
public:
    // prevent constructor by default
    ActorManagerProxy& operator=(ActorManagerProxy const&);
    ActorManagerProxy(ActorManagerProxy const&);
    ActorManagerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void removeActor(::Actor& actor) /*override*/;

    // vIndex: 0
    virtual ~ActorManagerProxy() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $removeActor(::Actor& actor);
    // NOLINTEND
};
