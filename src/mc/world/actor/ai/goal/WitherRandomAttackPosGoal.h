#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

class WitherRandomAttackPosGoal : public ::RandomStrollGoal {

public:
    // prevent constructor by default
    WitherRandomAttackPosGoal& operator=(WitherRandomAttackPosGoal const&) = delete;
    WitherRandomAttackPosGoal(WitherRandomAttackPosGoal const&)            = delete;
    WitherRandomAttackPosGoal()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@WitherRandomAttackPosGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@WitherRandomAttackPosGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@WitherRandomAttackPosGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@WitherRandomAttackPosGoal\@\@UEAAXXZ
     */
    virtual void stop();
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
    // NOLINTEND
};
