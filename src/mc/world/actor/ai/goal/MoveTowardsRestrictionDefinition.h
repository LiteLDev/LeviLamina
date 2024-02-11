#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

class MoveTowardsRestrictionDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    MoveTowardsRestrictionDefinition& operator=(MoveTowardsRestrictionDefinition const&);
    MoveTowardsRestrictionDefinition(MoveTowardsRestrictionDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1MoveTowardsRestrictionDefinition@@UEAA@XZ
    virtual ~MoveTowardsRestrictionDefinition();

    // symbol: ??0MoveTowardsRestrictionDefinition@@QEAA@XZ
    MCAPI MoveTowardsRestrictionDefinition();

    // symbol: ?initialize@MoveTowardsRestrictionDefinition@@QEBAXAEAVEntityContext@@AEAVMoveTowardsRestrictionGoal@@@Z
    MCAPI void initialize(class EntityContext& entity, class MoveTowardsRestrictionGoal& goal) const;

    // NOLINTEND
};
