#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RandomSitGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMSITGOAL
public:
    RandomSitGoal& operator=(RandomSitGoal const&) = delete;
    RandomSitGoal(RandomSitGoal const&)            = delete;
    RandomSitGoal()                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@RandomSitGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RandomSitGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@RandomSitGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@RandomSitGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RandomSitGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0RandomSitGoal\@\@QEAA\@AEAVMob\@\@MMMM\@Z
     */
    MCAPI RandomSitGoal(class Mob&, float, float, float, float);
};
