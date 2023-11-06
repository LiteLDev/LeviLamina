#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class InspectBookshelfGoal : public ::BaseMoveToBlockGoal {
public:
    // prevent constructor by default
    InspectBookshelfGoal& operator=(InspectBookshelfGoal const&);
    InspectBookshelfGoal(InspectBookshelfGoal const&);
    InspectBookshelfGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~InspectBookshelfGoal();

    // vIndex: 2, symbol: ?canContinueToUse@InspectBookshelfGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 6, symbol: ?tick@InspectBookshelfGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@InspectBookshelfGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // vIndex: 11, symbol: ?isValidTarget@InspectBookshelfGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&);

    // vIndex: 13, symbol: ?_canReach@InspectBookshelfGoal@@MEAA_NAEBVBlockPos@@@Z
    virtual bool _canReach(class BlockPos const&);

    // vIndex: 17, symbol: ?findTargetBlock@InspectBookshelfGoal@@UEAA_NXZ
    virtual bool findTargetBlock();

    // symbol: ??0InspectBookshelfGoal@@QEAA@AEAVMob@@MHHHM@Z
    MCAPI InspectBookshelfGoal(class Mob&, float, int, int, int, float);

    // NOLINTEND
};
