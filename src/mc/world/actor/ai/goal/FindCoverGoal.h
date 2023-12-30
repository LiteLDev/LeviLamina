#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class FindCoverGoal : public ::Goal {
public:
    // prevent constructor by default
    FindCoverGoal& operator=(FindCoverGoal const&);
    FindCoverGoal(FindCoverGoal const&);
    FindCoverGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FindCoverGoal@@UEAA@XZ
    virtual ~FindCoverGoal() = default;

    // vIndex: 1, symbol: ?canUse@FindCoverGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@FindCoverGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@FindCoverGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@FindCoverGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@FindCoverGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0FindCoverGoal@@QEAA@AEAVMob@@MM@Z
    MCAPI FindCoverGoal(class Mob& mob, float speed, float cooldown);

    // NOLINTEND
};
