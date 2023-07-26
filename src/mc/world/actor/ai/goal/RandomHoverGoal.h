#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RandomHoverGoal {

public:
    // prevent constructor by default
    RandomHoverGoal& operator=(RandomHoverGoal const&) = delete;
    RandomHoverGoal(RandomHoverGoal const&)            = delete;
    RandomHoverGoal()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@RandomHoverGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RandomHoverGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@RandomHoverGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@RandomHoverGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RandomHoverGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0RandomHoverGoal\@\@QEAA\@AEAVMob\@\@MHMMMUIntRange\@\@\@Z
     */
    MCAPI RandomHoverGoal(class Mob&, float, int, float, float, float, struct IntRange); // NOLINT

    // protected:
    /**
     * @symbol ?_computeNewTarget\@RandomHoverGoal\@\@IEAA_NXZ
     */
    MCAPI bool _computeNewTarget(); // NOLINT
    /**
     * @symbol ?_moveToTarget\@RandomHoverGoal\@\@IEAAXXZ
     */
    MCAPI void _moveToTarget(); // NOLINT

protected:
};
