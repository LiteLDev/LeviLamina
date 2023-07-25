#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SlimeKeepOnJumpingGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMEKEEPONJUMPINGGOAL
public:
    SlimeKeepOnJumpingGoal& operator=(SlimeKeepOnJumpingGoal const&) = delete;
    SlimeKeepOnJumpingGoal(SlimeKeepOnJumpingGoal const&)            = delete;
    SlimeKeepOnJumpingGoal()                                         = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@SlimeKeepOnJumpingGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?tick\@SlimeKeepOnJumpingGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@SlimeKeepOnJumpingGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0SlimeKeepOnJumpingGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI SlimeKeepOnJumpingGoal(class Mob&);
};
