#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/ram_attack_goal_utils/RamGoalItemDropperInterface.h"

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
    // vIndex: 0
    virtual ~RamGoalItemDropperImpl() = default;

    // vIndex: 1
    virtual void tryDropHorn(class Vec3 dropPos) const;

    // vIndex: 2
    virtual void checkForHornDropOnCollision(class Vec3 collisionPos);

    // vIndex: 3
    virtual void dontDropHorn();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void checkForHornDropOnCollision$(class Vec3 collisionPos);

    MCAPI void dontDropHorn$();

    MCAPI void tryDropHorn$(class Vec3 dropPos) const;

    // NOLINTEND
};

}; // namespace RamAttackGoalUtils
