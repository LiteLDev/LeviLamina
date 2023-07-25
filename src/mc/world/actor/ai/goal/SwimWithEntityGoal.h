#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SwimWithEntityGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMWITHENTITYGOAL
public:
    SwimWithEntityGoal& operator=(SwimWithEntityGoal const&) = delete;
    SwimWithEntityGoal(SwimWithEntityGoal const&)            = delete;
    SwimWithEntityGoal()                                     = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@SwimWithEntityGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@SwimWithEntityGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol ?canBeInterrupted\@SwimWithEntityGoal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @vftbl 4
     * @symbol ?start\@SwimWithEntityGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@SwimWithEntityGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@SwimWithEntityGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@SwimWithEntityGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;

    // private:
    /**
     * @symbol ?_setWantedMob\@SwimWithEntityGoal\@\@AEAA_NXZ
     */
    MCAPI bool _setWantedMob();

private:
};
