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
    // vIndex: 0, symbol: __gen_??1MoveTowardsRestrictionDefinition@@UEAA@XZ
    virtual ~MoveTowardsRestrictionDefinition() = default;

    // symbol: ?initialize@MoveTowardsRestrictionDefinition@@QEBAXAEAVEntityContext@@AEAVMoveTowardsRestrictionGoal@@@Z
    MCAPI void initialize(class EntityContext& entity, class MoveTowardsRestrictionGoal& goal) const;

    // NOLINTEND
};
