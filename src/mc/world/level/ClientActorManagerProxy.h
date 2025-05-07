#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ActorManagerProxy.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class ClientActorManagerProxy : public ::ActorManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk495c78;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientActorManagerProxy& operator=(ClientActorManagerProxy const&);
    ClientActorManagerProxy(ClientActorManagerProxy const&);
    ClientActorManagerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void initializeActor(::Actor&) /*override*/;

    // vIndex: 2
    virtual bool validate(::Actor const&) /*override*/;

    // vIndex: 3
    virtual void addActor(::Actor&) /*override*/;

    // vIndex: 5
    virtual void removeActorInLevelChunk(::Actor const&) /*override*/;

    // vIndex: 6
    virtual void deleteActorFromWorldInLevelChunk(::Actor const&) /*override*/;

    // vIndex: 0
    virtual ~ClientActorManagerProxy() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
