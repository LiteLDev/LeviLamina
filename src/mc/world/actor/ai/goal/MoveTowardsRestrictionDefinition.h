#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

class MoveTowardsRestrictionDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    MoveTowardsRestrictionDefinition& operator=(MoveTowardsRestrictionDefinition const&);
    MoveTowardsRestrictionDefinition(MoveTowardsRestrictionDefinition const&);
    MoveTowardsRestrictionDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveTowardsRestrictionDefinition() = default;

    MCAPI void initialize(class EntityContext& entity, class MoveTowardsRestrictionGoal& goal) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
