#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class StalkAndPounceOnTargetGoal : public ::Goal {

public:
    // prevent constructor by default
    StalkAndPounceOnTargetGoal& operator=(StalkAndPounceOnTargetGoal const&) = delete;
    StalkAndPounceOnTargetGoal(StalkAndPounceOnTargetGoal const&)            = delete;
    StalkAndPounceOnTargetGoal()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@StalkAndPounceOnTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@StalkAndPounceOnTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol ?canBeInterrupted\@StalkAndPounceOnTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @vftbl 4
     * @symbol ?start\@StalkAndPounceOnTargetGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@StalkAndPounceOnTargetGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@StalkAndPounceOnTargetGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@StalkAndPounceOnTargetGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0StalkAndPounceOnTargetGoal\@\@QEAA\@AEAVMob\@\@AEBVActorFilterGroup\@\@MMMMMMMM_N\@Z
     */
    MCAPI StalkAndPounceOnTargetGoal(
        class Mob&,
        class ActorFilterGroup const&,
        float,
        float,
        float,
        float,
        float,
        float,
        float,
        float,
        bool
    );
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_isStuckBlock\@StalkAndPounceOnTargetGoal\@\@AEBA_NVBlockPos\@\@\@Z
     */
    MCAPI bool _isStuckBlock(class BlockPos) const;
    /**
     * @symbol ?_preparePounce\@StalkAndPounceOnTargetGoal\@\@AEAAXAEBVVec3\@\@0\@Z
     */
    MCAPI void _preparePounce(class Vec3 const&, class Vec3 const&);
    // NOLINTEND
};
