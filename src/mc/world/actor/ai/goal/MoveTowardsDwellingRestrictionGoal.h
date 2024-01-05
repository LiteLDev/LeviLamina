#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveTowardsRestrictionGoal.h"

class MoveTowardsDwellingRestrictionGoal : public ::MoveTowardsRestrictionGoal {
public:
    // prevent constructor by default
    MoveTowardsDwellingRestrictionGoal& operator=(MoveTowardsDwellingRestrictionGoal const&);
    MoveTowardsDwellingRestrictionGoal(MoveTowardsDwellingRestrictionGoal const&);
    MoveTowardsDwellingRestrictionGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MoveTowardsDwellingRestrictionGoal@@UEAA@XZ
    virtual ~MoveTowardsDwellingRestrictionGoal() = default;

    // vIndex: 1, symbol: ?canUse@MoveTowardsDwellingRestrictionGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@MoveTowardsDwellingRestrictionGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0MoveTowardsDwellingRestrictionGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit MoveTowardsDwellingRestrictionGoal(class Mob& mob);

    // NOLINTEND
};
