#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DragonHoldingPatternGoal {

public:
    // prevent constructor by default
    DragonHoldingPatternGoal& operator=(DragonHoldingPatternGoal const&) = delete;
    DragonHoldingPatternGoal(DragonHoldingPatternGoal const&)            = delete;
    DragonHoldingPatternGoal()                                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@DragonHoldingPatternGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@DragonHoldingPatternGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@DragonHoldingPatternGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@DragonHoldingPatternGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@DragonHoldingPatternGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@DragonHoldingPatternGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0DragonHoldingPatternGoal\@\@QEAA\@AEAVEnderDragon\@\@\@Z
     */
    MCAPI DragonHoldingPatternGoal(class EnderDragon&); // NOLINT

    // private:
    /**
     * @symbol ?findNewTarget\@DragonHoldingPatternGoal\@\@AEAAXXZ
     */
    MCAPI void findNewTarget(); // NOLINT

private:
};
