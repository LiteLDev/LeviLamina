#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RiseToLiquidLevelGoal : public ::Goal {
public:
    // prevent constructor by default
    RiseToLiquidLevelGoal& operator=(RiseToLiquidLevelGoal const&);
    RiseToLiquidLevelGoal(RiseToLiquidLevelGoal const&);
    RiseToLiquidLevelGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RiseToLiquidLevelGoal@@UEAA@XZ
    virtual ~RiseToLiquidLevelGoal() = default;

    // vIndex: 1, symbol: ?canUse@RiseToLiquidLevelGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 6, symbol: ?tick@RiseToLiquidLevelGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@RiseToLiquidLevelGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0RiseToLiquidLevelGoal@@QEAA@AEAVMob@@MMM@Z
    MCAPI RiseToLiquidLevelGoal(class Mob& mob, float, float, float);

    // NOLINTEND
};
