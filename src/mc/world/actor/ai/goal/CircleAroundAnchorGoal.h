#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class CircleAroundAnchorGoal : public ::Goal {
public:
    // prevent constructor by default
    CircleAroundAnchorGoal& operator=(CircleAroundAnchorGoal const&);
    CircleAroundAnchorGoal(CircleAroundAnchorGoal const&);
    CircleAroundAnchorGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CircleAroundAnchorGoal@@UEAA@XZ
    virtual ~CircleAroundAnchorGoal() = default;

    // vIndex: 1, symbol: ?canUse@CircleAroundAnchorGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 4, symbol: ?start@CircleAroundAnchorGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@CircleAroundAnchorGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@CircleAroundAnchorGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@CircleAroundAnchorGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0CircleAroundAnchorGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit CircleAroundAnchorGoal(class Mob& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_calculateHeightOffset@CircleAroundAnchorGoal@@AEBAMXZ
    MCAPI float _calculateHeightOffset() const;

    // symbol: ?_selectNext@CircleAroundAnchorGoal@@AEAAXXZ
    MCAPI void _selectNext();

    // symbol: ?_setAnchorAboveTarget@CircleAroundAnchorGoal@@AEAAXXZ
    MCAPI void _setAnchorAboveTarget();

    // NOLINTEND
};
