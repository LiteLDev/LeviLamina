/**
 * @file  EatCarriedItemGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EatCarriedItemGoal.
 *
 */
class EatCarriedItemGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EATCARRIEDITEMGOAL
public:
    class EatCarriedItemGoal& operator=(class EatCarriedItemGoal const &) = delete;
    EatCarriedItemGoal(class EatCarriedItemGoal const &) = delete;
    EatCarriedItemGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~EatCarriedItemGoal();
    /**
     * @hash   -369177096
     * @vftbl  1
     * @symbol ?canUse@EatCarriedItemGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1908291062
     * @vftbl  2
     * @symbol ?canContinueToUse@EatCarriedItemGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   774447249
     * @vftbl  4
     * @symbol ?start@EatCarriedItemGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   2029803521
     * @vftbl  5
     * @symbol ?stop@EatCarriedItemGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -146967636
     * @vftbl  6
     * @symbol ?tick@EatCarriedItemGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1861915720
     * @vftbl  7
     * @symbol ?appendDebugInfo@EatCarriedItemGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -896522610
     * @symbol ??0EatCarriedItemGoal@@QEAA@AEAVMob@@H@Z
     */
    MCAPI EatCarriedItemGoal(class Mob &, int);

//private:

private:
    /**
     * @hash   -1972620856
     * @symbol ?CHEW_CHANCE@EatCarriedItemGoal@@0HB
     */
    MCAPI static int const CHEW_CHANCE;
    /**
     * @hash   -1834122166
     * @symbol ?EATING_TIME@EatCarriedItemGoal@@0HB
     */
    MCAPI static int const EATING_TIME;

};