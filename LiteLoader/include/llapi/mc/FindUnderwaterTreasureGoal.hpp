/**
 * @file  MC/FindUnderwaterTreasureGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FindUnderwaterTreasureGoal.
 *
 */
class FindUnderwaterTreasureGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FINDUNDERWATERTREASUREGOAL
public:
    class FindUnderwaterTreasureGoal& operator=(class FindUnderwaterTreasureGoal const &) = delete;
    FindUnderwaterTreasureGoal(class FindUnderwaterTreasureGoal const &) = delete;
    FindUnderwaterTreasureGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FindUnderwaterTreasureGoal();
    /**
     * @hash   -1283205738
     * @vftbl  1
     * @symbol ?canUse@FindUnderwaterTreasureGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -82626140
     * @vftbl  2
     * @symbol ?canContinueToUse@FindUnderwaterTreasureGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @hash   -775327250
     * @vftbl  3
     * @symbol ?canBeInterrupted@FindUnderwaterTreasureGoal@@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @hash   -783449057
     * @vftbl  4
     * @symbol ?start@FindUnderwaterTreasureGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1810906993
     * @vftbl  5
     * @symbol ?stop@FindUnderwaterTreasureGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -555223974
     * @vftbl  6
     * @symbol ?tick@FindUnderwaterTreasureGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -301540694
     * @vftbl  7
     * @symbol ?appendDebugInfo@FindUnderwaterTreasureGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -1094447122
     * @symbol ??0FindUnderwaterTreasureGoal@@QEAA@AEAVMob@@MHH@Z
     */
    MCAPI FindUnderwaterTreasureGoal(class Mob &, float, int, int);

};