#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class ShareItemsGoal : public ::Goal {
public:
    // prevent constructor by default
    ShareItemsGoal& operator=(ShareItemsGoal const&);
    ShareItemsGoal(ShareItemsGoal const&);
    ShareItemsGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ShareItemsGoal@@UEAA@XZ
    virtual ~ShareItemsGoal() = default;

    // vIndex: 1, symbol: ?canUse@ShareItemsGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@ShareItemsGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@ShareItemsGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@ShareItemsGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@ShareItemsGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@ShareItemsGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol:
    // ??0ShareItemsGoal@@QEAA@AEAVMob@@AEBV?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@std@@MHM@Z
    MCAPI ShareItemsGoal(
        class Mob&                               mob,
        std::vector<struct MobDescriptor> const& mobFilters,
        float                                    speedModifier,
        int                                      searchRange,
        float                                    goalRadius
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?selectEntityToShareWith@ShareItemsGoal@@IEAA?AU?$pair@HVItemStack@@@std@@AEBV?$vector@U?$pair@HVItemStack@@@std@@V?$allocator@U?$pair@HVItemStack@@@std@@@2@@3@@Z
    MCAPI std::pair<int, class ItemStack>
          selectEntityToShareWith(std::vector<std::pair<int, class ItemStack>> const& shareableItems);

    // NOLINTEND
};
