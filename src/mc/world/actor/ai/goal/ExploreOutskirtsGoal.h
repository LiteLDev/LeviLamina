#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class ExploreOutskirtsGoal : public ::Goal {
public:
    // prevent constructor by default
    ExploreOutskirtsGoal& operator=(ExploreOutskirtsGoal const&);
    ExploreOutskirtsGoal(ExploreOutskirtsGoal const&);
    ExploreOutskirtsGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ExploreOutskirtsGoal@@UEAA@XZ
    virtual ~ExploreOutskirtsGoal() = default;

    // vIndex: 1, symbol: ?canUse@ExploreOutskirtsGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@ExploreOutskirtsGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@ExploreOutskirtsGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@ExploreOutskirtsGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@ExploreOutskirtsGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@ExploreOutskirtsGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0ExploreOutskirtsGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit ExploreOutskirtsGoal(class Mob& mob);

    // NOLINTEND
};
