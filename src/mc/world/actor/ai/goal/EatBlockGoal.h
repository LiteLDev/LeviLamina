#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EatBlockGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EATBLOCKGOAL
public:
    EatBlockGoal& operator=(EatBlockGoal const&) = delete;
    EatBlockGoal(EatBlockGoal const&)            = delete;
    EatBlockGoal()                               = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@EatBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@EatBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@EatBlockGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@EatBlockGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@EatBlockGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@EatBlockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0EatBlockGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI EatBlockGoal(class Mob&);
    /**
     * @symbol ?getEatSuccessChance\@EatBlockGoal\@\@QEBAMAEAVActor\@\@\@Z
     */
    MCAPI float getEatSuccessChance(class Actor&) const;
};
