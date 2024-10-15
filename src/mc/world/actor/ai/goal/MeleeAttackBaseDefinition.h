#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

class MeleeAttackBaseDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    MeleeAttackBaseDefinition& operator=(MeleeAttackBaseDefinition const&);
    MeleeAttackBaseDefinition(MeleeAttackBaseDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MeleeAttackBaseDefinition();

    MCAPI MeleeAttackBaseDefinition();

    MCAPI void initialize(class EntityContext& entity, class MeleeAttackBaseGoal& goal) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
