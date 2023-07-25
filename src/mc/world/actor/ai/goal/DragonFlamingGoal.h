#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DragonFlamingGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONFLAMINGGOAL
public:
    DragonFlamingGoal& operator=(DragonFlamingGoal const&) = delete;
    DragonFlamingGoal(DragonFlamingGoal const&)            = delete;
    DragonFlamingGoal()                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@DragonFlamingGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@DragonFlamingGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@DragonFlamingGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@DragonFlamingGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@DragonFlamingGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@DragonFlamingGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0DragonFlamingGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI DragonFlamingGoal(class Mob&);
};
