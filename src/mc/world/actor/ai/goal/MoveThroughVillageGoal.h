#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveThroughVillageGoal {

public:
    // prevent constructor by default
    MoveThroughVillageGoal& operator=(MoveThroughVillageGoal const&) = delete;
    MoveThroughVillageGoal(MoveThroughVillageGoal const&)            = delete;
    MoveThroughVillageGoal()                                         = delete;

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
     * @symbol ?start\@MoveThroughVillageGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@MoveThroughVillageGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@MoveThroughVillageGoal\@\@EEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVETHROUGHVILLAGEGOAL
    /**
     * @symbol ?canContinueToUse\@MoveThroughVillageGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canContinueToUse(); // NOLINT
    /**
     * @symbol ?canUse\@MoveThroughVillageGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canUse(); // NOLINT
#endif
    /**
     * @symbol ??0MoveThroughVillageGoal\@\@QEAA\@AEAVMob\@\@M_N\@Z
     */
    MCAPI MoveThroughVillageGoal(class Mob&, float, bool); // NOLINT
};
