#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveThroughVillageGoal {

public:
    // prevent constructor by default
    MoveThroughVillageGoal& operator=(MoveThroughVillageGoal const&) = delete;
    MoveThroughVillageGoal(MoveThroughVillageGoal const&)            = delete;
    MoveThroughVillageGoal()                                         = delete;

public:
    // NOLINTBEGIN
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
     * @symbol ?start\@MoveThroughVillageGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@MoveThroughVillageGoal\@\@UEAAXXZ
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
     * ?appendDebugInfo\@MoveThroughVillageGoal\@\@EEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVETHROUGHVILLAGEGOAL
    /**
     * @symbol ?canContinueToUse\@MoveThroughVillageGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canContinueToUse();
    /**
     * @symbol ?canUse\@MoveThroughVillageGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canUse();
#endif
    /**
     * @symbol ??0MoveThroughVillageGoal\@\@QEAA\@AEAVMob\@\@M_N\@Z
     */
    MCAPI MoveThroughVillageGoal(class Mob&, float, bool);
    // NOLINTEND
};
