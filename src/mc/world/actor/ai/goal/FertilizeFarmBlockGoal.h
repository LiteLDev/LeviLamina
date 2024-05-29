#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class FertilizeFarmBlockGoal : public ::BaseMoveToBlockGoal {
public:
    // prevent constructor by default
    FertilizeFarmBlockGoal& operator=(FertilizeFarmBlockGoal const&);
    FertilizeFarmBlockGoal(FertilizeFarmBlockGoal const&);
    FertilizeFarmBlockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FertilizeFarmBlockGoal@@UEAA@XZ
    virtual ~FertilizeFarmBlockGoal() = default;

    // vIndex: 1, symbol: ?canUse@FertilizeFarmBlockGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@FertilizeFarmBlockGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@FertilizeFarmBlockGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@FertilizeFarmBlockGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@FertilizeFarmBlockGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@FertilizeFarmBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11, symbol: ?isValidTarget@FertilizeFarmBlockGoal@@MEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isValidTarget(class BlockSource& region, class BlockPos const& pos);

    // symbol: ??0FertilizeFarmBlockGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit FertilizeFarmBlockGoal(class Mob& mob);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?tryFertilizeCrop@FertilizeFarmBlockGoal@@IEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool tryFertilizeCrop(class BlockSource& region, class BlockPos const& farmlandPos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_findFertilizer@FertilizeFarmBlockGoal@@AEAA_NXZ
    MCAPI bool _findFertilizer();

    // NOLINTEND
};
