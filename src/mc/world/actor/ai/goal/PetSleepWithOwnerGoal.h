#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PetSleepWithOwnerGoal {

public:
    // prevent constructor by default
    PetSleepWithOwnerGoal& operator=(PetSleepWithOwnerGoal const&) = delete;
    PetSleepWithOwnerGoal(PetSleepWithOwnerGoal const&)            = delete;
    PetSleepWithOwnerGoal()                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@PetSleepWithOwnerGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@PetSleepWithOwnerGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@PetSleepWithOwnerGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@PetSleepWithOwnerGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@PetSleepWithOwnerGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@PetSleepWithOwnerGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0PetSleepWithOwnerGoal\@\@QEAA\@AEAVMob\@\@MHHM\@Z
     */
    MCAPI PetSleepWithOwnerGoal(class Mob&, float, int, int, float); // NOLINT
    /**
     * @symbol
     * ?setState\@PetSleepWithOwnerGoal\@\@QEAAXV?$unique_ptr\@VPetSleepWithOwnerState\@\@U?$default_delete\@VPetSleepWithOwnerState\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setState(std::unique_ptr<class PetSleepWithOwnerState>); // NOLINT
};
