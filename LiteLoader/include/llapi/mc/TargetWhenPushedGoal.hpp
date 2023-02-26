/**
 * @file  TargetWhenPushedGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TargetWhenPushedGoal.
 *
 */
class TargetWhenPushedGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TARGETWHENPUSHEDGOAL
public:
    class TargetWhenPushedGoal& operator=(class TargetWhenPushedGoal const &) = delete;
    TargetWhenPushedGoal(class TargetWhenPushedGoal const &) = delete;
    TargetWhenPushedGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~TargetWhenPushedGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@TargetWhenPushedGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@TargetWhenPushedGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@TargetWhenPushedGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?appendDebugInfo\@TargetWhenPushedGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TARGETWHENPUSHEDGOAL
    /**
     * @symbol  ?canBeInterrupted\@TargetWhenPushedGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canBeInterrupted();
    /**
     * @symbol  ?canContinueToUse\@TargetWhenPushedGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canContinueToUse();
#endif
    /**
     * @symbol  ??0TargetWhenPushedGoal\@\@QEAA\@AEAVMob\@\@V?$vector\@UMobDescriptor\@\@V?$allocator\@UMobDescriptor\@\@\@std\@\@\@std\@\@M\@Z
     */
    MCAPI TargetWhenPushedGoal(class Mob &, std::vector<struct MobDescriptor>, float);

};