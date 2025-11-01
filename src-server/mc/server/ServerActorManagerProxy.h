#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/level/ActorManagerProxy.h"
#include "mc/world/level/ActorValidationError.h"

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
    virtual ::Bedrock::Result<void, ::ActorValidationError> validate(::Actor const& actor) /*override*/;

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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeActor(::Actor& actor);

    MCNAPI ::Bedrock::Result<void, ::ActorValidationError> $validate(::Actor const& actor);

    MCNAPI void $addActor(::Actor& actor);

    MCNAPI void $removeActorInLevelChunk(::Actor const& actor);

    MCNAPI void $deleteActorFromWorldInLevelChunk(::Actor const& actor);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
