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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void removeActor(::Actor& actor) /*override*/;

    // vIndex: 0
    virtual ~ActorManagerProxy() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $removeActor(::Actor& actor);
    // NOLINTEND
};
