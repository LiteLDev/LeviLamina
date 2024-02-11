#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class TradeInterestGoal : public ::Goal {
public:
    // prevent constructor by default
    TradeInterestGoal& operator=(TradeInterestGoal const&);
    TradeInterestGoal(TradeInterestGoal const&);
    TradeInterestGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TradeInterestGoal@@UEAA@XZ
    virtual ~TradeInterestGoal() = default;

    // vIndex: 1, symbol: ?canUse@TradeInterestGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@TradeInterestGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@TradeInterestGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@TradeInterestGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@TradeInterestGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@TradeInterestGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0TradeInterestGoal@@QEAA@AEAVMob@@MMMMM@Z
    MCAPI TradeInterestGoal(
        class Mob& mob,
        float      interestDistance,
        float      interestTime,
        float      removeTime,
        float      carriedTime,
        float      cooldown
    );

    // NOLINTEND
};
