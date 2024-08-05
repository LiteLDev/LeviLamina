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

    MCAPI static class ActorDefinitionPtr const NONE;

    // NOLINTEND
};
