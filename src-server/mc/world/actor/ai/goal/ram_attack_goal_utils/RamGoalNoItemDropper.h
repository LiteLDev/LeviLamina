#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/ram_attack_goal_utils/RamGoalItemDropperInterface.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace RamAttackGoalUtils {

class RamGoalNoItemDropper : public ::RamAttackGoalUtils::RamGoalItemDropperInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void tryDropHorn(::Vec3 dropPos) const /*override*/;

    // vIndex: 2
    virtual void checkForHornDropOnCollision(::Vec3 collisionPos) /*override*/;

    // vIndex: 3
    virtual void dontDropHorn() /*override*/;

    // vIndex: 0
    virtual ~RamGoalNoItemDropper() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $tryDropHorn(::Vec3 dropPos) const;

    MCFOLD void $checkForHornDropOnCollision(::Vec3 collisionPos);

    MCFOLD void $dontDropHorn();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
