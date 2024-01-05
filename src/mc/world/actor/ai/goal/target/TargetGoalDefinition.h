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
    // vIndex: 0, symbol: ??1TargetGoalDefinition@@UEAA@XZ
    virtual ~TargetGoalDefinition();

    // symbol: ?initialize@TargetGoalDefinition@@QEBAXAEAVEntityContext@@AEAVTargetGoal@@@Z
    MCAPI void initialize(class EntityContext& entity, class TargetGoal& goal) const;

    // NOLINTEND
};
