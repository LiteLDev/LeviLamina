#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveTowardsRestrictionGoal {

public:
    // prevent constructor by default
    MoveTowardsRestrictionGoal& operator=(MoveTowardsRestrictionGoal const&) = delete;
    MoveTowardsRestrictionGoal(MoveTowardsRestrictionGoal const&)            = delete;
    MoveTowardsRestrictionGoal()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@MoveTowardsRestrictionGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@MoveTowardsRestrictionGoal\@\@UEAAXXZ
     */
    virtual void start();
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_randomizeWantedPositionTowardsRestriction\@MoveTowardsRestrictionGoal\@\@IEAA_NAEBVVec3\@\@\@Z
     */
    MCAPI bool _randomizeWantedPositionTowardsRestriction(class Vec3 const&);
    // NOLINTEND
};
