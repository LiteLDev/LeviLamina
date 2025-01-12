#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

class MoveTowardsRestrictionGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk9c918c;
    ::ll::UntypedStorage<4, 4>  mUnk4a0d42;
    ::ll::UntypedStorage<4, 12> mUnkde2dba;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveTowardsRestrictionGoal& operator=(MoveTowardsRestrictionGoal const&);
    MoveTowardsRestrictionGoal(MoveTowardsRestrictionGoal const&);
    MoveTowardsRestrictionGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveTowardsRestrictionGoal() /*override*/ = default;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _randomizeWantedPositionTowardsRestriction(::Vec3 const& restrictionCenter);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canContinueToUse();

    MCAPI void $start();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
