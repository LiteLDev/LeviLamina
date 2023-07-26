#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FollowCaravanGoal {

public:
    // prevent constructor by default
    FollowCaravanGoal& operator=(FollowCaravanGoal const&) = delete;
    FollowCaravanGoal(FollowCaravanGoal const&)            = delete;
    FollowCaravanGoal()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@FollowCaravanGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@FollowCaravanGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@FollowCaravanGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@FollowCaravanGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@FollowCaravanGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@FollowCaravanGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol
     * ??0FollowCaravanGoal\@\@QEAA\@AEAVMob\@\@MHAEBV?$vector\@UMobDescriptor\@\@V?$allocator\@UMobDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI FollowCaravanGoal(class Mob&, float, int, std::vector<struct MobDescriptor> const&); // NOLINT

    // private:
    /**
     * @symbol ?checkCaravanType\@FollowCaravanGoal\@\@AEAA_NPEAVMob\@\@\@Z
     */
    MCAPI bool checkCaravanType(class Mob*); // NOLINT
    /**
     * @symbol ?firstIsLeashed\@FollowCaravanGoal\@\@AEAA_NPEAVMob\@\@H\@Z
     */
    MCAPI bool firstIsLeashed(class Mob*, int); // NOLINT

private:
};
