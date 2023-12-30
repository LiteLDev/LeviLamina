#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SlimeKeepOnJumpingGoal : public ::Goal {
public:
    // prevent constructor by default
    SlimeKeepOnJumpingGoal& operator=(SlimeKeepOnJumpingGoal const&);
    SlimeKeepOnJumpingGoal(SlimeKeepOnJumpingGoal const&);
    SlimeKeepOnJumpingGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SlimeKeepOnJumpingGoal@@UEAA@XZ
    virtual ~SlimeKeepOnJumpingGoal() = default;

    // vIndex: 1, symbol: ?canUse@SlimeKeepOnJumpingGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 6, symbol: ?tick@SlimeKeepOnJumpingGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@SlimeKeepOnJumpingGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0SlimeKeepOnJumpingGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit SlimeKeepOnJumpingGoal(class Mob& mob);

    // NOLINTEND
};
