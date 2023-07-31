#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FollowMobGoal {

public:
    // prevent constructor by default
    FollowMobGoal& operator=(FollowMobGoal const&) = delete;
    FollowMobGoal(FollowMobGoal const&)            = delete;
    FollowMobGoal()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@FollowMobGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@FollowMobGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@FollowMobGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@FollowMobGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@FollowMobGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@FollowMobGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0FollowMobGoal\@\@QEAA\@AEAVMob\@\@MMH\@Z
     */
    MCAPI FollowMobGoal(class Mob&, float, float, int);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_setWantedMob\@FollowMobGoal\@\@AEAA_NXZ
     */
    MCAPI bool _setWantedMob();
    // NOLINTEND
};
