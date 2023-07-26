#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HoldGroundGoal {

public:
    // prevent constructor by default
    HoldGroundGoal& operator=(HoldGroundGoal const&) = delete;
    HoldGroundGoal(HoldGroundGoal const&)            = delete;
    HoldGroundGoal()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@HoldGroundGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@HoldGroundGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@HoldGroundGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@HoldGroundGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@HoldGroundGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@HoldGroundGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0HoldGroundGoal\@\@QEAA\@AEAVMob\@\@M_NMAEBVActorDefinitionTrigger\@\@\@Z
     */
    MCAPI HoldGroundGoal(class Mob&, float, bool, float, class ActorDefinitionTrigger const&); // NOLINT
};
