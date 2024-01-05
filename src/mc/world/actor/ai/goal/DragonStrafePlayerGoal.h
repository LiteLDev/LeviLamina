#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/DragonBaseGoal.h"

class DragonStrafePlayerGoal : public ::DragonBaseGoal {
public:
    // prevent constructor by default
    DragonStrafePlayerGoal& operator=(DragonStrafePlayerGoal const&);
    DragonStrafePlayerGoal(DragonStrafePlayerGoal const&);
    DragonStrafePlayerGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DragonStrafePlayerGoal@@UEAA@XZ
    virtual ~DragonStrafePlayerGoal() = default;

    // vIndex: 1, symbol: ?canUse@DragonStrafePlayerGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@DragonStrafePlayerGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@DragonStrafePlayerGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@DragonStrafePlayerGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@DragonStrafePlayerGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@DragonStrafePlayerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0DragonStrafePlayerGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit DragonStrafePlayerGoal(class Mob& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?findNewTarget@DragonStrafePlayerGoal@@AEAAXXZ
    MCAPI void findNewTarget();

    // symbol: ?navigateToNextPathNode@DragonStrafePlayerGoal@@AEAAXXZ
    MCAPI void navigateToNextPathNode();

    // symbol: ?setTarget@DragonStrafePlayerGoal@@AEAAXPEAVActor@@@Z
    MCAPI void setTarget(class Actor* target);

    // NOLINTEND
};
