#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorDefinitionPtr {
public:
    // prevent constructor by default
    ActorDefinitionPtr& operator=(ActorDefinitionPtr const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ActorDefinitionPtr@@QEAA@XZ
    MCAPI ActorDefinitionPtr();

    // symbol: ??0ActorDefinitionPtr@@QEAA@AEBV0@@Z
    MCAPI ActorDefinitionPtr(class ActorDefinitionPtr const& rhs);

    // symbol: ??0ActorDefinitionPtr@@QEAA@AEAVActorDefinitionGroup@@AEAVActorDefinition@@@Z
    MCAPI ActorDefinitionPtr(class ActorDefinitionGroup& group, class ActorDefinition& EntityDefinition);

    // symbol: ??4ActorDefinitionPtr@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class ActorDefinitionPtr& operator=(class ActorDefinitionPtr&& moved);

    // symbol: ??1ActorDefinitionPtr@@QEAA@XZ
    MCAPI ~ActorDefinitionPtr();

    // symbol: ?NONE@ActorDefinitionPtr@@2V1@B
    MCAPI static class ActorDefinitionPtr const NONE;

    // NOLINTEND
};
