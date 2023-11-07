#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/RamGoalItemDropperInterface.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace RamAttackGoalUtils { class RamGoalItemDropperInterface; }
// clang-format on

namespace RamAttackGoalUtils {

class RamGoalNoItemDropper : public ::RamAttackGoalUtils::RamGoalItemDropperInterface {
public:
    // prevent constructor by default
    RamGoalNoItemDropper& operator=(RamGoalNoItemDropper const&);
    RamGoalNoItemDropper(RamGoalNoItemDropper const&);
    RamGoalNoItemDropper();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RamGoalNoItemDropper@RamAttackGoalUtils@@UEAA@XZ
    virtual ~RamGoalNoItemDropper() = default;

    // vIndex: 1, symbol: ?tryDropHorn@RamGoalNoItemDropper@RamAttackGoalUtils@@UEBAXVVec3@@@Z
    virtual void tryDropHorn(class Vec3) const;

    // vIndex: 2, symbol: ?checkForHornDropOnCollision@RamGoalNoItemDropper@RamAttackGoalUtils@@UEAAXVVec3@@@Z
    virtual void checkForHornDropOnCollision(class Vec3);

    // vIndex: 3, symbol: ?dontDropHorn@RamGoalNoItemDropper@RamAttackGoalUtils@@UEAAXXZ
    virtual void dontDropHorn();

    // NOLINTEND
};

}; // namespace RamAttackGoalUtils
