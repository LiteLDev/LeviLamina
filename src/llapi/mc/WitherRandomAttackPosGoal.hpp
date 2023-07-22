/**
 * @file  WitherRandomAttackPosGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "RandomStrollGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WitherRandomAttackPosGoal.
 *
 */
class WitherRandomAttackPosGoal : public RandomStrollGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WITHERRANDOMATTACKPOSGOAL
public:
    class WitherRandomAttackPosGoal& operator=(class WitherRandomAttackPosGoal const &) = delete;
    WitherRandomAttackPosGoal(class WitherRandomAttackPosGoal const &) = delete;
    WitherRandomAttackPosGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~WitherRandomAttackPosGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@WitherRandomAttackPosGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@WitherRandomAttackPosGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  4
     * @symbol  ?start\@WitherRandomAttackPosGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@WitherRandomAttackPosGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  8
     * @symbol  __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol  __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @symbol  ??0WitherRandomAttackPosGoal\@\@QEAA\@AEAVMob\@\@MHH\@Z
     */
    MCAPI WitherRandomAttackPosGoal(class Mob &, float, int, int);

};