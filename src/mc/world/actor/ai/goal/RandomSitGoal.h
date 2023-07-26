#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RandomSitGoal {

public:
    // prevent constructor by default
    RandomSitGoal& operator=(RandomSitGoal const&) = delete;
    RandomSitGoal(RandomSitGoal const&)            = delete;
    RandomSitGoal()                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@RandomSitGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RandomSitGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@RandomSitGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@RandomSitGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RandomSitGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0RandomSitGoal\@\@QEAA\@AEAVMob\@\@MMMM\@Z
     */
    MCAPI RandomSitGoal(class Mob&, float, float, float, float); // NOLINT
};
