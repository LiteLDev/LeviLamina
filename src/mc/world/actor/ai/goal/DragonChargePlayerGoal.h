#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DragonChargePlayerGoal {

public:
    // prevent constructor by default
    DragonChargePlayerGoal& operator=(DragonChargePlayerGoal const&) = delete;
    DragonChargePlayerGoal(DragonChargePlayerGoal const&)            = delete;
    DragonChargePlayerGoal()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@DragonChargePlayerGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@DragonChargePlayerGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@DragonChargePlayerGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@DragonChargePlayerGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@DragonChargePlayerGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@DragonChargePlayerGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0DragonChargePlayerGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI DragonChargePlayerGoal(class Mob&); // NOLINT
};
