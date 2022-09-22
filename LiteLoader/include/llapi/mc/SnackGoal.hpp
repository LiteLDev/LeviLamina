/**
 * @file  SnackGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~SnackGoal();
    /**
     * @hash   2056349503
     * @vftbl  1
     * @symbol ?canUse@SnackGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1828130365
     * @vftbl  2
     * @symbol ?canContinueToUse@SnackGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   2039591384
     * @vftbl  4
     * @symbol ?start@SnackGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   89814904
     * @vftbl  5
     * @symbol ?stop@SnackGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1235611101
     * @vftbl  6
     * @symbol ?tick@SnackGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   278951537
     * @vftbl  7
     * @symbol ?appendDebugInfo@SnackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @hash   1383729899
     * @vftbl  10
     * @symbol ?getRandomEatingEnd@SnackGoal@@MEBAHXZ
     */
    virtual int getRandomEatingEnd() const;
    /**
     * @hash   217784680
     * @symbol ??0SnackGoal@@QEAA@AEAVMob@@AEBV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@MMM@Z
     */
    MCAPI SnackGoal(class Mob &, std::vector<class ItemDescriptor> const &, float, float, float);

//private:
    /**
     * @hash   1852043528
     * @symbol ?_hasSnackableItems@SnackGoal@@AEAA_NXZ
     */
    MCAPI bool _hasSnackableItems();
    /**
     * @hash   1206696908
     * @symbol ?_isSnackableItem@SnackGoal@@AEBA_NAEBVItemStack@@@Z
     */
    MCAPI bool _isSnackableItem(class ItemStack const &) const;
    /**
     * @hash   -530095438
     * @symbol ?_updateHand@SnackGoal@@AEAAXAEBVItemStack@@@Z
     */
    MCAPI void _updateHand(class ItemStack const &);

private:
    /**
     * @hash   1336806587
     * @symbol ?CHEW_CHANCE@SnackGoal@@0HB
     */
    MCAPI static int const CHEW_CHANCE;
    /**
     * @hash   -1438247491
     * @symbol ?EATING_TIME@SnackGoal@@0HB
     */
    MCAPI static int const EATING_TIME;
    /**
     * @hash   -1927857531
     * @symbol ?PATH_RANGE@SnackGoal@@0MB
     */
    MCAPI static float const PATH_RANGE;
    /**
     * @hash   -413849639
     * @symbol ?RANDOM_EATING_END@SnackGoal@@0HB
     */
    MCAPI static int const RANDOM_EATING_END;
    /**
     * @hash   -1873937860
     * @symbol ?RANDOM_EATING_START@SnackGoal@@0HB
     */
    MCAPI static int const RANDOM_EATING_START;
    /**
     * @hash   1067607022
     * @symbol ?SEARCH_SIZE@SnackGoal@@0MB
     */
    MCAPI static float const SEARCH_SIZE;
    /**
     * @hash   -1884138874
     * @symbol ?STOP_DIST_SQRD@SnackGoal@@0MB
     */
    MCAPI static float const STOP_DIST_SQRD;

};