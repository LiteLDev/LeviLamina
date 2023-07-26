#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FollowTargetCaptainGoal {

public:
    // prevent constructor by default
    FollowTargetCaptainGoal& operator=(FollowTargetCaptainGoal const&) = delete;
    FollowTargetCaptainGoal(FollowTargetCaptainGoal const&)            = delete;
    FollowTargetCaptainGoal()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@FollowTargetCaptainGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@FollowTargetCaptainGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@FollowTargetCaptainGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@FollowTargetCaptainGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@FollowTargetCaptainGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@FollowTargetCaptainGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0FollowTargetCaptainGoal\@\@QEAA\@AEAVMob\@\@MMM\@Z
     */
    MCAPI FollowTargetCaptainGoal(class Mob&, float, float, float); // NOLINT

    // private:
    /**
     * @symbol ?_determineMovePos\@FollowTargetCaptainGoal\@\@AEAAXXZ
     */
    MCAPI void _determineMovePos(); // NOLINT

private:
};
