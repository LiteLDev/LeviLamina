#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class MountPathingGoal : public ::Goal {
public:
    // prevent constructor by default
    MountPathingGoal& operator=(MountPathingGoal const&);
    MountPathingGoal(MountPathingGoal const&);
    MountPathingGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MountPathingGoal@@UEAA@XZ
    virtual ~MountPathingGoal() = default;

    // vIndex: 1, symbol: ?canUse@MountPathingGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@MountPathingGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@MountPathingGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@MountPathingGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@MountPathingGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@MountPathingGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 10, symbol: ?_getAttackReachSqr@MountPathingGoal@@MEAAMXZ
    virtual float _getAttackReachSqr();

    // symbol: ??0MountPathingGoal@@QEAA@AEAVMob@@MM_N@Z
    MCAPI MountPathingGoal(class Mob& mob, float speed, float targetDist, bool trackTarget);

    // NOLINTEND
};
