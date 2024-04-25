#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SnackGoal : public ::Goal {
public:
    // prevent constructor by default
    SnackGoal& operator=(SnackGoal const&);
    SnackGoal(SnackGoal const&);
    SnackGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SnackGoal@@UEAA@XZ
    virtual ~SnackGoal() = default;

    // vIndex: 1, symbol: ?canUse@SnackGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@SnackGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@SnackGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@SnackGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@SnackGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@SnackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 10, symbol: ?getRandomEatingEnd@SnackGoal@@MEBAHXZ
    virtual int getRandomEatingEnd() const;

    // symbol: ??0SnackGoal@@QEAA@AEAVMob@@AEBV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@MMM@Z
    MCAPI SnackGoal(
        class Mob&                               mob,
        std::vector<class ItemDescriptor> const& itemList,
        float                                    cooldown,
        float                                    min,
        float                                    stopChance
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_hasSnackableItems@SnackGoal@@AEAA_NXZ
    MCAPI bool _hasSnackableItems();

    // symbol: ?_isSnackableItem@SnackGoal@@AEBA_NAEBVItemStack@@@Z
    MCAPI bool _isSnackableItem(class ItemStack const& item) const;

    // symbol: ?_updateHand@SnackGoal@@AEAAXAEBVItemStack@@@Z
    MCAPI void _updateHand(class ItemStack const& item);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?CHEW_CHANCE@SnackGoal@@0HB
    MCAPI static int const CHEW_CHANCE;

    // symbol: ?EATING_TIME@SnackGoal@@0HB
    MCAPI static int const EATING_TIME;

    // symbol: ?PATH_RANGE@SnackGoal@@0MB
    MCAPI static float const PATH_RANGE;

    // symbol: ?RANDOM_EATING_END@SnackGoal@@0HB
    MCAPI static int const RANDOM_EATING_END;

    // symbol: ?RANDOM_EATING_START@SnackGoal@@0HB
    MCAPI static int const RANDOM_EATING_START;

    // symbol: ?SEARCH_SIZE@SnackGoal@@0MB
    MCAPI static float const SEARCH_SIZE;

    // symbol: ?STOP_DIST_SQRD@SnackGoal@@0MB
    MCAPI static float const STOP_DIST_SQRD;

    // NOLINTEND
};
