#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class StalkAndPounceOnTargetGoal : public ::Goal {
public:
    // prevent constructor by default
    StalkAndPounceOnTargetGoal& operator=(StalkAndPounceOnTargetGoal const&);
    StalkAndPounceOnTargetGoal(StalkAndPounceOnTargetGoal const&);
    StalkAndPounceOnTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~StalkAndPounceOnTargetGoal();

    // vIndex: 1, symbol: ?canUse@StalkAndPounceOnTargetGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@StalkAndPounceOnTargetGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 3, symbol: ?canBeInterrupted@StalkAndPounceOnTargetGoal@@UEAA_NXZ
    virtual bool canBeInterrupted();

    // vIndex: 4, symbol: ?start@StalkAndPounceOnTargetGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@StalkAndPounceOnTargetGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@StalkAndPounceOnTargetGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@StalkAndPounceOnTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0StalkAndPounceOnTargetGoal@@QEAA@AEAVMob@@AEBVActorFilterGroup@@MMMMMMMM_N@Z
    MCAPI StalkAndPounceOnTargetGoal(
        class Mob&,
        class ActorFilterGroup const&,
        float,
        float,
        float,
        float,
        float,
        float,
        float,
        float,
        bool
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isStuckBlock@StalkAndPounceOnTargetGoal@@AEBA_NVBlockPos@@@Z
    MCAPI bool _isStuckBlock(class BlockPos) const;

    // symbol: ?_preparePounce@StalkAndPounceOnTargetGoal@@AEAAXAEBVVec3@@0@Z
    MCAPI void _preparePounce(class Vec3 const&, class Vec3 const&);

    // NOLINTEND
};
