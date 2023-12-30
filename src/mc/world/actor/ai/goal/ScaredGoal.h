#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class ScaredGoal : public ::Goal {
public:
    // prevent constructor by default
    ScaredGoal& operator=(ScaredGoal const&);
    ScaredGoal(ScaredGoal const&);
    ScaredGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScaredGoal@@UEAA@XZ
    virtual ~ScaredGoal() = default;

    // vIndex: 1, symbol: ?canUse@ScaredGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@ScaredGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@ScaredGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@ScaredGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@ScaredGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@ScaredGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0ScaredGoal@@QEAA@AEAVMob@@H@Z
    MCAPI ScaredGoal(class Mob& mob, int interval);

    // NOLINTEND
};
