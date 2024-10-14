#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

class TargetGoalDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    TargetGoalDefinition& operator=(TargetGoalDefinition const&);
    TargetGoalDefinition(TargetGoalDefinition const&);
    TargetGoalDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TargetGoalDefinition();

    MCAPI void initialize(class EntityContext& entity, class TargetGoal& goal) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
