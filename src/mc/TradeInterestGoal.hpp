/**
 * @file  TradeInterestGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~TradeInterestGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@TradeInterestGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@TradeInterestGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@TradeInterestGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@TradeInterestGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@TradeInterestGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@TradeInterestGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0TradeInterestGoal\@\@QEAA\@AEAVMob\@\@MMMMM\@Z
     */
    MCAPI TradeInterestGoal(class Mob &, float, float, float, float, float);

//private:
    /**
     * @symbol  ?_isLookingAtMe\@TradeInterestGoal\@\@AEBA_NAEBVPlayer\@\@\@Z
     */
    MCAPI bool _isLookingAtMe(class Player const &) const;

private:

};