#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MeleeAttackGoal.h"

class DelayedAttackGoal : public ::MeleeAttackGoal {

public:
    // prevent constructor by default
    DelayedAttackGoal& operator=(DelayedAttackGoal const&) = delete;
    DelayedAttackGoal(DelayedAttackGoal const&)            = delete;
    DelayedAttackGoal()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@DelayedAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@DelayedAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@DelayedAttackGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@DelayedAttackGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@DelayedAttackGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@DelayedAttackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8(); // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9(); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?_attemptMoveToTarget\@DelayedAttackGoal\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void _attemptMoveToTarget(class Actor&); // NOLINT
    /**
     * @symbol ??0DelayedAttackGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI DelayedAttackGoal(class Mob&); // NOLINT
    /**
     * @symbol ?isTargetInLineOfSightLegacy\@DelayedAttackGoal\@\@SA_NAEBVMob\@\@AEBVActor\@\@\@Z
     */
    MCAPI static bool isTargetInLineOfSightLegacy(class Mob const&, class Actor const&); // NOLINT
    /**
     * @symbol ?mMinLineOfSightFixVersion\@DelayedAttackGoal\@\@2VBaseGameVersion\@\@B
     */
    MCAPI static class BaseGameVersion const mMinLineOfSightFixVersion; // NOLINT

    // private:
    /**
     * @symbol ?_attemptStartAttacking\@DelayedAttackGoal\@\@AEBAXPEAVActor\@\@\@Z
     */
    MCAPI void _attemptStartAttacking(class Actor*) const; // NOLINT
    /**
     * @symbol ?_manageAttackTime\@DelayedAttackGoal\@\@AEAAXXZ
     */
    MCAPI void _manageAttackTime(); // NOLINT

private:
};
