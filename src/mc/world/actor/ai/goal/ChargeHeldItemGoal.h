#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChargeHeldItemGoal {

public:
    // prevent constructor by default
    ChargeHeldItemGoal& operator=(ChargeHeldItemGoal const&) = delete;
    ChargeHeldItemGoal(ChargeHeldItemGoal const&)            = delete;
    ChargeHeldItemGoal()                                     = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@ChargeHeldItemGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@ChargeHeldItemGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@ChargeHeldItemGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@ChargeHeldItemGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@ChargeHeldItemGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@ChargeHeldItemGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0ChargeHeldItemGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI ChargeHeldItemGoal(class Mob&); // NOLINT
};
