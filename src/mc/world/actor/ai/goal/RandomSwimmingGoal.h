#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

class RandomSwimmingGoal : public ::RandomStrollGoal {

public:
    // prevent constructor by default
    RandomSwimmingGoal& operator=(RandomSwimmingGoal const&) = delete;
    RandomSwimmingGoal(RandomSwimmingGoal const&)            = delete;
    RandomSwimmingGoal()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@RandomSwimmingGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RandomSwimmingGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RandomSwimmingGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @vftbl 10
     * @symbol ?_setWantedPosition\@RandomSwimmingGoal\@\@MEAA_NXZ
     */
    virtual bool _setWantedPosition();
    /**
     * @symbol ??0RandomSwimmingGoal\@\@QEAA\@AEAVMob\@\@MHHH_N\@Z
     */
    MCAPI RandomSwimmingGoal(class Mob&, float, int, int, int, bool);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_getWaterHeights\@RandomSwimmingGoal\@\@IEAAXVBlockPos\@\@AEAFAEAM22\@Z
     */
    MCAPI void _getWaterHeights(class BlockPos, short&, float&, float&, float&);
    // NOLINTEND
};
