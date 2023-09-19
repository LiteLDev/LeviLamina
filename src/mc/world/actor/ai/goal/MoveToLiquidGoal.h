#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/MaterialType.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class MoveToLiquidGoal : public ::BaseMoveToBlockGoal {
public:
    // prevent constructor by default
    MoveToLiquidGoal& operator=(MoveToLiquidGoal const&);
    MoveToLiquidGoal(MoveToLiquidGoal const&);
    MoveToLiquidGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@MoveToLiquidGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@MoveToLiquidGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@MoveToLiquidGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // vIndex: 11, symbol: ?isValidTarget@MoveToLiquidGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&);

    // vIndex: 17, symbol: ?findTargetBlock@MoveToLiquidGoal@@UEAA_NXZ
    virtual bool findTargetBlock();

    // symbol: ??0MoveToLiquidGoal@@QEAA@AEAVMob@@MHHHW4MaterialType@@M@Z
    MCAPI MoveToLiquidGoal(class Mob&, float, int, int, int, ::MaterialType, float);

    // NOLINTEND
};
