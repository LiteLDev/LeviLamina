/**
 * @file  MC/TradeInterestGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TradeInterestGoal.
 *
 */
class TradeInterestGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADEINTERESTGOAL
public:
    class TradeInterestGoal& operator=(class TradeInterestGoal const &) = delete;
    TradeInterestGoal(class TradeInterestGoal const &) = delete;
    TradeInterestGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TradeInterestGoal();
    /**
     * @hash   1324291743
     * @vftbl  1
     * @symbol ?canUse@TradeInterestGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1152516717
     * @vftbl  2
     * @symbol ?canContinueToUse@TradeInterestGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   153812216
     * @vftbl  4
     * @symbol ?start@TradeInterestGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -934559336
     * @vftbl  5
     * @symbol ?stop@TradeInterestGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   180203379
     * @vftbl  6
     * @symbol ?tick@TradeInterestGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   192640801
     * @vftbl  7
     * @symbol ?appendDebugInfo@TradeInterestGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -734673947
     * @symbol ??0TradeInterestGoal@@QEAA@AEAVMob@@MMMMM@Z
     */
    MCAPI TradeInterestGoal(class Mob &, float, float, float, float, float);

};