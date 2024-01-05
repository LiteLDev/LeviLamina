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
    // vIndex: 0, symbol: __gen_??1MoveToLiquidGoal@@UEAA@XZ
    virtual ~MoveToLiquidGoal() = default;

    // vIndex: 1, symbol: ?canUse@MoveToLiquidGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@MoveToLiquidGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@MoveToLiquidGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11, symbol: ?isValidTarget@MoveToLiquidGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isValidTarget(class BlockSource& region, class BlockPos const& pos);

    // vIndex: 17, symbol: ?findTargetBlock@MoveToLiquidGoal@@UEAA_NXZ
    virtual bool findTargetBlock();

    // symbol: ??0MoveToLiquidGoal@@QEAA@AEAVMob@@MHHHW4MaterialType@@M@Z
    MCAPI MoveToLiquidGoal(
        class Mob&     mob,
        float          speedModifier,
        int            searchRange,
        int            searchHeight,
        int            searchCount,
        ::MaterialType materialType,
        float          goalRadius
    );

    // NOLINTEND
};
