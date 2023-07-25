#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ReceiveLoveGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECEIVELOVEGOAL
public:
    ReceiveLoveGoal& operator=(ReceiveLoveGoal const&) = delete;
    ReceiveLoveGoal(ReceiveLoveGoal const&)            = delete;
    ReceiveLoveGoal()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
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
     * @symbol ?tick\@ReceiveLoveGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@ReceiveLoveGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RECEIVELOVEGOAL
    /**
     * @symbol ?canContinueToUse\@ReceiveLoveGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canContinueToUse();
    /**
     * @symbol ?canUse\@ReceiveLoveGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canUse();
#endif
    /**
     * @symbol ??0ReceiveLoveGoal\@\@QEAA\@AEAVVillagerBase\@\@\@Z
     */
    MCAPI ReceiveLoveGoal(class VillagerBase&);
};
