#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

class RandomFlyingGoal : public ::RandomStrollGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMFLYINGGOAL
public:
    RandomFlyingGoal& operator=(RandomFlyingGoal const&) = delete;
    RandomFlyingGoal(RandomFlyingGoal const&)            = delete;
    RandomFlyingGoal()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@RandomFlyingGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RandomFlyingGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 10
     * @symbol ?_setWantedPosition\@RandomFlyingGoal\@\@MEAA_NXZ
     */
    virtual bool _setWantedPosition();
    /**
     * @symbol ??0RandomFlyingGoal\@\@QEAA\@AEAVMob\@\@MHH_N\@Z
     */
    MCAPI RandomFlyingGoal(class Mob&, float, int, int, bool);

    // private:
    /**
     * @symbol ?_getTreePos\@RandomFlyingGoal\@\@AEBA_NAEAVVec3\@\@\@Z
     */
    MCAPI bool _getTreePos(class Vec3&) const;

private:
};
