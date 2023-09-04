#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

class DragonBaseGoalDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    DragonBaseGoalDefinition& operator=(DragonBaseGoalDefinition const&) = delete;
    DragonBaseGoalDefinition(DragonBaseGoalDefinition const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?validateMobType@DragonBaseGoalDefinition@@UEBA_NAEAVMob@@@Z
    virtual bool validateMobType(class Mob&) const;

    // symbol: ??1DragonBaseGoalDefinition@@UEAA@XZ
    MCVAPI ~DragonBaseGoalDefinition();

    // symbol: ??0DragonBaseGoalDefinition@@QEAA@XZ
    MCAPI DragonBaseGoalDefinition();

    // symbol: ?initialize@DragonBaseGoalDefinition@@QEBAXAEAVEntityContext@@AEAVDragonBaseGoal@@@Z
    MCAPI void initialize(class EntityContext&, class DragonBaseGoal&) const;

    // NOLINTEND
};
