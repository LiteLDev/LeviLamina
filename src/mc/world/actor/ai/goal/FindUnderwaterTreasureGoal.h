#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class FindUnderwaterTreasureGoal : public ::Goal {

public:
    // prevent constructor by default
    FindUnderwaterTreasureGoal& operator=(FindUnderwaterTreasureGoal const&) = delete;
    FindUnderwaterTreasureGoal(FindUnderwaterTreasureGoal const&)            = delete;
    FindUnderwaterTreasureGoal()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@FindUnderwaterTreasureGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@FindUnderwaterTreasureGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol ?canBeInterrupted\@FindUnderwaterTreasureGoal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @vftbl 4
     * @symbol ?start\@FindUnderwaterTreasureGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@FindUnderwaterTreasureGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@FindUnderwaterTreasureGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@FindUnderwaterTreasureGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0FindUnderwaterTreasureGoal\@\@QEAA\@AEAVMob\@\@MHH\@Z
     */
    MCAPI FindUnderwaterTreasureGoal(class Mob&, float, int, int);
    // NOLINTEND
};
