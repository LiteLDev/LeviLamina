#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/MaterialType.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class LayEggGoal : public ::BaseMoveToBlockGoal {
public:
    // prevent constructor by default
    LayEggGoal& operator=(LayEggGoal const&);
    LayEggGoal(LayEggGoal const&);
    LayEggGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LayEggGoal@@UEAA@XZ
    virtual ~LayEggGoal() = default;

    // vIndex: 1, symbol: ?canUse@LayEggGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@LayEggGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@LayEggGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 6, symbol: ?tick@LayEggGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@LayEggGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11, symbol: ?isValidTarget@LayEggGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isValidTarget(class BlockSource& region, class BlockPos const& pos);

    // vIndex: 14, symbol: ?_moveToBlock@LayEggGoal@@MEAAXXZ
    virtual void _moveToBlock();

    // vIndex: 17, symbol: ?findTargetBlock@LayEggGoal@@UEAA_NXZ
    virtual bool findTargetBlock();

    // symbol:
    // ??0LayEggGoal@@QEAA@AEAVMob@@MHHMAEBV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@AEBV?$vector@W4MaterialType@@V?$allocator@W4MaterialType@@@std@@@3@_N3MAEBVItemDescriptor@@AEBVActorDefinitionTrigger@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI
    LayEggGoal(class Mob& mob, float speedModifier, int searchRange, int searchHeight, float goalRadius, std::vector<class ItemDescriptor> const& targetBlocks, std::vector<::MaterialType> const&, bool, bool, float, class ItemDescriptor const&, class ActorDefinitionTrigger const& onLay, std::string const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_isTargetBlock@LayEggGoal@@IEBA_NAEBVBlockLegacy@@@Z
    MCAPI bool _isTargetBlock(class BlockLegacy const& block) const;

    // symbol: ?_layEgg@LayEggGoal@@IEAAXAEBVBlockPos@@@Z
    MCAPI void _layEgg(class BlockPos const& pos);

    // NOLINTEND
};
