#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SquidDiveGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SQUIDDIVEGOAL
public:
    SquidDiveGoal& operator=(SquidDiveGoal const&) = delete;
    SquidDiveGoal(SquidDiveGoal const&)            = delete;
    SquidDiveGoal()                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@SquidDiveGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@SquidDiveGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@SquidDiveGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@SquidDiveGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SQUIDDIVEGOAL
    /**
     * @symbol ?stop\@SquidDiveGoal\@\@UEAAXXZ
     */
    MCVAPI void stop();
    /**
     * @symbol ?tick\@SquidDiveGoal\@\@UEAAXXZ
     */
    MCVAPI void tick();
#endif
};
