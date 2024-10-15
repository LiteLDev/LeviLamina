#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

class TimerActorFlagBaseDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    TimerActorFlagBaseDefinition& operator=(TimerActorFlagBaseDefinition const&);
    TimerActorFlagBaseDefinition(TimerActorFlagBaseDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TimerActorFlagBaseDefinition();

    MCAPI TimerActorFlagBaseDefinition();

    MCAPI void initialize(class EntityContext& entity, class TimerActorFlagBaseGoal& goal) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
