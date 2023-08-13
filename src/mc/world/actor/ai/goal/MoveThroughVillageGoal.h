#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class MoveThroughVillageGoal : public ::Goal {

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
     * @symbol ?canUse\@MoveThroughVillageGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@MoveThroughVillageGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
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
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@MoveThroughVillageGoal\@\@EEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0MoveThroughVillageGoal\@\@QEAA\@AEAVMob\@\@M_N\@Z
     */
    MCAPI MoveThroughVillageGoal(class Mob&, float, bool);
    // NOLINTEND
};
