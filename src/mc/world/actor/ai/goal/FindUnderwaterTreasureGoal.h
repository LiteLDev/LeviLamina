#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FindUnderwaterTreasureGoal {

public:
    // prevent constructor by default
    FindUnderwaterTreasureGoal& operator=(FindUnderwaterTreasureGoal const&) = delete;
    FindUnderwaterTreasureGoal(FindUnderwaterTreasureGoal const&)            = delete;
    FindUnderwaterTreasureGoal()                                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@FindUnderwaterTreasureGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@FindUnderwaterTreasureGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?canBeInterrupted\@FindUnderwaterTreasureGoal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@FindUnderwaterTreasureGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@FindUnderwaterTreasureGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@FindUnderwaterTreasureGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@FindUnderwaterTreasureGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0FindUnderwaterTreasureGoal\@\@QEAA\@AEAVMob\@\@MHH\@Z
     */
    MCAPI FindUnderwaterTreasureGoal(class Mob&, float, int, int); // NOLINT
};
