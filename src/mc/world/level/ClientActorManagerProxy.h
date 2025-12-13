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
    virtual void initializeActor(::Actor& actor) /*override*/;

    virtual ::Bedrock::Result<void, ::ActorValidationError> validate(::Actor const& actor) /*override*/;

    virtual void addActor(::Actor& actor) /*override*/;

    virtual void removeActorInLevelChunk(::Actor const&) /*override*/;

    virtual void deleteActorFromWorldInLevelChunk(::Actor const&) /*override*/;

    virtual ~ClientActorManagerProxy() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeActor(::Actor& actor);

    MCNAPI ::Bedrock::Result<void, ::ActorValidationError> $validate(::Actor const& actor);

    MCNAPI void $addActor(::Actor& actor);

    MCNAPI void $removeActorInLevelChunk(::Actor const&);

    MCNAPI void $deleteActorFromWorldInLevelChunk(::Actor const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
