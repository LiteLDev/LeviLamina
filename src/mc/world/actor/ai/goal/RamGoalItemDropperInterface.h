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
    RamGoalItemDropperInterface& operator=(RamGoalItemDropperInterface const&);
    RamGoalItemDropperInterface(RamGoalItemDropperInterface const&);
    RamGoalItemDropperInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RamGoalItemDropperInterface@@@UEAA@XZ
    virtual ~RamGoalItemDropperInterface();

    // vIndex: 1, symbol: ?tryDropHorn@RamGoalItemDropperImpl@RamAttackGoalUtils@@UEBAXVVec3@@@Z
    virtual void tryDropHorn(class Vec3) const = 0;

    // vIndex: 2, symbol: ?checkForHornDropOnCollision@RamGoalItemDropperImpl@RamAttackGoalUtils@@UEAAXVVec3@@@Z
    virtual void checkForHornDropOnCollision(class Vec3) = 0;

    // vIndex: 3, symbol: ?dontDropHorn@RamGoalItemDropperImpl@RamAttackGoalUtils@@UEAAXXZ
    virtual void dontDropHorn() = 0;

    // NOLINTEND
};

}; // namespace RamAttackGoalUtils
