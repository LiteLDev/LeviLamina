/**
 * @file  InvestigateSuspiciousLocationGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class InvestigateSuspiciousLocationGoal.
 *
 */
class InvestigateSuspiciousLocationGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVESTIGATESUSPICIOUSLOCATIONGOAL
public:
    class InvestigateSuspiciousLocationGoal& operator=(class InvestigateSuspiciousLocationGoal const &) = delete;
    InvestigateSuspiciousLocationGoal(class InvestigateSuspiciousLocationGoal const &) = delete;
    InvestigateSuspiciousLocationGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~InvestigateSuspiciousLocationGoal();
    /**
     * @hash   -105390420
     * @vftbl  1
     * @symbol  ?canUse\@InvestigateSuspiciousLocationGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1580780054
     * @vftbl  2
     * @symbol  ?canContinueToUse\@InvestigateSuspiciousLocationGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   996384037
     * @vftbl  4
     * @symbol  ?start\@InvestigateSuspiciousLocationGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   2046519717
     * @vftbl  5
     * @symbol  ?stop\@InvestigateSuspiciousLocationGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   1832284944
     * @vftbl  6
     * @symbol  ?tick\@InvestigateSuspiciousLocationGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   142213380
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@InvestigateSuspiciousLocationGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1886481289
     * @symbol  ??0InvestigateSuspiciousLocationGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI InvestigateSuspiciousLocationGoal(class Mob &);

};