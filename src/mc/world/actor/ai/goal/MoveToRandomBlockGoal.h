#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class MoveToRandomBlockGoal : public ::Goal {
public:
    // prevent constructor by default
    MoveToRandomBlockGoal& operator=(MoveToRandomBlockGoal const&);
    MoveToRandomBlockGoal(MoveToRandomBlockGoal const&);
    MoveToRandomBlockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MoveToRandomBlockGoal@@UEAA@XZ
    virtual ~MoveToRandomBlockGoal() = default;

    // vIndex: 1, symbol: ?canUse@MoveToRandomBlockGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@MoveToRandomBlockGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@MoveToRandomBlockGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@MoveToRandomBlockGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@MoveToRandomBlockGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@MoveToRandomBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0MoveToRandomBlockGoal@@QEAA@AEAVMob@@MMM@Z
    MCAPI MoveToRandomBlockGoal(class Mob& mob, float speedModifier, float within, float blockDistance);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isValidDestinationBlock@MoveToRandomBlockGoal@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _isValidDestinationBlock(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND
};
