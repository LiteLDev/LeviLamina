#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class RaidGardenGoal : public ::BaseMoveToBlockGoal {
public:
    // prevent constructor by default
    RaidGardenGoal& operator=(RaidGardenGoal const&);
    RaidGardenGoal(RaidGardenGoal const&);
    RaidGardenGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RaidGardenGoal@@UEAA@XZ
    virtual ~RaidGardenGoal() = default;

    // vIndex: 1, symbol: ?canUse@RaidGardenGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@RaidGardenGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@RaidGardenGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 6, symbol: ?tick@RaidGardenGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@RaidGardenGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11, symbol: ?isValidTarget@RaidGardenGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isValidTarget(class BlockSource& region, class BlockPos const& pos);

    // symbol:
    // ??0RaidGardenGoal@@QEAA@AEAVMob@@MHHHMHHHHAEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@@Z
    MCAPI
    RaidGardenGoal(class Mob& mob, float speedModifier, int searchRange, int searchHeight, int searchCount, float goalRadius, int maxToEat, int hasEatenFillDelay, int eatDelay, int initialEatDelay, std::vector<class BlockDescriptor> const&);

    // NOLINTEND
};
