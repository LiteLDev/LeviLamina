#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RangedAttackGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANGEDATTACKGOAL
public:
    RangedAttackGoal& operator=(RangedAttackGoal const&) = delete;
    RangedAttackGoal(RangedAttackGoal const&)            = delete;
    RangedAttackGoal()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@RangedAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RangedAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@RangedAttackGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@RangedAttackGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@RangedAttackGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RangedAttackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0RangedAttackGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI RangedAttackGoal(class Mob&);
    /**
     * @symbol ?handleAttackBehavior\@RangedAttackGoal\@\@QEAAXPEAVActor\@\@AEBVVec3\@\@M_N\@Z
     */
    MCAPI void handleAttackBehavior(class Actor*, class Vec3 const&, float, bool);
};
