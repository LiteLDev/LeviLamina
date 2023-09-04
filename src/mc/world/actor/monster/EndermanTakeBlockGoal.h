#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class EndermanTakeBlockGoal : public ::Goal {
public:
    // prevent constructor by default
    EndermanTakeBlockGoal& operator=(EndermanTakeBlockGoal const&) = delete;
    EndermanTakeBlockGoal(EndermanTakeBlockGoal const&)            = delete;
    EndermanTakeBlockGoal()                                        = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@EndermanTakeBlockGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 6, symbol: ?tick@EndermanTakeBlockGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@EndermanTakeBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // vIndex: 10, symbol: ?getRandomNearbyBlockPos@EndermanTakeBlockGoal@@MEBA?AVBlockPos@@AEBVVec3@@@Z
    virtual class BlockPos getRandomNearbyBlockPos(class Vec3 const&) const;

    // symbol: ??0EndermanTakeBlockGoal@@QEAA@AEAVEnderMan@@@Z
    MCAPI EndermanTakeBlockGoal(class EnderMan&);

    // NOLINTEND
};
