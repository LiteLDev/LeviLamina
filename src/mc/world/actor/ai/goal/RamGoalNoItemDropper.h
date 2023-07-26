#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace RamAttackGoalUtils {

class RamGoalNoItemDropper {

public:
    // prevent constructor by default
    RamGoalNoItemDropper& operator=(RamGoalNoItemDropper const&) = delete;
    RamGoalNoItemDropper(RamGoalNoItemDropper const&)            = delete;
    RamGoalNoItemDropper()                                       = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAMATTACKGOALUTILS_RAMGOALNOITEMDROPPER
    /**
     * @symbol ?checkForHornDropOnCollision\@RamGoalNoItemDropper\@RamAttackGoalUtils\@\@UEAAXVVec3\@\@\@Z
     */
    MCVAPI void checkForHornDropOnCollision(class Vec3); // NOLINT
    /**
     * @symbol ?dontDropHorn\@RamGoalNoItemDropper\@RamAttackGoalUtils\@\@UEAAXXZ
     */
    MCVAPI void dontDropHorn(); // NOLINT
    /**
     * @symbol ?tryDropHorn\@RamGoalNoItemDropper\@RamAttackGoalUtils\@\@UEBAXVVec3\@\@\@Z
     */
    MCVAPI void tryDropHorn(class Vec3) const; // NOLINT
#endif
};

}; // namespace RamAttackGoalUtils
