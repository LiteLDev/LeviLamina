/**
 * @file  PetSleepWithOwnerGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~PetSleepWithOwnerGoal();
    /**
     * @hash   -1966401256
     * @vftbl  1
     * @symbol ?canUse@PetSleepWithOwnerGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -875641722
     * @vftbl  2
     * @symbol ?canContinueToUse@PetSleepWithOwnerGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1719898289
     * @vftbl  4
     * @symbol ?start@PetSleepWithOwnerGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -295198559
     * @vftbl  5
     * @symbol ?stop@PetSleepWithOwnerGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -380878484
     * @vftbl  6
     * @symbol ?tick@PetSleepWithOwnerGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -162663832
     * @vftbl  7
     * @symbol ?appendDebugInfo@PetSleepWithOwnerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   933629653
     * @symbol ??0PetSleepWithOwnerGoal@@QEAA@AEAVMob@@MHHM@Z
     */
    MCAPI PetSleepWithOwnerGoal(class Mob &, float, int, int, float);
    /**
     * @hash   -600048238
     * @symbol ?getBedTargetPos@PetSleepWithOwnerGoal@@QEBA?AVVec3@@XZ
     */
    MCAPI class Vec3 getBedTargetPos() const;
    /**
     * @hash   2094494686
     * @symbol ?getData@PetSleepWithOwnerGoal@@QEBA?AUPetSleepWithOwnerGoalData@@XZ
     */
    MCAPI struct PetSleepWithOwnerGoalData getData() const;
    /**
     * @hash   -1576620920
     * @symbol ?getMob@PetSleepWithOwnerGoal@@QEBAAEAVMob@@XZ
     */
    MCAPI class Mob & getMob() const;
    /**
     * @hash   -1952324050
     * @symbol ?setState@PetSleepWithOwnerGoal@@QEAAXV?$unique_ptr@VPetSleepWithOwnerState@@U?$default_delete@VPetSleepWithOwnerState@@@std@@@std@@@Z
     */
    MCAPI void setState(std::unique_ptr<class PetSleepWithOwnerState>);

};