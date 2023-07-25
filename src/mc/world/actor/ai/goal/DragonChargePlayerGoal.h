#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DragonChargePlayerGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONCHARGEPLAYERGOAL
public:
    DragonChargePlayerGoal& operator=(DragonChargePlayerGoal const&) = delete;
    DragonChargePlayerGoal(DragonChargePlayerGoal const&)            = delete;
    DragonChargePlayerGoal()                                         = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@DragonChargePlayerGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@DragonChargePlayerGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@DragonChargePlayerGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@DragonChargePlayerGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@DragonChargePlayerGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@DragonChargePlayerGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0DragonChargePlayerGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI DragonChargePlayerGoal(class Mob&);
};
