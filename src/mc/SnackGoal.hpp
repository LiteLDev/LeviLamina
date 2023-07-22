/**
 * @file  SnackGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SnackGoal.
 *
 */
class SnackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNACKGOAL
public:
    class SnackGoal& operator=(class SnackGoal const &) = delete;
    SnackGoal(class SnackGoal const &) = delete;
    SnackGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SnackGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@SnackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@SnackGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@SnackGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@SnackGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@SnackGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@SnackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @symbol  __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol  __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @symbol  ?getRandomEatingEnd\@SnackGoal\@\@MEBAHXZ
     */
    virtual int getRandomEatingEnd() const;
    /**
     * @symbol  ??0SnackGoal\@\@QEAA\@AEAVMob\@\@AEBV?$vector\@VItemDescriptor\@\@V?$allocator\@VItemDescriptor\@\@\@std\@\@\@std\@\@MMM\@Z
     */
    MCAPI SnackGoal(class Mob &, std::vector<class ItemDescriptor> const &, float, float, float);

//private:
    /**
     * @symbol  ?_hasSnackableItems\@SnackGoal\@\@AEAA_NXZ
     */
    MCAPI bool _hasSnackableItems();
    /**
     * @symbol  ?_isSnackableItem\@SnackGoal\@\@AEBA_NAEBVItemStack\@\@\@Z
     */
    MCAPI bool _isSnackableItem(class ItemStack const &) const;
    /**
     * @symbol  ?_updateHand\@SnackGoal\@\@AEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void _updateHand(class ItemStack const &);

private:
    /**
     * @symbol  ?CHEW_CHANCE\@SnackGoal\@\@0HB
     */
    MCAPI static int const CHEW_CHANCE;
    /**
     * @symbol  ?EATING_TIME\@SnackGoal\@\@0HB
     */
    MCAPI static int const EATING_TIME;
    /**
     * @symbol  ?PATH_RANGE\@SnackGoal\@\@0MB
     */
    MCAPI static float const PATH_RANGE;
    /**
     * @symbol  ?RANDOM_EATING_END\@SnackGoal\@\@0HB
     */
    MCAPI static int const RANDOM_EATING_END;
    /**
     * @symbol  ?RANDOM_EATING_START\@SnackGoal\@\@0HB
     */
    MCAPI static int const RANDOM_EATING_START;
    /**
     * @symbol  ?SEARCH_SIZE\@SnackGoal\@\@0MB
     */
    MCAPI static float const SEARCH_SIZE;
    /**
     * @symbol  ?STOP_DIST_SQRD\@SnackGoal\@\@0MB
     */
    MCAPI static float const STOP_DIST_SQRD;

};