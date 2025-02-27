#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ActorManagerProxy.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class ServerActorManagerProxy : public ::ActorManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk112fa3;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerActorManagerProxy& operator=(ServerActorManagerProxy const&);
    ServerActorManagerProxy(ServerActorManagerProxy const&);
    ServerActorManagerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void initializeActor(::Actor& actor) /*override*/;

    // vIndex: 2
    virtual bool validate(::Actor const& actor) /*override*/;

    // vIndex: 3
    virtual void addActor(::Actor& actor) /*override*/;

    // vIndex: 5
    virtual void removeActorInLevelChunk(::Actor const& actor) /*override*/;

    // vIndex: 6
    virtual void deleteActorFromWorldInLevelChunk(::Actor const& actor) /*override*/;

    // vIndex: 0
    virtual ~ServerActorManagerProxy() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeActor(::Actor& actor);

    MCAPI bool $validate(::Actor const& actor);

    MCAPI void $addActor(::Actor& actor);

    MCAPI void $removeActorInLevelChunk(::Actor const& actor);

    MCAPI void $deleteActorFromWorldInLevelChunk(::Actor const& actor);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
