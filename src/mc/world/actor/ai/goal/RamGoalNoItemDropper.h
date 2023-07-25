#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RamAttackGoalUtils {

class RamGoalNoItemDropper {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAMATTACKGOALUTILS_RAMGOALNOITEMDROPPER
public:
    RamGoalNoItemDropper& operator=(RamGoalNoItemDropper const&) = delete;
    RamGoalNoItemDropper(RamGoalNoItemDropper const&)            = delete;
    RamGoalNoItemDropper()                                       = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAMATTACKGOALUTILS_RAMGOALNOITEMDROPPER
    /**
     * @symbol ?checkForHornDropOnCollision\@RamGoalNoItemDropper\@RamAttackGoalUtils\@\@UEAAXVVec3\@\@\@Z
     */
    MCVAPI void checkForHornDropOnCollision(class Vec3);
    /**
     * @symbol ?dontDropHorn\@RamGoalNoItemDropper\@RamAttackGoalUtils\@\@UEAAXXZ
     */
    MCVAPI void dontDropHorn();
    /**
     * @symbol ?tryDropHorn\@RamGoalNoItemDropper\@RamAttackGoalUtils\@\@UEBAXVVec3\@\@\@Z
     */
    MCVAPI void tryDropHorn(class Vec3) const;
#endif
};

}; // namespace RamAttackGoalUtils
