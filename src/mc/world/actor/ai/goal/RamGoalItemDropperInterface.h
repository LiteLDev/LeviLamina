#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace RamAttackGoalUtils {

class RamGoalItemDropperInterface {

public:
    // prevent constructor by default
    RamGoalItemDropperInterface& operator=(RamGoalItemDropperInterface const&) = delete;
    RamGoalItemDropperInterface(RamGoalItemDropperInterface const&)            = delete;
    RamGoalItemDropperInterface()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tryDropHorn\@RamGoalItemDropperImpl\@RamAttackGoalUtils\@\@UEBAXVVec3\@\@\@Z
     */
    virtual void tryDropHorn(class Vec3) const = 0;
    /**
     * @vftbl 2
     * @symbol ?checkForHornDropOnCollision\@RamGoalItemDropperImpl\@RamAttackGoalUtils\@\@UEAAXVVec3\@\@\@Z
     */
    virtual void checkForHornDropOnCollision(class Vec3) = 0;
    /**
     * @vftbl 3
     * @symbol ?dontDropHorn\@RamGoalItemDropperImpl\@RamAttackGoalUtils\@\@UEAAXXZ
     */
    virtual void dontDropHorn() = 0;
    // NOLINTEND
};

}; // namespace RamAttackGoalUtils
