#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RandomLookAroundAndSitGoal {

public:
    // prevent constructor by default
    RandomLookAroundAndSitGoal& operator=(RandomLookAroundAndSitGoal const&) = delete;
    RandomLookAroundAndSitGoal(RandomLookAroundAndSitGoal const&)            = delete;
    RandomLookAroundAndSitGoal()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@RandomLookAroundAndSitGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RandomLookAroundAndSitGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@RandomLookAroundAndSitGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@RandomLookAroundAndSitGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@RandomLookAroundAndSitGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RandomLookAroundAndSitGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0RandomLookAroundAndSitGoal\@\@QEAA\@AEAVMob\@\@_NHHMMHHMH\@Z
     */
    MCAPI RandomLookAroundAndSitGoal(class Mob&, bool, int, int, float, float, int, int, float, int);
    // NOLINTEND
};
