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
    // vIndex: 0, symbol: ??1MeleeAttackBaseDefinition@@UEAA@XZ
    virtual ~MeleeAttackBaseDefinition();

    // symbol: ??0MeleeAttackBaseDefinition@@QEAA@XZ
    MCAPI MeleeAttackBaseDefinition();

    // symbol: ?initialize@MeleeAttackBaseDefinition@@QEBAXAEAVEntityContext@@AEAVMeleeAttackBaseGoal@@@Z
    MCAPI void initialize(class EntityContext&, class MeleeAttackBaseGoal&) const;

    // NOLINTEND
};
