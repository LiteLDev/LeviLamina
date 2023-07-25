#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RamAttackGoalUtils {

class RamGoalItemDropperImpl {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAMATTACKGOALUTILS_RAMGOALITEMDROPPERIMPL
public:
    RamGoalItemDropperImpl& operator=(RamGoalItemDropperImpl const&) = delete;
    RamGoalItemDropperImpl(RamGoalItemDropperImpl const&)            = delete;
    RamGoalItemDropperImpl()                                         = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tryDropHorn\@RamGoalItemDropperImpl\@RamAttackGoalUtils\@\@UEBAXVVec3\@\@\@Z
     */
    virtual void tryDropHorn(class Vec3) const;
    /**
     * @vftbl 2
     * @symbol ?checkForHornDropOnCollision\@RamGoalItemDropperImpl\@RamAttackGoalUtils\@\@UEAAXVVec3\@\@\@Z
     */
    virtual void checkForHornDropOnCollision(class Vec3);
    /**
     * @vftbl 3
     * @symbol ?dontDropHorn\@RamGoalItemDropperImpl\@RamAttackGoalUtils\@\@UEAAXXZ
     */
    virtual void dontDropHorn();
};

}; // namespace RamAttackGoalUtils
