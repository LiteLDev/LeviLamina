#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BreatheAirGoal {

public:
    // prevent constructor by default
    BreatheAirGoal& operator=(BreatheAirGoal const&) = delete;
    BreatheAirGoal(BreatheAirGoal const&)            = delete;
    BreatheAirGoal()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@BreatheAirGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@BreatheAirGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?canBeInterrupted\@BreatheAirGoal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@BreatheAirGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@BreatheAirGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@BreatheAirGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0BreatheAirGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI BreatheAirGoal(class Mob&); // NOLINT

    // private:
    /**
     * @symbol ?_determineApproximateDepth\@BreatheAirGoal\@\@AEAAHXZ
     */
    MCAPI int _determineApproximateDepth(); // NOLINT
    /**
     * @symbol ?_findAirPosition\@BreatheAirGoal\@\@AEAAXXZ
     */
    MCAPI void _findAirPosition(); // NOLINT

private:
};
