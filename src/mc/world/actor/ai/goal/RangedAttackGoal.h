#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RangedAttackGoal {

public:
    // prevent constructor by default
    RangedAttackGoal& operator=(RangedAttackGoal const&) = delete;
    RangedAttackGoal(RangedAttackGoal const&)            = delete;
    RangedAttackGoal()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@RangedAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RangedAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@RangedAttackGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@RangedAttackGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@RangedAttackGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RangedAttackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0RangedAttackGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI RangedAttackGoal(class Mob&); // NOLINT
    /**
     * @symbol ?handleAttackBehavior\@RangedAttackGoal\@\@QEAAXPEAVActor\@\@AEBVVec3\@\@M_N\@Z
     */
    MCAPI void handleAttackBehavior(class Actor*, class Vec3 const&, float, bool); // NOLINT
};
