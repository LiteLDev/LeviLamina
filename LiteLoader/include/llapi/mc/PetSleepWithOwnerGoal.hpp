/**
 * @file  PetSleepWithOwnerGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PetSleepWithOwnerGoal.
 *
 */
class PetSleepWithOwnerGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PETSLEEPWITHOWNERGOAL
public:
    class PetSleepWithOwnerGoal& operator=(class PetSleepWithOwnerGoal const &) = delete;
    PetSleepWithOwnerGoal(class PetSleepWithOwnerGoal const &) = delete;
    PetSleepWithOwnerGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PetSleepWithOwnerGoal();
    /**
     * @hash   -1745555768
     * @vftbl  1
     * @symbol  ?canUse\@PetSleepWithOwnerGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -654873114
     * @vftbl  2
     * @symbol  ?canContinueToUse\@PetSleepWithOwnerGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1940805281
     * @vftbl  4
     * @symbol  ?start\@PetSleepWithOwnerGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -74276191
     * @vftbl  5
     * @symbol  ?stop\@PetSleepWithOwnerGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -159940740
     * @vftbl  6
     * @symbol  ?tick\@PetSleepWithOwnerGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   58104776
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@PetSleepWithOwnerGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1154367509
     * @symbol  ??0PetSleepWithOwnerGoal\@\@QEAA\@AEAVMob\@\@MHHM\@Z
     */
    MCAPI PetSleepWithOwnerGoal(class Mob &, float, int, int, float);
    /**
     * @hash   -379156622
     * @symbol  ?getBedTargetPos\@PetSleepWithOwnerGoal\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getBedTargetPos() const;
    /**
     * @hash   -1979580994
     * @symbol  ?getData\@PetSleepWithOwnerGoal\@\@QEBA?AUPetSleepWithOwnerGoalData\@\@XZ
     */
    MCAPI struct PetSleepWithOwnerGoalData getData() const;
    /**
     * @hash   -1476815304
     * @symbol  ?getMob\@PetSleepWithOwnerGoal\@\@QEBAAEAVMob\@\@XZ
     */
    MCAPI class Mob & getMob() const;
    /**
     * @hash   -1731432434
     * @symbol  ?setState\@PetSleepWithOwnerGoal\@\@QEAAXV?$unique_ptr\@VPetSleepWithOwnerState\@\@U?$default_delete\@VPetSleepWithOwnerState\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setState(std::unique_ptr<class PetSleepWithOwnerState>);

};