/**
 * @file  GuardianAttackGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GuardianAttackGoal.
 *
 */
class GuardianAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GUARDIANATTACKGOAL
public:
    class GuardianAttackGoal& operator=(class GuardianAttackGoal const &) = delete;
    GuardianAttackGoal(class GuardianAttackGoal const &) = delete;
    GuardianAttackGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GuardianAttackGoal();
    /**
     * @hash   337867588
     * @vftbl  1
     * @symbol  ?canUse\@GuardianAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1679723806
     * @vftbl  2
     * @symbol  ?canContinueToUse\@GuardianAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   190066029
     * @vftbl  4
     * @symbol  ?start\@GuardianAttackGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1445560685
     * @vftbl  5
     * @symbol  ?stop\@GuardianAttackGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -731179720
     * @vftbl  6
     * @symbol  ?tick\@GuardianAttackGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   893604684
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@GuardianAttackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -881161183
     * @symbol  ??0GuardianAttackGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI GuardianAttackGoal(class Mob &);

};