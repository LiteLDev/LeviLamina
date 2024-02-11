#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RandomHoverGoal : public ::Goal {
public:
    // prevent constructor by default
    RandomHoverGoal& operator=(RandomHoverGoal const&);
    RandomHoverGoal(RandomHoverGoal const&);
    RandomHoverGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RandomHoverGoal@@UEAA@XZ
    virtual ~RandomHoverGoal() = default;

    // vIndex: 1, symbol: ?canUse@RandomHoverGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@RandomHoverGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@RandomHoverGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 6, symbol: ?tick@RandomHoverGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@RandomHoverGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0RandomHoverGoal@@QEAA@AEAVMob@@MHMMMUIntRange@@@Z
    MCAPI RandomHoverGoal(
        class Mob&      mob,
        float           speedMultiplier,
        int             interval,
        float           xzDist,
        float           yDist,
        float           yOffset,
        struct IntRange hoverHeight
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_computeNewTarget@RandomHoverGoal@@IEAA_NXZ
    MCAPI bool _computeNewTarget();

    // symbol: ?_findNewTarget@RandomHoverGoal@@IEBA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class Path> _findNewTarget() const;

    // symbol: ?_moveToTarget@RandomHoverGoal@@IEAAXXZ
    MCAPI void _moveToTarget();

    // NOLINTEND
};
