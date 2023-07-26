#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DragonTakeoffGoal {

public:
    // prevent constructor by default
    DragonTakeoffGoal& operator=(DragonTakeoffGoal const&) = delete;
    DragonTakeoffGoal(DragonTakeoffGoal const&)            = delete;
    DragonTakeoffGoal()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@DragonTakeoffGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@DragonTakeoffGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@DragonTakeoffGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@DragonTakeoffGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@DragonTakeoffGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@DragonTakeoffGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0DragonTakeoffGoal\@\@QEAA\@AEAVEnderDragon\@\@\@Z
     */
    MCAPI DragonTakeoffGoal(class EnderDragon&); // NOLINT

    // private:
    /**
     * @symbol ?_findNewTarget\@DragonTakeoffGoal\@\@AEAAXXZ
     */
    MCAPI void _findNewTarget(); // NOLINT

private:
};
