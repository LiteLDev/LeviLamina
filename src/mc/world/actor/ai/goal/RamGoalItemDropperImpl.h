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

class RamGoalItemDropperImpl : public ::RamAttackGoalUtils::RamGoalItemDropperInterface {
public:
    // prevent constructor by default
    RamGoalItemDropperImpl& operator=(RamGoalItemDropperImpl const&);
    RamGoalItemDropperImpl(RamGoalItemDropperImpl const&);
    RamGoalItemDropperImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RamGoalItemDropperImpl@@@UEAA@XZ
    virtual ~RamGoalItemDropperImpl();

    // vIndex: 1, symbol: ?tryDropHorn@RamGoalItemDropperImpl@RamAttackGoalUtils@@UEBAXVVec3@@@Z
    virtual void tryDropHorn(class Vec3) const;

    // vIndex: 2, symbol: ?checkForHornDropOnCollision@RamGoalItemDropperImpl@RamAttackGoalUtils@@UEAAXVVec3@@@Z
    virtual void checkForHornDropOnCollision(class Vec3);

    // vIndex: 3, symbol: ?dontDropHorn@RamGoalItemDropperImpl@RamAttackGoalUtils@@UEAAXXZ
    virtual void dontDropHorn();

    // NOLINTEND
};

}; // namespace RamAttackGoalUtils
