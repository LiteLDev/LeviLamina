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
     * @vftbl  1
     * @symbol  ?canUse\@InvestigateSuspiciousLocationGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
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
     * @vftbl  4
     * @symbol  ?start\@InvestigateSuspiciousLocationGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@InvestigateSuspiciousLocationGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@InvestigateSuspiciousLocationGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@InvestigateSuspiciousLocationGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0InvestigateSuspiciousLocationGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI InvestigateSuspiciousLocationGoal(class Mob &);

};