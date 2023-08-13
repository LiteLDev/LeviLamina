#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RandomHoverGoal : public ::Goal {

public:
    // prevent constructor by default
    RandomHoverGoal& operator=(RandomHoverGoal const&) = delete;
    RandomHoverGoal(RandomHoverGoal const&)            = delete;
    RandomHoverGoal()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@RandomHoverGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RandomHoverGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@RandomHoverGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 6
     * @symbol ?tick\@RandomHoverGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RandomHoverGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0RandomHoverGoal\@\@QEAA\@AEAVMob\@\@MHMMMUIntRange\@\@\@Z
     */
    MCAPI RandomHoverGoal(class Mob&, float, int, float, float, float, struct IntRange);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_computeNewTarget\@RandomHoverGoal\@\@IEAA_NXZ
     */
    MCAPI bool _computeNewTarget();
    /**
     * @symbol ?_moveToTarget\@RandomHoverGoal\@\@IEAAXXZ
     */
    MCAPI void _moveToTarget();
    // NOLINTEND
};
