/**
 * @file  NapGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NapGoal.
 *
 */
class NapGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAPGOAL
public:
    class NapGoal& operator=(class NapGoal const &) = delete;
    NapGoal(class NapGoal const &) = delete;
    NapGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NapGoal();
    /**
     * @hash   -1649540704
     * @vftbl  1
     * @symbol  ?canUse\@NapGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -984855346
     * @vftbl  2
     * @symbol  ?canContinueToUse\@NapGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -668278647
     * @vftbl  4
     * @symbol  ?start\@NapGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   904158601
     * @vftbl  5
     * @symbol  ?stop\@NapGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   219322112
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@NapGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1431854636
     * @symbol  ??0NapGoal\@\@QEAA\@AEAVMob\@\@MMMMAEBVActorFilterGroup\@\@1\@Z
     */
    MCAPI NapGoal(class Mob &, float, float, float, float, class ActorFilterGroup const &, class ActorFilterGroup const &);

//private:
    /**
     * @hash   292236652
     * @symbol  ?_canSleep\@NapGoal\@\@AEBA_NAEBUTick\@\@\@Z
     */
    MCAPI bool _canSleep(struct Tick const &) const;
    /**
     * @hash   1429380665
     * @symbol  ?_detectsMobs\@NapGoal\@\@AEBA_NXZ
     */
    MCAPI bool _detectsMobs() const;
    /**
     * @hash   1850750954
     * @symbol  ?_setCooldown\@NapGoal\@\@AEAAXXZ
     */
    MCAPI void _setCooldown();

private:
    /**
     * @hash   -1903308515
     * @symbol  ?MOB_DETECT_TIME\@NapGoal\@\@0MB
     */
    MCAPI static float const MOB_DETECT_TIME;

};