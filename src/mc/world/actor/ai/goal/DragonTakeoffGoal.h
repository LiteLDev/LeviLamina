#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class DragonTakeoffGoal : public ::Goal {
public:
    // prevent constructor by default
    DragonTakeoffGoal& operator=(DragonTakeoffGoal const&);
    DragonTakeoffGoal(DragonTakeoffGoal const&);
    DragonTakeoffGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DragonTakeoffGoal@@UEAA@XZ
    virtual ~DragonTakeoffGoal() = default;

    // vIndex: 1, symbol: ?canUse@DragonTakeoffGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@DragonTakeoffGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@DragonTakeoffGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@DragonTakeoffGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@DragonTakeoffGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@DragonTakeoffGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0DragonTakeoffGoal@@QEAA@AEAVEnderDragon@@@Z
    MCAPI explicit DragonTakeoffGoal(class EnderDragon& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_findNewTarget@DragonTakeoffGoal@@AEAAXXZ
    MCAPI void _findNewTarget();

    // NOLINTEND
};
