#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class HarvestFarmBlockGoal : public ::BaseMoveToBlockGoal {
public:
    // prevent constructor by default
    HarvestFarmBlockGoal& operator=(HarvestFarmBlockGoal const&);
    HarvestFarmBlockGoal(HarvestFarmBlockGoal const&);
    HarvestFarmBlockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HarvestFarmBlockGoal@@UEAA@XZ
    virtual ~HarvestFarmBlockGoal() = default;

    // vIndex: 1, symbol: ?canUse@HarvestFarmBlockGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@HarvestFarmBlockGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@HarvestFarmBlockGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@HarvestFarmBlockGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@HarvestFarmBlockGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@HarvestFarmBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11, symbol: ?isValidTarget@HarvestFarmBlockGoal@@MEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isValidTarget(class BlockSource& region, class BlockPos const& pos);

    // symbol: ??0HarvestFarmBlockGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit HarvestFarmBlockGoal(class Mob& mob);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?trySowCrop@HarvestFarmBlockGoal@@IEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool trySowCrop(class BlockSource& region, class BlockPos const& farmlandPos);

    // NOLINTEND
};
