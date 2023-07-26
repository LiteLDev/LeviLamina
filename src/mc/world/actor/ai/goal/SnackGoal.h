#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SnackGoal {

public:
    // prevent constructor by default
    SnackGoal& operator=(SnackGoal const&) = delete;
    SnackGoal(SnackGoal const&)            = delete;
    SnackGoal()                            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@SnackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@SnackGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@SnackGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@SnackGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@SnackGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@SnackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8(); // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9(); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?getRandomEatingEnd\@SnackGoal\@\@MEBAHXZ
     */
    virtual int getRandomEatingEnd() const; // NOLINT
    /**
     * @symbol
     * ??0SnackGoal\@\@QEAA\@AEAVMob\@\@AEBV?$vector\@VItemDescriptor\@\@V?$allocator\@VItemDescriptor\@\@\@std\@\@\@std\@\@MMM\@Z
     */
    MCAPI SnackGoal(class Mob&, std::vector<class ItemDescriptor> const&, float, float, float); // NOLINT

    // private:
    /**
     * @symbol ?_hasSnackableItems\@SnackGoal\@\@AEAA_NXZ
     */
    MCAPI bool _hasSnackableItems(); // NOLINT
    /**
     * @symbol ?_isSnackableItem\@SnackGoal\@\@AEBA_NAEBVItemStack\@\@\@Z
     */
    MCAPI bool _isSnackableItem(class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?_updateHand\@SnackGoal\@\@AEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void _updateHand(class ItemStack const&); // NOLINT

private:
    /**
     * @symbol ?CHEW_CHANCE\@SnackGoal\@\@0HB
     */
    MCAPI static int const CHEW_CHANCE; // NOLINT
    /**
     * @symbol ?EATING_TIME\@SnackGoal\@\@0HB
     */
    MCAPI static int const EATING_TIME; // NOLINT
    /**
     * @symbol ?PATH_RANGE\@SnackGoal\@\@0MB
     */
    MCAPI static float const PATH_RANGE; // NOLINT
    /**
     * @symbol ?RANDOM_EATING_END\@SnackGoal\@\@0HB
     */
    MCAPI static int const RANDOM_EATING_END; // NOLINT
    /**
     * @symbol ?RANDOM_EATING_START\@SnackGoal\@\@0HB
     */
    MCAPI static int const RANDOM_EATING_START; // NOLINT
    /**
     * @symbol ?SEARCH_SIZE\@SnackGoal\@\@0MB
     */
    MCAPI static float const SEARCH_SIZE; // NOLINT
    /**
     * @symbol ?STOP_DIST_SQRD\@SnackGoal\@\@0MB
     */
    MCAPI static float const STOP_DIST_SQRD; // NOLINT
};
