#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChargeHeldItemGoal {

public:
    // prevent constructor by default
    ChargeHeldItemGoal& operator=(ChargeHeldItemGoal const&) = delete;
    ChargeHeldItemGoal(ChargeHeldItemGoal const&)            = delete;
    ChargeHeldItemGoal()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@ChargeHeldItemGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@ChargeHeldItemGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@ChargeHeldItemGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@ChargeHeldItemGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@ChargeHeldItemGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@ChargeHeldItemGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0ChargeHeldItemGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI ChargeHeldItemGoal(class Mob&);
    // NOLINTEND
};
