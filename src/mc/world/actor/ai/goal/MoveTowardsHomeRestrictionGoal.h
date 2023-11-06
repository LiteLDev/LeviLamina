#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveTowardsRestrictionGoal.h"

class MoveTowardsHomeRestrictionGoal : public ::MoveTowardsRestrictionGoal {
public:
    // prevent constructor by default
    MoveTowardsHomeRestrictionGoal& operator=(MoveTowardsHomeRestrictionGoal const&);
    MoveTowardsHomeRestrictionGoal(MoveTowardsHomeRestrictionGoal const&);
    MoveTowardsHomeRestrictionGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~MoveTowardsHomeRestrictionGoal();

    // vIndex: 1, symbol: ?canUse@MoveTowardsHomeRestrictionGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@MoveTowardsHomeRestrictionGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0MoveTowardsHomeRestrictionGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit MoveTowardsHomeRestrictionGoal(class Mob&);

    // NOLINTEND
};
