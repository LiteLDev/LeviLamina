#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ReceiveLoveGoal {

public:
    // prevent constructor by default
    ReceiveLoveGoal& operator=(ReceiveLoveGoal const&) = delete;
    ReceiveLoveGoal(ReceiveLoveGoal const&)            = delete;
    ReceiveLoveGoal()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@ReceiveLoveGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@ReceiveLoveGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RECEIVELOVEGOAL
    /**
     * @symbol ?canContinueToUse\@ReceiveLoveGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canContinueToUse(); // NOLINT
    /**
     * @symbol ?canUse\@ReceiveLoveGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canUse(); // NOLINT
#endif
    /**
     * @symbol ??0ReceiveLoveGoal\@\@QEAA\@AEAVVillagerBase\@\@\@Z
     */
    MCAPI ReceiveLoveGoal(class VillagerBase&); // NOLINT
};
