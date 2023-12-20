#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/MeleeAttackBaseGoal.h"

class MeleeBoxAttackGoal : public ::MeleeAttackBaseGoal {
public:
    // prevent constructor by default
    MeleeBoxAttackGoal& operator=(MeleeBoxAttackGoal const&);
    MeleeBoxAttackGoal(MeleeBoxAttackGoal const&);
    MeleeBoxAttackGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MeleeBoxAttackGoal@@UEAA@XZ
    virtual ~MeleeBoxAttackGoal() = default;

    // vIndex: 6, symbol: ?tick@MeleeBoxAttackGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@MeleeBoxAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0MeleeBoxAttackGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit MeleeBoxAttackGoal(class Mob&);

    // NOLINTEND
};
