#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AvoidMobTypeGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVOIDMOBTYPEGOAL
public:
    AvoidMobTypeGoal& operator=(AvoidMobTypeGoal const&) = delete;
    AvoidMobTypeGoal(AvoidMobTypeGoal const&)            = delete;
    AvoidMobTypeGoal()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@AvoidMobTypeGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@AvoidMobTypeGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@AvoidMobTypeGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@AvoidMobTypeGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@AvoidMobTypeGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@AvoidMobTypeGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0AvoidMobTypeGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI AvoidMobTypeGoal(class Mob&);
    /**
     * @symbol ?canFindAvoidPath\@AvoidMobTypeGoal\@\@QEAA_NPEAVActor\@\@\@Z
     */
    MCAPI bool canFindAvoidPath(class Actor*);
    /**
     * @symbol ?findNearestEntityToAvoid\@AvoidMobTypeGoal\@\@QEAAPEAVActor\@\@M\@Z
     */
    MCAPI class Actor* findNearestEntityToAvoid(float);
};
