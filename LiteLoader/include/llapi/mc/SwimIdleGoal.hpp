/**
 * @file  SwimIdleGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SwimIdleGoal.
 *
 */
class SwimIdleGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMIDLEGOAL
public:
    class SwimIdleGoal& operator=(class SwimIdleGoal const &) = delete;
    SwimIdleGoal(class SwimIdleGoal const &) = delete;
    SwimIdleGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SwimIdleGoal();
    /**
     * @hash   -217890511
     * @vftbl  1
     * @symbol  ?canUse\@SwimIdleGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -156136097
     * @vftbl  2
     * @symbol  ?canContinueToUse\@SwimIdleGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1182837530
     * @vftbl  4
     * @symbol  ?start\@SwimIdleGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   -809649067
     * @vftbl  6
     * @symbol  ?tick\@SwimIdleGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   608771311
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@SwimIdleGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -1717867058
     * @symbol  ??0SwimIdleGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI SwimIdleGoal(class Mob &);

};