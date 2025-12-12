#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"
#include "mc/world/level/ActorManagerProxy.h"
#include "mc/world/level/ActorValidationError.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
// clang-format on

class ServerActorManagerProxy : public ::ActorManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Level>> mLevel;
    // NOLINTEND

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
    MCAPI void $initializeActor(::Actor& actor);

    MCAPI ::Bedrock::Result<void, ::ActorValidationError> $validate(::Actor const& actor);

    MCAPI void $addActor(::Actor& actor);

    MCAPI void $removeActorInLevelChunk(::Actor const& actor);

    MCAPI void $deleteActorFromWorldInLevelChunk(::Actor const& actor);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
