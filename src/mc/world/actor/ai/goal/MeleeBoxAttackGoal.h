#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MeleeAttackBaseGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
// clang-format on

class MeleeBoxAttackGoal : public ::MeleeAttackBaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mHorizontalReach;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MeleeBoxAttackGoal() /*override*/ = default;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _isTargetInLineOfSight(::Mob const& mob, ::Actor const& target);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
