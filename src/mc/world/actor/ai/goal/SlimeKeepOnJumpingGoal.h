#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SlimeKeepOnJumpingGoal : public ::Goal {
public:
    // prevent constructor by default
    SlimeKeepOnJumpingGoal& operator=(SlimeKeepOnJumpingGoal const&) = delete;
    SlimeKeepOnJumpingGoal(SlimeKeepOnJumpingGoal const&)            = delete;
    SlimeKeepOnJumpingGoal()                                         = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@SlimeKeepOnJumpingGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 6, symbol: ?tick@SlimeKeepOnJumpingGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@SlimeKeepOnJumpingGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0SlimeKeepOnJumpingGoal@@QEAA@AEAVMob@@@Z
    MCAPI SlimeKeepOnJumpingGoal(class Mob&);

    // NOLINTEND
};
