#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FollowFlockGoal {

public:
    // prevent constructor by default
    FollowFlockGoal& operator=(FollowFlockGoal const&) = delete;
    FollowFlockGoal(FollowFlockGoal const&)            = delete;
    FollowFlockGoal()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@FollowFlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@FollowFlockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?canBeInterrupted\@FollowFlockGoal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@FollowFlockGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@FollowFlockGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@FollowFlockGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@FollowFlockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0FollowFlockGoal\@\@QEAA\@AEAVMob\@\@M\@Z
     */
    MCAPI FollowFlockGoal(class Mob&, float); // NOLINT
};
