#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RiverFollowingGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RIVERFOLLOWINGGOAL
public:
    RiverFollowingGoal& operator=(RiverFollowingGoal const&) = delete;
    RiverFollowingGoal(RiverFollowingGoal const&)            = delete;
    RiverFollowingGoal()                                     = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@RiverFollowingGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RiverFollowingGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@RiverFollowingGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@RiverFollowingGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@RiverFollowingGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RiverFollowingGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0RiverFollowingGoal\@\@QEAA\@AEAVMob\@\@MM\@Z
     */
    MCAPI RiverFollowingGoal(class Mob&, float, float);

    // protected:
    /**
     * @symbol ?determineSteerDirection\@RiverFollowingGoal\@\@IEAAXXZ
     */
    MCAPI void determineSteerDirection();

protected:
};
