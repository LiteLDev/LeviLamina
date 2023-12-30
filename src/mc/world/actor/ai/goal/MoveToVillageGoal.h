#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToGoal.h"

class MoveToVillageGoal : public ::BaseMoveToGoal {
public:
    // prevent constructor by default
    MoveToVillageGoal& operator=(MoveToVillageGoal const&);
    MoveToVillageGoal(MoveToVillageGoal const&);
    MoveToVillageGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MoveToVillageGoal@@UEAA@XZ
    virtual ~MoveToVillageGoal() = default;

    // vIndex: 1, symbol: ?canUse@MoveToVillageGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@MoveToVillageGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@MoveToVillageGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 6, symbol: ?tick@MoveToVillageGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@MoveToVillageGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11, symbol: ?isValidTarget@MoveToVillageGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isValidTarget(class BlockSource& region, class BlockPos const& pos);

    // vIndex: 14, symbol: ?_moveToBlock@MoveToVillageGoal@@UEAAXXZ
    virtual void _moveToBlock();

    // vIndex: 17, symbol: ?_selectRandomPosInVillage@MoveToVillageGoal@@MEAA?AVBlockPos@@XZ
    virtual class BlockPos _selectRandomPosInVillage();

    // symbol: ??0MoveToVillageGoal@@QEAA@AEAVMob@@MMMH@Z
    MCAPI MoveToVillageGoal(class Mob& mob, float speedModifier, float goalRadius, float cooldown, int searchRange);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_tryGetCurrentVillage@MoveToVillageGoal@@IEAA?AV?$shared_ptr@VVillage@@@std@@XZ
    MCAPI std::shared_ptr<class Village> _tryGetCurrentVillage();

    // NOLINTEND
};
