#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SwimWithEntityGoal {

public:
    // prevent constructor by default
    SwimWithEntityGoal& operator=(SwimWithEntityGoal const&) = delete;
    SwimWithEntityGoal(SwimWithEntityGoal const&)            = delete;
    SwimWithEntityGoal()                                     = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@SwimWithEntityGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@SwimWithEntityGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?canBeInterrupted\@SwimWithEntityGoal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@SwimWithEntityGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@SwimWithEntityGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@SwimWithEntityGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@SwimWithEntityGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT

    // private:
    /**
     * @symbol ?_setWantedMob\@SwimWithEntityGoal\@\@AEAA_NXZ
     */
    MCAPI bool _setWantedMob(); // NOLINT

private:
};
