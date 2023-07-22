/**
 * @file  DelayedAttackGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MeleeAttackGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DelayedAttackGoal.
 *
 */
class DelayedAttackGoal : public MeleeAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DELAYEDATTACKGOAL
public:
    class DelayedAttackGoal& operator=(class DelayedAttackGoal const &) = delete;
    DelayedAttackGoal(class DelayedAttackGoal const &) = delete;
    DelayedAttackGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DelayedAttackGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@DelayedAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@DelayedAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@DelayedAttackGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@DelayedAttackGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@DelayedAttackGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@DelayedAttackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
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
     * @vftbl  10
     * @symbol  ?_attemptMoveToTarget\@DelayedAttackGoal\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void _attemptMoveToTarget(class Actor &);
    /**
     * @symbol  ??0DelayedAttackGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI DelayedAttackGoal(class Mob &);
    /**
     * @symbol  ?isTargetInLineOfSightLegacy\@DelayedAttackGoal\@\@SA_NAEBVMob\@\@AEBVActor\@\@\@Z
     */
    MCAPI static bool isTargetInLineOfSightLegacy(class Mob const &, class Actor const &);
    /**
     * @symbol  ?mMinLineOfSightFixVersion\@DelayedAttackGoal\@\@2VBaseGameVersion\@\@B
     */
    MCAPI static class BaseGameVersion const mMinLineOfSightFixVersion;

//private:
    /**
     * @symbol  ?_attemptAttack\@DelayedAttackGoal\@\@AEAAXPEAVActor\@\@\@Z
     */
    MCAPI void _attemptAttack(class Actor *);
    /**
     * @symbol  ?_manageAttackTime\@DelayedAttackGoal\@\@AEAAXXZ
     */
    MCAPI void _manageAttackTime();

private:

};