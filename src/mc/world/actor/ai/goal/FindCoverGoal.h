#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FindCoverGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FINDCOVERGOAL
public:
    FindCoverGoal& operator=(FindCoverGoal const&) = delete;
    FindCoverGoal(FindCoverGoal const&)            = delete;
    FindCoverGoal()                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@FindCoverGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@FindCoverGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@FindCoverGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@FindCoverGoal\@\@UEAAXXZ
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
     * ?appendDebugInfo\@FindCoverGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0FindCoverGoal\@\@QEAA\@AEAVMob\@\@MM\@Z
     */
    MCAPI FindCoverGoal(class Mob&, float, float);

    // private:
    /**
     * @symbol ?getHidePos\@FindCoverGoal\@\@AEBA_NAEAVVec3\@\@\@Z
     */
    MCAPI bool getHidePos(class Vec3&) const;

private:
};
