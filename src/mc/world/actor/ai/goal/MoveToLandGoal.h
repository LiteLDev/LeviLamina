#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class MoveToLandGoal : public ::BaseMoveToBlockGoal {
public:
    // prevent constructor by default
    MoveToLandGoal& operator=(MoveToLandGoal const&);
    MoveToLandGoal(MoveToLandGoal const&);
    MoveToLandGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~MoveToLandGoal() = default;

    // vIndex: 1, symbol: ?canUse@MoveToLandGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@MoveToLandGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@MoveToLandGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // vIndex: 11, symbol: ?isValidTarget@MoveToLandGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&);

    // vIndex: 14, symbol: ?_moveToBlock@MoveToLandGoal@@MEAAXXZ
    virtual void _moveToBlock();

    // symbol: ??0MoveToLandGoal@@QEAA@AEAVMob@@MHHHM@Z
    MCAPI MoveToLandGoal(class Mob&, float, int, int, int, float);

    // NOLINTEND
};
