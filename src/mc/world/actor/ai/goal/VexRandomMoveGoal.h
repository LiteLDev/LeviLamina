#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class VexRandomMoveGoal : public ::Goal {
public:
    // prevent constructor by default
    VexRandomMoveGoal& operator=(VexRandomMoveGoal const&);
    VexRandomMoveGoal(VexRandomMoveGoal const&);
    VexRandomMoveGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1VexRandomMoveGoal@@UEAA@XZ
    virtual ~VexRandomMoveGoal() = default;

    // vIndex: 1, symbol: ?canUse@VexRandomMoveGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@VexRandomMoveGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 6, symbol: ?tick@VexRandomMoveGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@VexRandomMoveGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0VexRandomMoveGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit VexRandomMoveGoal(class Mob& mob);

    // NOLINTEND
};
