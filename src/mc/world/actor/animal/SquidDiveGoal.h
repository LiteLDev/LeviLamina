#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SquidDiveGoal {

public:
    // prevent constructor by default
    SquidDiveGoal& operator=(SquidDiveGoal const&) = delete;
    SquidDiveGoal(SquidDiveGoal const&)            = delete;
    SquidDiveGoal()                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@SquidDiveGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@SquidDiveGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@SquidDiveGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@SquidDiveGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SQUIDDIVEGOAL
    /**
     * @symbol ?stop\@SquidDiveGoal\@\@UEAAXXZ
     */
    MCVAPI void stop(); // NOLINT
    /**
     * @symbol ?tick\@SquidDiveGoal\@\@UEAAXXZ
     */
    MCVAPI void tick(); // NOLINT
#endif
};
