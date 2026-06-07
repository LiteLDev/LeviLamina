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
    // prevent constructor by default
    MeleeBoxAttackGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MeleeBoxAttackGoal() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MeleeBoxAttackGoal(::Mob& mob);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static bool _isTargetInLineOfSight(::Mob const& mob, ::Actor const& target);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
