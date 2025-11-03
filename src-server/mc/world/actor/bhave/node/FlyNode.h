#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class FlyNode : public ::BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mHaveCheckedFlightStatus;
    ::ll::TypedStorage<1, 1, bool> mJumpedLastTick;
    ::ll::TypedStorage<1, 1, bool> mJumpedOnce;
    ::ll::TypedStorage<1, 1, bool> mShouldBeFlying;
    ::ll::TypedStorage<1, 1, bool> mShouldThrowEventIfNoStateChangeNecessary;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::BehaviorStatus tick(::Actor&) /*override*/;

    // vIndex: 2
    virtual void initializeFromDefinition(::Actor& owner) /*override*/;

    // vIndex: 0
    virtual ~FlyNode() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeFromDefinition(::Actor& owner);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
