#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OcelotAttackGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCELOTATTACKGOAL
public:
    OcelotAttackGoal& operator=(OcelotAttackGoal const&) = delete;
    OcelotAttackGoal(OcelotAttackGoal const&)            = delete;
    OcelotAttackGoal()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@OcelotAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@OcelotAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol ?stop\@OcelotAttackGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@OcelotAttackGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@OcelotAttackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0OcelotAttackGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI OcelotAttackGoal(class Mob&);
};
