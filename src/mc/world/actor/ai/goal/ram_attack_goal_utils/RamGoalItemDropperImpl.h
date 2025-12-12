#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/ram_attack_goal_utils/RamGoalItemDropperInterface.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace RamAttackGoalUtils {

class RamGoalItemDropperImpl : public ::RamAttackGoalUtils::RamGoalItemDropperInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk996b29;
    ::ll::UntypedStorage<1, 1> mUnk773947;
    // NOLINTEND

public:
    // prevent constructor by default
    RamGoalItemDropperImpl& operator=(RamGoalItemDropperImpl const&);
    RamGoalItemDropperImpl(RamGoalItemDropperImpl const&);
    RamGoalItemDropperImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tryDropHorn(::Vec3 dropPos) const /*override*/;

    virtual void checkForHornDropOnCollision(::Vec3 collisionPos) /*override*/;

    virtual void dontDropHorn() /*override*/;

    virtual ~RamGoalItemDropperImpl() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tryDropHorn(::Vec3 dropPos) const;

    MCNAPI void $checkForHornDropOnCollision(::Vec3 collisionPos);

    MCNAPI void $dontDropHorn();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace RamAttackGoalUtils
