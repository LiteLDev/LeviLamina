#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

class RandomSwimmingGoal : public ::RandomStrollGoal {

public:
    // prevent constructor by default
    RandomSwimmingGoal& operator=(RandomSwimmingGoal const&) = delete;
    RandomSwimmingGoal(RandomSwimmingGoal const&)            = delete;
    RandomSwimmingGoal()                                     = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@RandomSwimmingGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RandomSwimmingGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RandomSwimmingGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8(); // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9(); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?_setWantedPosition\@RandomSwimmingGoal\@\@MEAA_NXZ
     */
    virtual bool _setWantedPosition(); // NOLINT
    /**
     * @symbol ??0RandomSwimmingGoal\@\@QEAA\@AEAVMob\@\@MHHH_N\@Z
     */
    MCAPI RandomSwimmingGoal(class Mob&, float, int, int, int, bool); // NOLINT

    // protected:
    /**
     * @symbol ?_getWaterHeights\@RandomSwimmingGoal\@\@IEAAXVBlockPos\@\@AEAFAEAM22\@Z
     */
    MCAPI void _getWaterHeights(class BlockPos, short&, float&, float&, float&); // NOLINT

protected:
};
