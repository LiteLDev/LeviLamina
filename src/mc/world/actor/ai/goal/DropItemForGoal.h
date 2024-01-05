#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class DropItemForGoal : public ::BaseMoveToBlockGoal {
public:
    // prevent constructor by default
    DropItemForGoal& operator=(DropItemForGoal const&);
    DropItemForGoal(DropItemForGoal const&);
    DropItemForGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DropItemForGoal@@UEAA@XZ
    virtual ~DropItemForGoal() = default;

    // vIndex: 1, symbol: ?canUse@DropItemForGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@DropItemForGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@DropItemForGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@DropItemForGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@DropItemForGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@DropItemForGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11, symbol: ?isValidTarget@DropItemForGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isValidTarget(class BlockSource& region, class BlockPos const& pos);

    // vIndex: 17, symbol: ?findTargetBlock@DropItemForGoal@@UEAA_NXZ
    virtual bool findTargetBlock();

    // symbol: ??0DropItemForGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit DropItemForGoal(class Mob& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getLootTable@DropItemForGoal@@AEAAPEAVLootTable@@XZ
    MCAPI class LootTable* _getLootTable();

    // NOLINTEND
};
