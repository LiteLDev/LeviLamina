#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveTowardsRestrictionGoal {

public:
    // prevent constructor by default
    MoveTowardsRestrictionGoal& operator=(MoveTowardsRestrictionGoal const&) = delete;
    MoveTowardsRestrictionGoal(MoveTowardsRestrictionGoal const&)            = delete;
    MoveTowardsRestrictionGoal()                                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@MoveTowardsRestrictionGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@MoveTowardsRestrictionGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT

    // protected:
    /**
     * @symbol ?_randomizeWantedPositionTowardsRestriction\@MoveTowardsRestrictionGoal\@\@IEAA_NAEBVVec3\@\@\@Z
     */
    MCAPI bool _randomizeWantedPositionTowardsRestriction(class Vec3 const&); // NOLINT

protected:
};
