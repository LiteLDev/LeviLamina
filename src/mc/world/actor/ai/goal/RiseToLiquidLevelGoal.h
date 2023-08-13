#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RiseToLiquidLevelGoal : public ::Goal {

public:
    // prevent constructor by default
    RiseToLiquidLevelGoal& operator=(RiseToLiquidLevelGoal const&) = delete;
    RiseToLiquidLevelGoal(RiseToLiquidLevelGoal const&)            = delete;
    RiseToLiquidLevelGoal()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@RiseToLiquidLevelGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 6
     * @symbol ?tick\@RiseToLiquidLevelGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RiseToLiquidLevelGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0RiseToLiquidLevelGoal\@\@QEAA\@AEAVMob\@\@MMM\@Z
     */
    MCAPI RiseToLiquidLevelGoal(class Mob&, float, float, float);
    // NOLINTEND
};
