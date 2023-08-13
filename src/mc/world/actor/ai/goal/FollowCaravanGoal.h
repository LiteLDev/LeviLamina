#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class FollowCaravanGoal : public ::Goal {

public:
    // prevent constructor by default
    FollowCaravanGoal& operator=(FollowCaravanGoal const&) = delete;
    FollowCaravanGoal(FollowCaravanGoal const&)            = delete;
    FollowCaravanGoal()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@FollowCaravanGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@FollowCaravanGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@FollowCaravanGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@FollowCaravanGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@FollowCaravanGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@FollowCaravanGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol
     * ??0FollowCaravanGoal\@\@QEAA\@AEAVMob\@\@MHAEBV?$vector\@UMobDescriptor\@\@V?$allocator\@UMobDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI FollowCaravanGoal(class Mob&, float, int, std::vector<struct MobDescriptor> const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?checkCaravanType\@FollowCaravanGoal\@\@AEAA_NPEAVMob\@\@\@Z
     */
    MCAPI bool checkCaravanType(class Mob*);
    /**
     * @symbol ?firstIsLeashed\@FollowCaravanGoal\@\@AEAA_NPEAVMob\@\@H\@Z
     */
    MCAPI bool firstIsLeashed(class Mob*, int);
    // NOLINTEND
};
