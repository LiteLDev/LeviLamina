#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChargeAttackGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHARGEATTACKGOAL
public:
    ChargeAttackGoal& operator=(ChargeAttackGoal const&) = delete;
    ChargeAttackGoal(ChargeAttackGoal const&)            = delete;
    ChargeAttackGoal()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@ChargeAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@ChargeAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@ChargeAttackGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@ChargeAttackGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@ChargeAttackGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@ChargeAttackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0ChargeAttackGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI ChargeAttackGoal(class Mob&);
};
