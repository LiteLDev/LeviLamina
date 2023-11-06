#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveToVillageGoal.h"

class StrollTowardsVillageGoal : public ::MoveToVillageGoal {
public:
    // prevent constructor by default
    StrollTowardsVillageGoal& operator=(StrollTowardsVillageGoal const&);
    StrollTowardsVillageGoal(StrollTowardsVillageGoal const&);
    StrollTowardsVillageGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~StrollTowardsVillageGoal() = default;

    // vIndex: 1, symbol: ?canUse@StrollTowardsVillageGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@StrollTowardsVillageGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // vIndex: 17, symbol: ?_selectRandomPosInVillage@StrollTowardsVillageGoal@@MEAA?AVBlockPos@@XZ
    virtual class BlockPos _selectRandomPosInVillage();

    // symbol: ??0StrollTowardsVillageGoal@@QEAA@AEAVMob@@MMMHM@Z
    MCAPI StrollTowardsVillageGoal(class Mob&, float, float, float, int, float);

    // NOLINTEND
};
