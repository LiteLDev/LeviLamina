/**
 * @file  SnackGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -2018141329
     * @vftbl  1
     * @symbol  ?canUse\@SnackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   2048591453
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
     * @hash   -2034884072
     * @vftbl  4
     * @symbol  ?start\@SnackGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   310337496
     * @vftbl  5
     * @symbol  ?stop\@SnackGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1015011629
     * @vftbl  6
     * @symbol  ?tick\@SnackGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   499412625
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
     * @hash   1604221739
     * @vftbl  10
     * @symbol  ?getRandomEatingEnd\@SnackGoal\@\@MEBAHXZ
     */
    virtual int getRandomEatingEnd() const;
    /**
     * @hash   438138136
     * @symbol  ??0SnackGoal\@\@QEAA\@AEAVMob\@\@AEBV?$vector\@VItemDescriptor\@\@V?$allocator\@VItemDescriptor\@\@\@std\@\@\@std\@\@MMM\@Z
     */
    MCAPI SnackGoal(class Mob &, std::vector<class ItemDescriptor> const &, float, float, float);

//private:
    /**
     * @hash   2072396984
     * @symbol  ?_hasSnackableItems\@SnackGoal\@\@AEAA_NXZ
     */
    MCAPI bool _hasSnackableItems();
    /**
     * @hash   1427142620
     * @symbol  ?_isSnackableItem\@SnackGoal\@\@AEBA_NAEBVItemStack\@\@\@Z
     */
    MCAPI bool _isSnackableItem(class ItemStack const &) const;
    /**
     * @hash   -309649726
     * @symbol  ?_updateHand\@SnackGoal\@\@AEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void _updateHand(class ItemStack const &);

private:
    /**
     * @hash   -1999901481
     * @symbol  ?CHEW_CHANCE\@SnackGoal\@\@0HB
     */
    MCAPI static int const CHEW_CHANCE;
    /**
     * @hash   -479988263
     * @symbol  ?EATING_TIME\@SnackGoal\@\@0HB
     */
    MCAPI static int const EATING_TIME;
    /**
     * @hash   -969598303
     * @symbol  ?PATH_RANGE\@SnackGoal\@\@0MB
     */
    MCAPI static float const PATH_RANGE;
    /**
     * @hash   544409589
     * @symbol  ?RANDOM_EATING_END\@SnackGoal\@\@0HB
     */
    MCAPI static int const RANDOM_EATING_END;
    /**
     * @hash   -915678632
     * @symbol  ?RANDOM_EATING_START\@SnackGoal\@\@0HB
     */
    MCAPI static int const RANDOM_EATING_START;
    /**
     * @hash   2025866250
     * @symbol  ?SEARCH_SIZE\@SnackGoal\@\@0MB
     */
    MCAPI static float const SEARCH_SIZE;
    /**
     * @hash   -925879646
     * @symbol  ?STOP_DIST_SQRD\@SnackGoal\@\@0MB
     */
    MCAPI static float const STOP_DIST_SQRD;

};