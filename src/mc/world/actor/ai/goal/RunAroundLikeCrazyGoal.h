#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RunAroundLikeCrazyGoal : public ::Goal {
public:
    // prevent constructor by default
    RunAroundLikeCrazyGoal& operator=(RunAroundLikeCrazyGoal const&);
    RunAroundLikeCrazyGoal(RunAroundLikeCrazyGoal const&);
    RunAroundLikeCrazyGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RunAroundLikeCrazyGoal@@UEAA@XZ
    virtual ~RunAroundLikeCrazyGoal() = default;

    // vIndex: 1, symbol: ?canUse@RunAroundLikeCrazyGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@RunAroundLikeCrazyGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@RunAroundLikeCrazyGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@RunAroundLikeCrazyGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& debugInfo) const;

    // symbol: ??0RunAroundLikeCrazyGoal@@QEAA@AEAVMob@@M@Z
    MCAPI RunAroundLikeCrazyGoal(class Mob& mob, float speedModifier);

    // NOLINTEND
};
