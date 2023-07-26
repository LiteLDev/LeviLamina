#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace RamAttackGoalUtils {

class RamGoalItemDropperImpl {

public:
    // prevent constructor by default
    RamGoalItemDropperImpl& operator=(RamGoalItemDropperImpl const&) = delete;
    RamGoalItemDropperImpl(RamGoalItemDropperImpl const&)            = delete;
    RamGoalItemDropperImpl()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?tryDropHorn\@RamGoalItemDropperImpl\@RamAttackGoalUtils\@\@UEBAXVVec3\@\@\@Z
     */
    virtual void tryDropHorn(class Vec3) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?checkForHornDropOnCollision\@RamGoalItemDropperImpl\@RamAttackGoalUtils\@\@UEAAXVVec3\@\@\@Z
     */
    virtual void checkForHornDropOnCollision(class Vec3); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?dontDropHorn\@RamGoalItemDropperImpl\@RamAttackGoalUtils\@\@UEAAXXZ
     */
    virtual void dontDropHorn(); // NOLINT
};

}; // namespace RamAttackGoalUtils
