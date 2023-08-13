#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveTowardsTargetGoal.h"

class FollowTargetCaptainGoal : public ::MoveTowardsTargetGoal {

public:
    // prevent constructor by default
    FollowTargetCaptainGoal& operator=(FollowTargetCaptainGoal const&) = delete;
    FollowTargetCaptainGoal(FollowTargetCaptainGoal const&)            = delete;
    FollowTargetCaptainGoal()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@FollowTargetCaptainGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@FollowTargetCaptainGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@FollowTargetCaptainGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@FollowTargetCaptainGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@FollowTargetCaptainGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@FollowTargetCaptainGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0FollowTargetCaptainGoal\@\@QEAA\@AEAVMob\@\@MMM\@Z
     */
    MCAPI FollowTargetCaptainGoal(class Mob&, float, float, float);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_determineMovePos\@FollowTargetCaptainGoal\@\@AEAAXXZ
     */
    MCAPI void _determineMovePos();
    // NOLINTEND
};
