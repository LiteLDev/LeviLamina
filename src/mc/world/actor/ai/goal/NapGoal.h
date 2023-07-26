#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NapGoal {

public:
    // prevent constructor by default
    NapGoal& operator=(NapGoal const&) = delete;
    NapGoal(NapGoal const&)            = delete;
    NapGoal()                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@NapGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@NapGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@NapGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@NapGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@NapGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0NapGoal\@\@QEAA\@AEAVMob\@\@MMMMAEBVActorFilterGroup\@\@1\@Z
     */
    MCAPI
    NapGoal(class Mob&, float, float, float, float, class ActorFilterGroup const&, class ActorFilterGroup const&); // NOLINT

    // private:
    /**
     * @symbol ?_canSleep\@NapGoal\@\@AEBA_NAEBUTick\@\@\@Z
     */
    MCAPI bool _canSleep(struct Tick const&) const; // NOLINT
    /**
     * @symbol ?_detectsMobs\@NapGoal\@\@AEBA_NXZ
     */
    MCAPI bool _detectsMobs() const; // NOLINT
    /**
     * @symbol ?_setCooldown\@NapGoal\@\@AEAAXXZ
     */
    MCAPI void _setCooldown(); // NOLINT

private:
    /**
     * @symbol ?MOB_DETECT_TIME\@NapGoal\@\@0MB
     */
    MCAPI static float const MOB_DETECT_TIME; // NOLINT
};
