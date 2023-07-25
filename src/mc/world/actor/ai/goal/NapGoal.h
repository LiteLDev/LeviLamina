#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NapGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAPGOAL
public:
    NapGoal& operator=(NapGoal const&) = delete;
    NapGoal(NapGoal const&)            = delete;
    NapGoal()                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@NapGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@NapGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@NapGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@NapGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@NapGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0NapGoal\@\@QEAA\@AEAVMob\@\@MMMMAEBVActorFilterGroup\@\@1\@Z
     */
    MCAPI NapGoal(class Mob&, float, float, float, float, class ActorFilterGroup const&, class ActorFilterGroup const&);

    // private:
    /**
     * @symbol ?_canSleep\@NapGoal\@\@AEBA_NAEBUTick\@\@\@Z
     */
    MCAPI bool _canSleep(struct Tick const&) const;
    /**
     * @symbol ?_detectsMobs\@NapGoal\@\@AEBA_NXZ
     */
    MCAPI bool _detectsMobs() const;
    /**
     * @symbol ?_setCooldown\@NapGoal\@\@AEAAXXZ
     */
    MCAPI void _setCooldown();

private:
    /**
     * @symbol ?MOB_DETECT_TIME\@NapGoal\@\@0MB
     */
    MCAPI static float const MOB_DETECT_TIME;
};
