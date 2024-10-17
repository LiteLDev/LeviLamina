#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorDefinitionPtr {
public:
    // prevent constructor by default
    ActorDefinitionPtr& operator=(ActorDefinitionPtr const&);

public:
    // NOLINTBEGIN
    MCAPI ActorDefinitionPtr();

    MCAPI ActorDefinitionPtr(class ActorDefinitionPtr const& rhs);

    MCAPI ActorDefinitionPtr(class ActorDefinitionGroup& group, class ActorDefinition& EntityDefinition);

    MCAPI class ActorDefinitionPtr& operator=(class ActorDefinitionPtr&& moved);

    MCAPI ~ActorDefinitionPtr();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class ActorDefinitionGroup& group, class ActorDefinition& EntityDefinition);

    MCAPI void* ctor$(class ActorDefinitionPtr const& rhs);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI static class ActorDefinitionPtr const& NONE();

    // NOLINTEND
};
