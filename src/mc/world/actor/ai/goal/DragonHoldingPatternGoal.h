#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class DragonHoldingPatternGoal : public ::Goal {
public:
    // prevent constructor by default
    DragonHoldingPatternGoal& operator=(DragonHoldingPatternGoal const&);
    DragonHoldingPatternGoal(DragonHoldingPatternGoal const&);
    DragonHoldingPatternGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DragonHoldingPatternGoal@@UEAA@XZ
    virtual ~DragonHoldingPatternGoal() = default;

    // vIndex: 1, symbol: ?canUse@DragonHoldingPatternGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@DragonHoldingPatternGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@DragonHoldingPatternGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@DragonHoldingPatternGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@DragonHoldingPatternGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@DragonHoldingPatternGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0DragonHoldingPatternGoal@@QEAA@AEAVEnderDragon@@@Z
    MCAPI explicit DragonHoldingPatternGoal(class EnderDragon& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?findNewTarget@DragonHoldingPatternGoal@@AEAAXXZ
    MCAPI void findNewTarget();

    // NOLINTEND
};
