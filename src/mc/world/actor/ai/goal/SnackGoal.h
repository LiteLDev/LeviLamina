#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SnackGoal : public ::Goal {

public:
    // prevent constructor by default
    SnackGoal& operator=(SnackGoal const&) = delete;
    SnackGoal(SnackGoal const&)            = delete;
    SnackGoal()                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@SnackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@SnackGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@SnackGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@SnackGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@SnackGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@SnackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @vftbl 10
     * @symbol ?getRandomEatingEnd\@SnackGoal\@\@MEBAHXZ
     */
    virtual int getRandomEatingEnd() const;
    /**
     * @symbol
     * ??0SnackGoal\@\@QEAA\@AEAVMob\@\@AEBV?$vector\@VItemDescriptor\@\@V?$allocator\@VItemDescriptor\@\@\@std\@\@\@std\@\@MMM\@Z
     */
    MCAPI SnackGoal(class Mob&, std::vector<class ItemDescriptor> const&, float, float, float);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_hasSnackableItems\@SnackGoal\@\@AEAA_NXZ
     */
    MCAPI bool _hasSnackableItems();
    /**
     * @symbol ?_isSnackableItem\@SnackGoal\@\@AEBA_NAEBVItemStack\@\@\@Z
     */
    MCAPI bool _isSnackableItem(class ItemStack const&) const;
    /**
     * @symbol ?_updateHand\@SnackGoal\@\@AEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void _updateHand(class ItemStack const&);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?CHEW_CHANCE\@SnackGoal\@\@0HB
     */
    MCAPI static int const CHEW_CHANCE;
    /**
     * @symbol ?EATING_TIME\@SnackGoal\@\@0HB
     */
    MCAPI static int const EATING_TIME;
    /**
     * @symbol ?PATH_RANGE\@SnackGoal\@\@0MB
     */
    MCAPI static float const PATH_RANGE;
    /**
     * @symbol ?RANDOM_EATING_END\@SnackGoal\@\@0HB
     */
    MCAPI static int const RANDOM_EATING_END;
    /**
     * @symbol ?RANDOM_EATING_START\@SnackGoal\@\@0HB
     */
    MCAPI static int const RANDOM_EATING_START;
    /**
     * @symbol ?SEARCH_SIZE\@SnackGoal\@\@0MB
     */
    MCAPI static float const SEARCH_SIZE;
    /**
     * @symbol ?STOP_DIST_SQRD\@SnackGoal\@\@0MB
     */
    MCAPI static float const STOP_DIST_SQRD;
    // NOLINTEND
};
