#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class EndermanLeaveBlockGoal : public ::Goal {
public:
    // prevent constructor by default
    EndermanLeaveBlockGoal& operator=(EndermanLeaveBlockGoal const&);
    EndermanLeaveBlockGoal(EndermanLeaveBlockGoal const&);
    EndermanLeaveBlockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EndermanLeaveBlockGoal@@UEAA@XZ
    virtual ~EndermanLeaveBlockGoal() = default;

    // vIndex: 1, symbol: ?canUse@EndermanLeaveBlockGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 6, symbol: ?tick@EndermanLeaveBlockGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@EndermanLeaveBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0EndermanLeaveBlockGoal@@QEAA@AEAVEnderMan@@@Z
    MCAPI explicit EndermanLeaveBlockGoal(class EnderMan& enderman);

    // NOLINTEND
};
