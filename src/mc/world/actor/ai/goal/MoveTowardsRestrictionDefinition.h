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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~MoveTowardsRestrictionDefinition() = default;

    // symbol: ?initialize@MoveTowardsRestrictionDefinition@@QEBAXAEAVEntityContext@@AEAVMoveTowardsRestrictionGoal@@@Z
    MCAPI void initialize(class EntityContext&, class MoveTowardsRestrictionGoal&) const;

    // NOLINTEND
};
