#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TargetWhenPushedGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TARGETWHENPUSHEDGOAL
public:
    TargetWhenPushedGoal& operator=(TargetWhenPushedGoal const&) = delete;
    TargetWhenPushedGoal(TargetWhenPushedGoal const&)            = delete;
    TargetWhenPushedGoal()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@TargetWhenPushedGoal\@\@UEAA_NXZ
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
     * @symbol ?start\@TargetWhenPushedGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@TargetWhenPushedGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol
     * ?appendDebugInfo\@TargetWhenPushedGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TARGETWHENPUSHEDGOAL
    /**
     * @symbol ?canBeInterrupted\@TargetWhenPushedGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canBeInterrupted();
    /**
     * @symbol ?canContinueToUse\@TargetWhenPushedGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canContinueToUse();
#endif
};
