#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/level/ActorValidationError.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class IActorManagerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IActorManagerProxy() = default;

    virtual void initializeActor(::Actor&) = 0;

    virtual ::Bedrock::Result<void, ::ActorValidationError> validate(::Actor const&) = 0;

    virtual void addActor(::Actor&) = 0;

    virtual void removeActor(::Actor&) = 0;

    virtual void removeActorInLevelChunk(::Actor const&) = 0;

    virtual void deleteActorFromWorldInLevelChunk(::Actor const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
