/**
 * @file  MC/DrinkMilkGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DrinkMilkGoal.
 *
 */
class DrinkMilkGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRINKMILKGOAL
public:
    class DrinkMilkGoal& operator=(class DrinkMilkGoal const &) = delete;
    DrinkMilkGoal(class DrinkMilkGoal const &) = delete;
    DrinkMilkGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DrinkMilkGoal();
    /**
     * @hash   2142367418
     * @vftbl  1
     * @symbol ?canUse@DrinkMilkGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1285635448
     * @vftbl  2
     * @symbol ?canContinueToUse@DrinkMilkGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1226253459
     * @vftbl  4
     * @symbol ?start@DrinkMilkGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   830682499
     * @vftbl  5
     * @symbol ?stop@DrinkMilkGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   346206814
     * @vftbl  6
     * @symbol ?tick@DrinkMilkGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -2124579754
     * @vftbl  7
     * @symbol ?appendDebugInfo@DrinkMilkGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -170305081
     * @symbol ??0DrinkMilkGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI DrinkMilkGoal(class Mob &);

};